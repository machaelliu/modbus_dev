/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-02 18:48
 * Last modified : 2018-06-02 18:48
 * Filename      : db_connector.h
 * Description   : 
 * *******************************************************/

#ifndef _DATA_SERVER_DB_CONNECTOR_H_
#define _DATA_SERVER_DB_CONNECTOR_H_
#include <string>
#include <memory>
#include <mutex>
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <brpc/data_factory.h>
#include "singleton.h"
#include "server_conf.pb.h"
#include "db_connector.h"
using std::string;

namespace data_server {
class DBConn {
 public:
   std::unique_ptr<sql::Statement> stmt_;
   std::unique_ptr<sql::Connection> conn_;
};


class DBConnFactory: public brpc::DataFactory {
 public:
  DBConnFactory():svr_conf_(Singleton<ServerConfig>::Instance()) {
    // init data_db
    auto& data_db = svr_conf_.data_db();
    db_host_ = data_db.host();
    db_port_ = data_db.port();
    db_passwd_ = data_db.passwd();
    db_user_ = data_db.user();
    db_name_ = data_db.db_name();
  }

  void* CreateData() const;
  void DestroyData(void* d) const;

 private:
   const ServerConfig& svr_conf_;
   std::string db_host_; 
   int db_port_; 
   std::string db_passwd_; 
   std::string db_user_; 
   std::string db_name_; 
   static std::mutex data_mutex_;
};

} // namespace data_server 

#endif // _DATA_SERVER_DB_CONNECTOR_H_
