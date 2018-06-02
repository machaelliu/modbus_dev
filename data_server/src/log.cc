/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-31 19:49
 * Last modified : 2018-05-31 19:49
 * Filename      : log.cc
 * Description   : 
 * *******************************************************/
#include "log.h"
#include "err_code.h"

using ::std::string;
using ::std::cout;
using ::std::cerr;
using ::std::endl;
namespace data_server {

log4cpp::Category* Logger::root_category_ = NULL;  

int Logger::Init(const string& conf_file_path) {
  try { 
      log4cpp::PropertyConfigurator::configure(conf_file_path);
  } catch(log4cpp::ConfigureFailure& f) {
      std::cerr << "log4cpp conf err:" << f.what() << std::endl;
      return E_LOG_CONF;
  }

  root_category_ = &(log4cpp::Category::getRoot());  
  return 0;
}

} // namespace data_server 
