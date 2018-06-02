/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-31 19:43
 * Last modified : 2018-05-31 19:43
 * Filename      : main.cc
 * Description   : 
 * *******************************************************/
#include <string> 
#include <fstream> 
#include <butil/logging.h>
#include <brpc/server.h>
#include <google/protobuf/text_format.h>
#include <gflags/gflags.h>
#include "server_conf.pb.h"
#include "db_connector.h"
#include "rpc_server.h"
#include "err_code.h"
#include "log.h"

using data_server::Singleton;
using data_server::DBConnFactory;
using data_server::ServerConfig;

DEFINE_string(c, "",  "config file path");  
int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_c.empty()) {
    std::cerr << "missing config file with -c" << std::endl;
    return EXIT_FAILURE;
  }
  auto& svr_conf = Singleton<ServerConfig>::Instance();
  std::ifstream fin(FLAGS_c);
  if (!fin) {
    std::cerr << "conf file open error:" << FLAGS_c << std::endl;
    return EXIT_FAILURE;
  }
  std::ostringstream tmp;
  tmp << fin.rdbuf();
  std::string conf_content = tmp.str();
  if (!google::protobuf::TextFormat::ParseFromString(conf_content, &svr_conf)) {
    std::cerr << "conf file format error:" << FLAGS_c << std::endl;
    return EXIT_FAILURE;
  }

  if (data_server::Logger::Init(svr_conf.log4cpp_conf()) != 0) {
    return EXIT_FAILURE;
  }
  LOG_INFO << "Logger init ok.";
  
  // init log for brpc
  logging::LoggingSettings log_setting;
  log_setting.logging_dest = logging::LOG_TO_FILE;
  log_setting.log_file = svr_conf.brpc_log().c_str();
  log_setting.lock_log = logging::LOCK_LOG_FILE;
  log_setting.delete_old = logging::APPEND_TO_OLD_LOG_FILE;
  logging::InitLogging(log_setting);
  data_server::InitErrCode();

  brpc::Server server;
  data2server::DataServiceImpl data_service_impl;
  if (server.AddService(&data_service_impl, 
        brpc::SERVER_DOESNT_OWN_SERVICE) != 0) {
    LOG(ERROR) << "Fail to add service";
    return EXIT_FAILURE;
  }

  // Start the server.
  brpc::ServerOptions options;
  DBConnFactory db_conn_factory;
  options.thread_local_data_factory  = &db_conn_factory;
  options.reserved_thread_local_data = 10;
  if (server.Start(svr_conf.svr_port(), &options) != 0) {
    LOG_ERROR << "Fail to start data_server";
    return EXIT_FAILURE;
  }

  server.RunUntilAskedToQuit();
  return 0;
}
