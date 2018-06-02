/**********************************************************
 * Author        : qingtao
 * Email         : qingtao5@staff.weibo.com
 * Create time   : 2018-05-14 14:19
 * Last modified : 2018-05-14 14:19
 * Filename      : util.cc
 * Description   : 
 * *******************************************************/
#include "json/json.h"
#include "util.h"

using ::std::string;
using ::std::vector;
using ::std::cout;
using ::std::cerr;
using ::std::endl;

namespace face_util {

bool Split(const std::string &s, const std::string& delim, 
    std::vector<std::string>* elems) {
  elems->clear();

  std::size_t prev = 0, pos;
  while ((pos = s.find_first_of(delim, prev)) != std::string::npos) {
    if (pos > prev) {
      elems->push_back(s.substr(prev, pos-prev));
    }
    prev = pos+1;
  }

  if (prev < s.length()) {
    elems->push_back(s.substr(prev, std::string::npos));
  }

  return true;
}

bool Split(const std::string &s, const string& delim, 
    std::vector<int>* elems) {
  elems->clear();
  std::size_t prev = 0, pos;
  int num = 0;
  try {
    while ((pos = s.find_first_of(delim, prev)) != std::string::npos) {
      if (pos > prev) {
        string item = s.substr(prev, pos-prev);
        if (Trim(item).empty()) continue;
        num = std::stoi(item);
        elems->push_back(num);
      }
      prev = pos+1;
    }

    if (prev < s.length()) {
      string item = s.substr(prev, std::string::npos);
      if (!Trim(item).empty()) {
        num = std::stoi(item);
        elems->push_back(num);
      }
    }
  } catch(...) {
    return false;
  }

  return true;
}

bool Split(const std::string &s, const string& delim, 
    std::vector<uint64_t>* elems) {
  elems->clear();
  std::size_t prev = 0, pos;
  uint64_t num = 0;
  try {
    while ((pos = s.find_first_of(delim, prev)) != std::string::npos) {
      if (pos > prev) {
        string item = s.substr(prev, pos-prev);
        if (Trim(item).empty()) continue;
        num = std::stoul(item);
        elems->push_back(num);
      }
      prev = pos+1;
    }

    if (prev < s.length()) {
      string item = s.substr(prev, std::string::npos);
      if (!Trim(item).empty()) {
        num = std::stoul(item);
        elems->push_back(num);
      }
    }
  } catch(...) {
    return false;
  }

  return true;
}

// trim from start
std::string& ltrim(std::string &s) {
  s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
  return s;
}

// trim from end
std::string& rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
  return s;
}

// trim from both ends
std::string& Trim(std::string& s) {
  return ltrim(rtrim(s));
}

}  //namespace face_util 
