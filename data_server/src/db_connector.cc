/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-02 18:49
 * Last modified : 2018-06-02 18:49
 * Filename      : db_connector.cc
 * Description   : 
 * *******************************************************/
#include "db_connector.h"
#include "log.h"
namespace data_server {
std::mutex DBConnFactory::data_mutex_;

void* DBConnFactory::CreateData() const {
  DBConn* db_conn = NULL;
  {
    std::lock_guard<std::mutex> lock(data_mutex_);
    db_conn = new DBConn();  
  }

  try {
    sql::Driver *driver = get_driver_instance();
    string endpoint = db_host_ + ":" + std::to_string(db_port_);
    db_conn->conn_.reset(driver->connect(endpoint, db_user_, db_passwd_));
    db_conn->stmt_.reset(db_conn->conn_->createStatement());
    db_conn->stmt_->execute("USE " + db_name_);        
  } catch(sql::SQLException &e) {
    LOG_ERROR << "db exception:" << e.what();
    return NULL;
  } catch(std::runtime_error &e) {
    LOG_ERROR << "db runtime error:" << e.what();
    return NULL;
  }

  LOG_INFO << "create new mysql connection";
  return db_conn;
}  

void DBConnFactory::DestroyData(void* conn) const {
  std::lock_guard<std::mutex> lock(data_mutex_);
  delete static_cast<DBConn*>(conn);
  conn = NULL;
}  

} // namespace data_server 
