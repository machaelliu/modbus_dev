/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-02 19:04
 * Last modified : 2018-06-02 19:04
 * Filename      : err_code.cc
 * Description   : 
 * *******************************************************/
#include <unordered_map>
#include "err_code.h"
namespace data_server {
std::unordered_map<int, std::string> g_err_map; 

void InitErrCode() {
  g_err_map[OK] = "OK";
  g_err_map[E_SYSTEM] = "system";
  g_err_map[E_DB] = "database";
  g_err_map[E_LOG_CONF] = "log config";
  g_err_map[E_REQ_CONTENT] = "req content";
}

}  // namespace data_server
