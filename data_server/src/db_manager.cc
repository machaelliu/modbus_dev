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
