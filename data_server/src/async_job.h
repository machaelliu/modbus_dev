/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-14 20:17
 * Last modified : 2018-06-21 22:11
 * Filename      : async_job.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_SERVER_ASYNC_JOB_H_
#define _DATA_SERVER_ASYNC_JOB_H_
#include <string>
#include <brpc/server.h>
#include <brpc/restful.h>
#include "log.h"
#include "singleton.h"

namespace kepler_face {
class AsyncJob {
 public:
  AsyncJob(brpc::Controller* cntl,
      google::protobuf::Closure* done,
      DataResp* response):
    cntl_(cntl), done_(done), response_(response) {}
  void RunAndDelete();
  static void* Worker(void *args);

 private:
  void Run();
  int CheckRequest(const DataReq& req_data, brpc::Controller *cntl);
  brpc::Controller* cntl_;
  google::protobuf::Closure* done_;
  DataResp* response_;
};

} // namespace kepler_face

#endif // _DATA_SERVER_ASYNC_JOB_H_
