/**********************************************************
 * Author        : qingtao
 * Email         : qingtao5@staff.weibo.com
 * Create time   : 2018-05-11 10:46
 * Last modified : 2018-05-11 10:46
 * Filename      : util.h
 * Description   : 
 * *******************************************************/
#ifndef _KEPLER_UTIL_H_
#define _KEPLER_UTIL_H_
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

namespace face_util {
bool Split(const std::string &s, const std::string& delim, 
    std::vector<std::string>* elems);

bool Split(const std::string &s, const std::string& delim, 
    std::vector<int>* elems);
bool Split(const std::string &s, const std::string& delim, 
    std::vector<uint64_t>* elems);

std::string& Trim(std::string &s);
std::string& ltrim(std::string &s);
std::string& rtrim(std::string &s);
}  //namespace face_util 

#endif

