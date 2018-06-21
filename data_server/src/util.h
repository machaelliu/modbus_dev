/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-11 10:46
 * Last modified : 2018-05-11 10:46
 * Filename      : util.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_SERVER_UTIL_H_
#define _DATA_SERVER_UTIL_H_
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

namespace data_server_util {
bool Split(const std::string &s, const std::string& delim, 
    std::vector<std::string>* elems);

bool Split(const std::string &s, const std::string& delim, 
    std::vector<int>* elems);
bool Split(const std::string &s, const std::string& delim, 
    std::vector<uint64_t>* elems);

std::string& Trim(std::string &s);
std::string& ltrim(std::string &s);
std::string& rtrim(std::string &s);
void MakeErrResp(int errcode, const string& errmsg, DataResp* resp);
}  //namespace data_server_util 

#endif

