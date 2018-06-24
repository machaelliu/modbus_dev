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
  int IdManager::GetId(brpc::Controller* cntl, const string& id_key, 
      const DataReq& req, uint64_t* id) {
    bool exist = false; 
    std::unordered_map<std::string, DBIdInfo>::iterator it;  
    {
      std::shared_lock<std::shared_mutex> lock(mutex_);
      it = data2id_.find(id_key); 
      if (it != data2id_.end()) {
        *id = it->second.id_;
        exist = true;
      }
    }

    if (exist) {
      it->second.latest_data_time_ = time(NULL);
      return  0;
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
      data2id_[id_key].id_ = id;
      data2id_[id_key].latest_data_time_ = time(NULL);
      return 0;
    } else if (ret == E_NOT_EXIST_IN_DB) {
      ret = db_manager->InsertDataPoint(req);
      if (ret != 0) return ret;
      ret = db_manager->GetId(req, id);
      if (ret != 0) return ret;
      std::unique_lock<std::shared_mutex> lock(mutex_);
      data2id_[id_key] = id;
      data2id_[id_key].latest_data_time_ = time(NULL);
    } else {  // error
      return ret;
    }
    return 0;
  }

} // namespace data_server 
