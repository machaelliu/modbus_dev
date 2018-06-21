/**********************************************************
 * Author        : qingtao
 * Email         : lqt641@163.com
 * Create time   : 2018-05-25 11:07
 * Last modified : 2018-05-25 11:08
 * Filename      : singleton.h
 * Description   : 
 * *******************************************************/
#ifndef _DATA_SINGLETON_H_
#define _DATA_SINGLETON_H_

namespace data_server {

template <typename T>  
struct Singleton {
  private:
    class object_creator /* 嵌套类 */ {
      public:
        object_creator() { 
          Singleton::Instance();
        }

        inline void do_nothing() const {
        }
    };

    static object_creator create_object;
    Singleton();

  private:
    T userData;

  public:
    typedef T object_type;

    static object_type& Instance() {
      static object_type obj;
      create_object.do_nothing();
      return obj;
    }
};

template <typename T>
	typename Singleton<T>::object_creator Singleton<T>::create_object;

} // namespace data_server 
#endif // _DATA_SINGLETON_H_
