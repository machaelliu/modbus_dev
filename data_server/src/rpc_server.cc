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
#include "util.h"
#include "rpc_server.h"
#include "err_code.h"

using data_server::ServerConfig;
using data_server::DBConn;
using data_server::g_err_map;
namespace data2server {
void DataServiceImpl::Send(google::protobuf::RpcController* cntl_base,
    const DataReq* request,
    DataResp* response,
    google::protobuf::Closure* done) {
  brpc::ClosureGuard done_guard(done);
  string resp_data;
  brpc::Controller* cntl = static_cast<brpc::Controller*>(cntl_base); 
  AsyncJob* job = new (std::nothrow) AsyncJob(cntl, done, request); 
  if (job == NULL) {
    LOG_ERROR << "job new failed";
    data_server_util::MakeErrResp(data_server::E_SYSTEM, 
        g_err_map[data_server::E_SYSTEM], response);
    return;
  }
  job->cntl_ = cntl;
  job->req_ = request;
  job->resp_ = response;
  job->done_ = done;
  bthread_t th;
  int ret = bthread_start_background(&th, NULL, AsyncJob::Worker, job);
  if (ret != 0) {
    LOG_ERROR << "bthread start err:" << berror(ret); 
    data_server_util::MakeErrResp(data_server::E_SYSTEM, 
        g_err_map[data_server::E_SYSTEM], response);
    return;
  }

  done_guard.release();
}

}  // namespace data2server

