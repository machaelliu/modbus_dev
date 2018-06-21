/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-14 20:18
 * Last modified : 2018-06-14 20:18
 * Filename      : async_job.cc
 * Description   : 
 * *******************************************************/
#include <unistd.h>
#include <arpa/inet.h>
#include <unordered_set>
#include <brpc/server.h> 
#include <json/json.h> 
#include "async_job.h"
#include "err_code.h"
#include "util.h"
#include "common.h"

using ::std::string;
using ::std::unordered_set;
using ::std::map;
using ::std::cout;
using ::std::cerr;
using ::std::endl;
using kepler_face::g_err_map;
namespace kepler_face {
void* AsyncJob::Worker(void* args) {
  AsyncJob* job = static_cast<AsyncJob*>(args);
  job->RunAndDelete();
  return NULL;
}

void AsyncJob::RunAndDelete() {
  Run();
  delete this;
}

void AsyncJob::Run() {
  brpc::ClosureGuard done_guard(done_);

  int ret = CheckRequest(req_data, response);
  if (ret != 0) {
    data_server_util::MakeErrResp(E_REQ_CONTENT, 
        g_err_map[E_REQ_CONTENT], response);
    return;
  }

}

int AsyncJob::CheckRequest(const DataReq& req_data, brpc::Controller *cntl) {
 // unordered_set<string> white_ips;
 // const string& remote_ip(inet_ntoa(cntl->remote_side().ip));
 // auto it = white_ips.find(remote_ip);
 // if (it == white_ips.end()) {
 //   string err_json = kepler_face::MakeErrResp(kepler_face::E_REMOTE_IP, 
 //       "your ip has no authorization");
 //   cntl->response_attachment().append(err_json);
 //   return kepler_face::E_REMOTE_IP;
 // }
  return 0;
}

} // namespace kepler_face
