/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-31 19:51
 * Last modified : 2018-05-31 19:51
 * Filename      : rpc_server.cc
 * Description   : 
 * *******************************************************/
#include <gflags/gflags.h>
#include <butil/logging.h>
#include <brpc/server.h>
#include <json/json.h>
#include "data2server.pb.h"
#include "db_connector.h"
#include "log.h"
#include "rpc_server.h"
#include "err_code.h"

using data_server::ServerConfig;
using data_server::DBConn;
namespace data2server {
void DataServiceImpl::Send(google::protobuf::RpcController* cntl_base,
    const DataReq* request,
    DataResp* response,
    google::protobuf::Closure* done) {
  brpc::ClosureGuard done_guard(done);
  brpc::Controller* cntl = static_cast<brpc::Controller*>(cntl_base);

  DBConn* db_conn = static_cast<DBConn*>(brpc::thread_local_data());
  if (db_conn == NULL) {
    LOG_ERROR << "db conn is NULL";
    MakeErrResp(data_server::E_SYSTEM; 
        data_srver::g_err_map[data_server::E_SYSTEM], response);
    return;
  }

  try {
    std::unique_ptr<sql::ResultSet> res(db_conn->stmt_->executeQuery(
          "SELECT SUM(impression) AS imp_sum FROM " + db_table_name_ 
          + " WHERE order_date="
          + date + " AND status = 1 AND product_type = " 
          + std::to_string(ad_type)));

    if (res->rowsCount() == 0) {
      *count = conf_count;
      return 0;
    }

    res->next(); 
    ordered_count = res->getUInt64("imp_sum");
  } catch(std::Exception &e) {
    LOG_ERROR << "db exception:" << e.what();
    MakeErrResp(data_server::E_DB; data_srver::g_err_map[data_server::E_DB], 
        response);
    return;
  } 
}

void DataServiceImpl::MakeErrResp(int errcode, const string& errmsg, 
    DataResp* resp) {
  resp->set_errcode(errcode);
  resp->set_errmsg(errmsg);
}

}  // namespace data_server

