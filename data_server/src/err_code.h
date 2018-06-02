/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-02 19:03
 * Last modified : 2018-06-02 19:03
 * Filename      : err_code.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_ERR_CODE_H_
#define _DATA_ERR_CODE_H_
#include <unordered_map>
namespace data_server {
  enum ErrorCode {
    OK = 0,
    E_SYSTEM,
    E_DB,

    E_LOG_CONF,
  };

  extern std::unordered_map<int, std::string> g_err_map; 
  void InitErrCode();
}  // namespace data_server
#endif  // _DATA_ERR_CODE_H_

