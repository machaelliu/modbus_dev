/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-31 19:50
 * Last modified : 2018-05-31 19:50
 * Filename      : log.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_SERVER_LOG_H_
#define _DATA_SERVER_LOG_H_
#include <string>
#include <log4cpp/Category.hh>
#include <log4cpp/PropertyConfigurator.hh>

#ifdef DATA_SERVER_DEBUG
#define LOG_DEBUG std::cerr << "\n"
#define LOG_INFO std::cerr << "\n"
#define LOG_WARN  std::cerr << "\n"
#define LOG_ERROR std::cerr << "\n"
#else
#define LOG_DEBUG (data_server::Logger::root_category_->debugStream() \
    << "[" << __FILE__ << ":" << __LINE__ << "] ")
#define LOG_INFO (data_server::Logger::root_category_->infoStream() \
    << "[" << __FILE__ << ":" << __LINE__ << "] ")
#define LOG_WARN (data_server::Logger::root_category_->warnStream() \
    << "[" << __FILE__ << ":" << __LINE__ << "] ")
#define LOG_ERROR (data_server::Logger::root_category_->errorStream() \
    << "[" << __FILE__ << ":" << __LINE__ << "] ")
#endif

namespace data_server {
class Logger {
 public:
   static int Init(const std::string& conf_file_path);
   static log4cpp::Category* root_category_;
};


} // namespace data_server 

#endif // _DATA_SERVER_LOG_H_
