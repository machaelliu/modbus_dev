/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-01 14:38
 * Last modified : 2018-06-21 21:40
 * Filename      : db_manager.h
 * Description   : thread local data manager
 * *******************************************************/

#ifndef _DATA_SERVER_DB_MANAGER_H_
#define _DATA_SERVER_DB_MANAGER_H_
#include <string>
#include <memory>
#include <mutex>
#include <json/json.h>
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <brpc/data_factory.h>
#include "singleton.h"
#include "server_conf.pb.h"
using std::string;

namespace data_server {
class DBManager {
 public:
  DBManager():svr_conf_(Singleton<ServerConfig>::Instance()) {
    // init db
    auto& db = svr_conf_.data_db();
    db_host_ = db.host();
    db_port_ = db.port();
    db_passwd_ = db.passwd();
    db_user_ = db.user();
    db_name_ = db.db_name();
    int ret = Connect();
    if (ret != 0) exit(0);
  }
  int Connect();

 private:
   std::unique_ptr<sql::Statement> stmt_;
   std::unique_ptr<sql::Connection> conn_;
   const ServerConfig& svr_conf_;
   std::string db_host_; 
   int db_port_; 
   std::string db_passwd_; 
   std::string db_user_; 
   std::string db_name_; 
};

class DBConnFactory: public brpc::DataFactory {
 public:

   void* CreateData() const;
   void DestroyData(void* db_manager) const;

 private:
   static std::mutex data_mutex_;
};

} // namespace data_server 
#endif // _DATA_SERVER_DB_MANAGER_H_
