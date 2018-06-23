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

using ::std::string;
using ::std::unordered_set;
using ::std::map;
using ::std::cout;
using ::std::cerr;
using ::std::endl;
namespace data_server {
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

  int ret = CheckRequest(*req_, cntl_);
  if (ret != 0) {
    data_server_util::MakeErrResp(E_REQ_CONTENT, g_err_map[E_REQ_CONTENT], resp_);
    return;
  }

  auto& id_manager = Singleton<IdManager>::Instance();
  uint64_t id = 0;
  int ret = id_manager->GetId(cntl_, req_, &id);
  if (ret != 0) {
    data_server_util::MakeErrResp(ret, g_err_map[ret], resp_);
    return;
  }
  DBManager* db_manager = static_cast<DBManager*>(cntl->session_local_data());
  ret = db_manager->InsertData(id, req_);
  if (ret != 0) {
    data_server_util::MakeErrResp(ret, g_err_map[ret], resp_);
    return;
  }

  id_manager->UpdateDataTime(req_->data_time);

  resp_->set_errcode(0);
  resp_->set_errmsg("OK");

  return;
}

int AsyncJob::CheckRequest(const DataReq& req_data, brpc::Controller *cntl) {
 // unordered_set<string> white_ips;
 // const string& remote_ip(inet_ntoa(cntl->remote_side().ip));
 // auto it = white_ips.find(remote_ip);
 // if (it == white_ips.end()) {
 //   return data_server::E_REMOTE_IP;
 // }
  return 0;
}

} // namespace data_server
