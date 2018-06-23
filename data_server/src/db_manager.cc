/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-01 14:51
 * Last modified : 2018-06-21 21:44
 * Filename      : db_manager.cc
 * Description   : 
 * *******************************************************/
#include "db_manager.h"
#include "err_code.h"
#include "log.h"
using std::cout;
using std::endl;
namespace data_server {
std::mutex DBConnFactory::data_mutex_;

int DBManager::Connect() {
  try {
    sql::Driver *driver = get_driver_instance();
    string endpoint = db_host_ + ":" + std::to_string(db_port_);
    conn_.reset(driver->connect(endpoint, db_user_, db_passwd_));
    stmt_.reset(conn_->createStatement());
    stmt_->execute("USE " + db_name_);        
  } catch(sql::SQLException &e) {
    LOG_ERROR << "db exception:" << e.what();
    return E_ORDER_DB_EXCEPTION;
  } catch(std::runtime_error &e) {
    LOG_ERROR << "db runtime error:" << e.what();
    return E_ORDER_DB_EXCEPTION;
  }

  return 0;
}

int DBManager::GetId(const DataReq& req, uint64_t* id) {
  int ret = 0;
  for (int i = 0; i < 2; ++i) {
    try {
      string stmt_str("SELECT id FROM " + data_point_table_ + " WHERE building='" 
          + req.building() + "' AND collector = '" + req.collector() 
          + "' AND conn_type = " + std::to_string(req.conn_type())
          + " AND device = '" + req.device() + "' AND desc = '" 
          + req.desc() + "' AND unit = '" + req.unit() + "'"); 

      std::unique_ptr<sql::ResultSet> res(stmt_->executeQuery(stmt_str);
      if (res->rowsCount() == 0) {
        return E_NOT_EXIST_IN_DB;
      }

      res->next(); 
      *id = res->getUInt64("id");
      break;
    } catch(sql::SQLException &e) {
      if (0 == i) { 
        LOG_WARN << "db reconnect";
        ret = Connect(); // try reconnect
        if (ret != 0) return ret;
      } else {  // select failed again
        LOG_ERROR << "db exception:" << e.what();
        return E_DB_EXCEPTION;
      }
    } catch(std::runtime_error &e) {
      LOG_ERROR << "db runtime error:" << e.what();
      return E_SYSTEM;
    }
  }
  return 0;
}

int DBManager::InsertData(const uint64_t id, const DataReq& req) {
  int ret = 0;
  for (int i = 0; i < 2; ++i) {
    try {
      std::unique_ptr<sql::ResultSet> res(stmt_->executeQuery(
            "SELECT SUM(impression) AS imp_sum FROM " + db_table_name 
            + " WHERE order_date='"
            + date + "' AND status = 1 AND product_type = " 
            + std::to_string(ad_type)));

      if (res->rowsCount() == 0) {
        *count = conf_count;
        return 0;
      }

      res->next(); 
      ordered_count = res->getUInt64("imp_sum");
      break;
    } catch(sql::SQLException &e) {
      if (0 == i) { 
        LOG_WARN << "order db reconnect";
        ret = Connect(); // try reconnect
        if (ret != 0) return ret;
      } else {  // select failed again
        return E_ORDER_DB_EXCEPTION;
      }
    } catch(std::runtime_error &e) {
      LOG_ERROR << "order db runtime error:" << e.what();
      return E_SYSTEM;
    }
  }

  return 0;
}

void* DBConnFactory::CreateData() const {
  DBManager* db_manager = NULL;
  std::lock_guard<std::mutex> lock(data_mutex_);
  db_manager = new DBManager();  
  LOG_INFO << "create db connection, ptr:" << db_manager;
  return db_manager;
}  

void DBConnFactory::DestroyData(void* db_manager) const {
  std::lock_guard<std::mutex> lock(data_mutex_);
  delete static_cast<DBManager*>(db_manager);
  db_manager = NULL;
}  

} // namespace data_server 
