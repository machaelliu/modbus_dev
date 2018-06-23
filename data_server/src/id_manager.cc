/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-23 16:00
 * Last modified : 2018-06-23 16:00
 * Filename      : id_manager.cc
 * Description   : 
 * *******************************************************/
#include "db_manager.h"
#include "id_manager.h"
namespace data_server {
  int IdManager::GetId(brpc::Controller* cntl, const DataReq& req, uint64_t* id) {
    string id_key(req_->building() + "_" + req_->collector() + "_" 
        + std::to_string(req_->conn_type()) + "_" + req_->device()
        + "_" + req_->desc() + req_->unit());
    {
      std::shared_lock<std::shared_mutex> lock(mutex_);
      auto it = data2id_.find(id_key); 
      if (it != data2id_.end()) {
        *id = it->id_;
        return 0;
      }
    }

    // not in cache map
    DBManager* db_manager = static_cast<DBManager*>(cntl->session_local_data());
    if (db_manager == NULL) {
      LOG_ERROR << "order_db_manager is NULL";
      return E_SYSTEM;
    }

    int ret = db_manager->GetId(req, id);
    if (ret == 0) {  // exist in db
      std::unique_lock<std::shared_mutex> lock(mutex_);
      data2id_[id_key] = id;
      return 0;
    } else if (ret == E_NOT_EXIST_IN_DB) {
      ret = db_manager->InsertDataPoint(req);
      if (ret != 0) return ret;
      ret = db_manager->GetId(req, id);
      if (ret != 0) return ret;
      std::unique_lock<std::shared_mutex> lock(mutex_);
      data2id_[id_key] = id;
    } else {  // error
      return ret;
    }
    return 0;
  }

} // namespace data_server 
