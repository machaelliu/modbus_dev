/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-31 19:52
 * Last modified : 2018-05-31 19:52
 * Filename      : rpc_server.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_SERVER_RPC_SERVER_H_
#define _DATA_SERVER_RPC_SERVER_H_
#include "data2server.pb.h"
#include "server_conf.pb.h"
#include "singleton.h"
namespace data2server {
class DataServiceImpl : public DataService {
 public:
  DataServiceImpl():
    svr_conf_(data_server::Singleton<data_server::ServerConfig>::Instance()),
    db_tab_name_(svr_conf_.db_tab_name()) {};
  virtual ~DataServiceImpl() {};
  virtual void Send(google::protobuf::RpcController* cntl_base,
      const DataReq* request,
      DataResp* response,
      google::protobuf::Closure* done);
 private:
  void MakeErrResp(int errcode, const std::string& errmsg, DataResp* resp);

  const data_server::ServerConfig& svr_conf_;
  const std::string& db_tab_name_;
};

} // namespace data_server 

#endif // _DATA_SERVER_RPC_SERVER_H_
