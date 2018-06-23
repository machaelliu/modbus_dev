/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-06-21 22:24
 * Last modified : 2018-06-21 22:24
 * Filename      : id_manager.h
 * Description   : 
 * *******************************************************/

#ifndef _DATA_SERVER_ID_CACHE_H_
#define _DATA_SERVER_ID_CACHE_H_
#include <unordered_map>
#include <mutex> 
#include <shared_mutex>

namespace data_server {
struct DBIdInfo {
  uint64_t id_;
  time_t latest_data_time_; 
};

class IdManager {
 public:
   int GetId(brpc::Controller* cntl, const DataReq& req, uint64_t* id);
 private: 
   std::unordered_map<std::string, DBIdInfo> data2id_;
   mutable std::shared_mutex mutex_;
};

} // namespace data_server 


#endif // _DATA_SERVER_ID_CACHE_H_
