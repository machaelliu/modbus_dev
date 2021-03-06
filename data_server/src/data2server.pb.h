// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data2server.proto

#ifndef PROTOBUF_data2server_2eproto__INCLUDED
#define PROTOBUF_data2server_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/service.h>
// @@protoc_insertion_point(includes)

namespace data2server {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_data2server_2eproto();
void protobuf_AssignDesc_data2server_2eproto();
void protobuf_ShutdownFile_data2server_2eproto();

class DataReq;
class DataResp;

// ===================================================================

class DataReq : public ::google::protobuf::Message {
 public:
  DataReq();
  virtual ~DataReq();
  
  DataReq(const DataReq& from);
  
  inline DataReq& operator=(const DataReq& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DataReq& default_instance();
  
  void Swap(DataReq* other);
  
  // implements Message ----------------------------------------------
  
  DataReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataReq& from);
  void MergeFrom(const DataReq& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string building = 1;
  inline bool has_building() const;
  inline void clear_building();
  static const int kBuildingFieldNumber = 1;
  inline const ::std::string& building() const;
  inline void set_building(const ::std::string& value);
  inline void set_building(const char* value);
  inline void set_building(const char* value, size_t size);
  inline ::std::string* mutable_building();
  inline ::std::string* release_building();
  
  // required string collector = 2;
  inline bool has_collector() const;
  inline void clear_collector();
  static const int kCollectorFieldNumber = 2;
  inline const ::std::string& collector() const;
  inline void set_collector(const ::std::string& value);
  inline void set_collector(const char* value);
  inline void set_collector(const char* value, size_t size);
  inline ::std::string* mutable_collector();
  inline ::std::string* release_collector();
  
  // required uint32 conn_type = 3;
  inline bool has_conn_type() const;
  inline void clear_conn_type();
  static const int kConnTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 conn_type() const;
  inline void set_conn_type(::google::protobuf::uint32 value);
  
  // required string device = 4;
  inline bool has_device() const;
  inline void clear_device();
  static const int kDeviceFieldNumber = 4;
  inline const ::std::string& device() const;
  inline void set_device(const ::std::string& value);
  inline void set_device(const char* value);
  inline void set_device(const char* value, size_t size);
  inline ::std::string* mutable_device();
  inline ::std::string* release_device();
  
  // required float orig_data = 5;
  inline bool has_orig_data() const;
  inline void clear_orig_data();
  static const int kOrigDataFieldNumber = 5;
  inline float orig_data() const;
  inline void set_orig_data(float value);
  
  // required float scale_data = 6;
  inline bool has_scale_data() const;
  inline void clear_scale_data();
  static const int kScaleDataFieldNumber = 6;
  inline float scale_data() const;
  inline void set_scale_data(float value);
  
  // required string desc = 7;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 7;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  
  // required string unit = 8;
  inline bool has_unit() const;
  inline void clear_unit();
  static const int kUnitFieldNumber = 8;
  inline const ::std::string& unit() const;
  inline void set_unit(const ::std::string& value);
  inline void set_unit(const char* value);
  inline void set_unit(const char* value, size_t size);
  inline ::std::string* mutable_unit();
  inline ::std::string* release_unit();
  
  // required float coef_A = 9;
  inline bool has_coef_a() const;
  inline void clear_coef_a();
  static const int kCoefAFieldNumber = 9;
  inline float coef_a() const;
  inline void set_coef_a(float value);
  
  // required float coef_B = 10;
  inline bool has_coef_b() const;
  inline void clear_coef_b();
  static const int kCoefBFieldNumber = 10;
  inline float coef_b() const;
  inline void set_coef_b(float value);
  
  // required string data_time = 11;
  inline bool has_data_time() const;
  inline void clear_data_time();
  static const int kDataTimeFieldNumber = 11;
  inline const ::std::string& data_time() const;
  inline void set_data_time(const ::std::string& value);
  inline void set_data_time(const char* value);
  inline void set_data_time(const char* value, size_t size);
  inline ::std::string* mutable_data_time();
  inline ::std::string* release_data_time();
  
  // @@protoc_insertion_point(class_scope:data2server.DataReq)
 private:
  inline void set_has_building();
  inline void clear_has_building();
  inline void set_has_collector();
  inline void clear_has_collector();
  inline void set_has_conn_type();
  inline void clear_has_conn_type();
  inline void set_has_device();
  inline void clear_has_device();
  inline void set_has_orig_data();
  inline void clear_has_orig_data();
  inline void set_has_scale_data();
  inline void clear_has_scale_data();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_unit();
  inline void clear_has_unit();
  inline void set_has_coef_a();
  inline void clear_has_coef_a();
  inline void set_has_coef_b();
  inline void clear_has_coef_b();
  inline void set_has_data_time();
  inline void clear_has_data_time();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* building_;
  ::std::string* collector_;
  ::std::string* device_;
  ::google::protobuf::uint32 conn_type_;
  float orig_data_;
  ::std::string* desc_;
  float scale_data_;
  float coef_a_;
  ::std::string* unit_;
  ::std::string* data_time_;
  float coef_b_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
  friend void  protobuf_AddDesc_data2server_2eproto();
  friend void protobuf_AssignDesc_data2server_2eproto();
  friend void protobuf_ShutdownFile_data2server_2eproto();
  
  void InitAsDefaultInstance();
  static DataReq* default_instance_;
};
// -------------------------------------------------------------------

class DataResp : public ::google::protobuf::Message {
 public:
  DataResp();
  virtual ~DataResp();
  
  DataResp(const DataResp& from);
  
  inline DataResp& operator=(const DataResp& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DataResp& default_instance();
  
  void Swap(DataResp* other);
  
  // implements Message ----------------------------------------------
  
  DataResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataResp& from);
  void MergeFrom(const DataResp& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 errcode = 1;
  inline bool has_errcode() const;
  inline void clear_errcode();
  static const int kErrcodeFieldNumber = 1;
  inline ::google::protobuf::int32 errcode() const;
  inline void set_errcode(::google::protobuf::int32 value);
  
  // required string errmsg = 2;
  inline bool has_errmsg() const;
  inline void clear_errmsg();
  static const int kErrmsgFieldNumber = 2;
  inline const ::std::string& errmsg() const;
  inline void set_errmsg(const ::std::string& value);
  inline void set_errmsg(const char* value);
  inline void set_errmsg(const char* value, size_t size);
  inline ::std::string* mutable_errmsg();
  inline ::std::string* release_errmsg();
  
  // @@protoc_insertion_point(class_scope:data2server.DataResp)
 private:
  inline void set_has_errcode();
  inline void clear_has_errcode();
  inline void set_has_errmsg();
  inline void clear_has_errmsg();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* errmsg_;
  ::google::protobuf::int32 errcode_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_data2server_2eproto();
  friend void protobuf_AssignDesc_data2server_2eproto();
  friend void protobuf_ShutdownFile_data2server_2eproto();
  
  void InitAsDefaultInstance();
  static DataResp* default_instance_;
};
// ===================================================================

class DataService_Stub;

class DataService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline DataService() {};
 public:
  virtual ~DataService();
  
  typedef DataService_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void Send(::google::protobuf::RpcController* controller,
                       const ::data2server::DataReq* request,
                       ::data2server::DataResp* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataService);
};

class DataService_Stub : public DataService {
 public:
  DataService_Stub(::google::protobuf::RpcChannel* channel);
  DataService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~DataService_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements DataService ------------------------------------------
  
  void Send(::google::protobuf::RpcController* controller,
                       const ::data2server::DataReq* request,
                       ::data2server::DataResp* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataService_Stub);
};


// ===================================================================


// ===================================================================

// DataReq

// required string building = 1;
inline bool DataReq::has_building() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataReq::set_has_building() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataReq::clear_has_building() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataReq::clear_building() {
  if (building_ != &::google::protobuf::internal::kEmptyString) {
    building_->clear();
  }
  clear_has_building();
}
inline const ::std::string& DataReq::building() const {
  return *building_;
}
inline void DataReq::set_building(const ::std::string& value) {
  set_has_building();
  if (building_ == &::google::protobuf::internal::kEmptyString) {
    building_ = new ::std::string;
  }
  building_->assign(value);
}
inline void DataReq::set_building(const char* value) {
  set_has_building();
  if (building_ == &::google::protobuf::internal::kEmptyString) {
    building_ = new ::std::string;
  }
  building_->assign(value);
}
inline void DataReq::set_building(const char* value, size_t size) {
  set_has_building();
  if (building_ == &::google::protobuf::internal::kEmptyString) {
    building_ = new ::std::string;
  }
  building_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_building() {
  set_has_building();
  if (building_ == &::google::protobuf::internal::kEmptyString) {
    building_ = new ::std::string;
  }
  return building_;
}
inline ::std::string* DataReq::release_building() {
  clear_has_building();
  if (building_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = building_;
    building_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string collector = 2;
inline bool DataReq::has_collector() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataReq::set_has_collector() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataReq::clear_has_collector() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataReq::clear_collector() {
  if (collector_ != &::google::protobuf::internal::kEmptyString) {
    collector_->clear();
  }
  clear_has_collector();
}
inline const ::std::string& DataReq::collector() const {
  return *collector_;
}
inline void DataReq::set_collector(const ::std::string& value) {
  set_has_collector();
  if (collector_ == &::google::protobuf::internal::kEmptyString) {
    collector_ = new ::std::string;
  }
  collector_->assign(value);
}
inline void DataReq::set_collector(const char* value) {
  set_has_collector();
  if (collector_ == &::google::protobuf::internal::kEmptyString) {
    collector_ = new ::std::string;
  }
  collector_->assign(value);
}
inline void DataReq::set_collector(const char* value, size_t size) {
  set_has_collector();
  if (collector_ == &::google::protobuf::internal::kEmptyString) {
    collector_ = new ::std::string;
  }
  collector_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_collector() {
  set_has_collector();
  if (collector_ == &::google::protobuf::internal::kEmptyString) {
    collector_ = new ::std::string;
  }
  return collector_;
}
inline ::std::string* DataReq::release_collector() {
  clear_has_collector();
  if (collector_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = collector_;
    collector_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 conn_type = 3;
inline bool DataReq::has_conn_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataReq::set_has_conn_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataReq::clear_has_conn_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataReq::clear_conn_type() {
  conn_type_ = 0u;
  clear_has_conn_type();
}
inline ::google::protobuf::uint32 DataReq::conn_type() const {
  return conn_type_;
}
inline void DataReq::set_conn_type(::google::protobuf::uint32 value) {
  set_has_conn_type();
  conn_type_ = value;
}

// required string device = 4;
inline bool DataReq::has_device() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DataReq::set_has_device() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DataReq::clear_has_device() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DataReq::clear_device() {
  if (device_ != &::google::protobuf::internal::kEmptyString) {
    device_->clear();
  }
  clear_has_device();
}
inline const ::std::string& DataReq::device() const {
  return *device_;
}
inline void DataReq::set_device(const ::std::string& value) {
  set_has_device();
  if (device_ == &::google::protobuf::internal::kEmptyString) {
    device_ = new ::std::string;
  }
  device_->assign(value);
}
inline void DataReq::set_device(const char* value) {
  set_has_device();
  if (device_ == &::google::protobuf::internal::kEmptyString) {
    device_ = new ::std::string;
  }
  device_->assign(value);
}
inline void DataReq::set_device(const char* value, size_t size) {
  set_has_device();
  if (device_ == &::google::protobuf::internal::kEmptyString) {
    device_ = new ::std::string;
  }
  device_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_device() {
  set_has_device();
  if (device_ == &::google::protobuf::internal::kEmptyString) {
    device_ = new ::std::string;
  }
  return device_;
}
inline ::std::string* DataReq::release_device() {
  clear_has_device();
  if (device_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = device_;
    device_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required float orig_data = 5;
inline bool DataReq::has_orig_data() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DataReq::set_has_orig_data() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DataReq::clear_has_orig_data() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DataReq::clear_orig_data() {
  orig_data_ = 0;
  clear_has_orig_data();
}
inline float DataReq::orig_data() const {
  return orig_data_;
}
inline void DataReq::set_orig_data(float value) {
  set_has_orig_data();
  orig_data_ = value;
}

// required float scale_data = 6;
inline bool DataReq::has_scale_data() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DataReq::set_has_scale_data() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DataReq::clear_has_scale_data() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DataReq::clear_scale_data() {
  scale_data_ = 0;
  clear_has_scale_data();
}
inline float DataReq::scale_data() const {
  return scale_data_;
}
inline void DataReq::set_scale_data(float value) {
  set_has_scale_data();
  scale_data_ = value;
}

// required string desc = 7;
inline bool DataReq::has_desc() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DataReq::set_has_desc() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DataReq::clear_has_desc() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DataReq::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& DataReq::desc() const {
  return *desc_;
}
inline void DataReq::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void DataReq::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void DataReq::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* DataReq::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string unit = 8;
inline bool DataReq::has_unit() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DataReq::set_has_unit() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DataReq::clear_has_unit() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DataReq::clear_unit() {
  if (unit_ != &::google::protobuf::internal::kEmptyString) {
    unit_->clear();
  }
  clear_has_unit();
}
inline const ::std::string& DataReq::unit() const {
  return *unit_;
}
inline void DataReq::set_unit(const ::std::string& value) {
  set_has_unit();
  if (unit_ == &::google::protobuf::internal::kEmptyString) {
    unit_ = new ::std::string;
  }
  unit_->assign(value);
}
inline void DataReq::set_unit(const char* value) {
  set_has_unit();
  if (unit_ == &::google::protobuf::internal::kEmptyString) {
    unit_ = new ::std::string;
  }
  unit_->assign(value);
}
inline void DataReq::set_unit(const char* value, size_t size) {
  set_has_unit();
  if (unit_ == &::google::protobuf::internal::kEmptyString) {
    unit_ = new ::std::string;
  }
  unit_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_unit() {
  set_has_unit();
  if (unit_ == &::google::protobuf::internal::kEmptyString) {
    unit_ = new ::std::string;
  }
  return unit_;
}
inline ::std::string* DataReq::release_unit() {
  clear_has_unit();
  if (unit_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = unit_;
    unit_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required float coef_A = 9;
inline bool DataReq::has_coef_a() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DataReq::set_has_coef_a() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DataReq::clear_has_coef_a() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DataReq::clear_coef_a() {
  coef_a_ = 0;
  clear_has_coef_a();
}
inline float DataReq::coef_a() const {
  return coef_a_;
}
inline void DataReq::set_coef_a(float value) {
  set_has_coef_a();
  coef_a_ = value;
}

// required float coef_B = 10;
inline bool DataReq::has_coef_b() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void DataReq::set_has_coef_b() {
  _has_bits_[0] |= 0x00000200u;
}
inline void DataReq::clear_has_coef_b() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void DataReq::clear_coef_b() {
  coef_b_ = 0;
  clear_has_coef_b();
}
inline float DataReq::coef_b() const {
  return coef_b_;
}
inline void DataReq::set_coef_b(float value) {
  set_has_coef_b();
  coef_b_ = value;
}

// required string data_time = 11;
inline bool DataReq::has_data_time() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void DataReq::set_has_data_time() {
  _has_bits_[0] |= 0x00000400u;
}
inline void DataReq::clear_has_data_time() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void DataReq::clear_data_time() {
  if (data_time_ != &::google::protobuf::internal::kEmptyString) {
    data_time_->clear();
  }
  clear_has_data_time();
}
inline const ::std::string& DataReq::data_time() const {
  return *data_time_;
}
inline void DataReq::set_data_time(const ::std::string& value) {
  set_has_data_time();
  if (data_time_ == &::google::protobuf::internal::kEmptyString) {
    data_time_ = new ::std::string;
  }
  data_time_->assign(value);
}
inline void DataReq::set_data_time(const char* value) {
  set_has_data_time();
  if (data_time_ == &::google::protobuf::internal::kEmptyString) {
    data_time_ = new ::std::string;
  }
  data_time_->assign(value);
}
inline void DataReq::set_data_time(const char* value, size_t size) {
  set_has_data_time();
  if (data_time_ == &::google::protobuf::internal::kEmptyString) {
    data_time_ = new ::std::string;
  }
  data_time_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataReq::mutable_data_time() {
  set_has_data_time();
  if (data_time_ == &::google::protobuf::internal::kEmptyString) {
    data_time_ = new ::std::string;
  }
  return data_time_;
}
inline ::std::string* DataReq::release_data_time() {
  clear_has_data_time();
  if (data_time_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_time_;
    data_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// DataResp

// required int32 errcode = 1;
inline bool DataResp::has_errcode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataResp::set_has_errcode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataResp::clear_has_errcode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataResp::clear_errcode() {
  errcode_ = 0;
  clear_has_errcode();
}
inline ::google::protobuf::int32 DataResp::errcode() const {
  return errcode_;
}
inline void DataResp::set_errcode(::google::protobuf::int32 value) {
  set_has_errcode();
  errcode_ = value;
}

// required string errmsg = 2;
inline bool DataResp::has_errmsg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataResp::set_has_errmsg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataResp::clear_has_errmsg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataResp::clear_errmsg() {
  if (errmsg_ != &::google::protobuf::internal::kEmptyString) {
    errmsg_->clear();
  }
  clear_has_errmsg();
}
inline const ::std::string& DataResp::errmsg() const {
  return *errmsg_;
}
inline void DataResp::set_errmsg(const ::std::string& value) {
  set_has_errmsg();
  if (errmsg_ == &::google::protobuf::internal::kEmptyString) {
    errmsg_ = new ::std::string;
  }
  errmsg_->assign(value);
}
inline void DataResp::set_errmsg(const char* value) {
  set_has_errmsg();
  if (errmsg_ == &::google::protobuf::internal::kEmptyString) {
    errmsg_ = new ::std::string;
  }
  errmsg_->assign(value);
}
inline void DataResp::set_errmsg(const char* value, size_t size) {
  set_has_errmsg();
  if (errmsg_ == &::google::protobuf::internal::kEmptyString) {
    errmsg_ = new ::std::string;
  }
  errmsg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataResp::mutable_errmsg() {
  set_has_errmsg();
  if (errmsg_ == &::google::protobuf::internal::kEmptyString) {
    errmsg_ = new ::std::string;
  }
  return errmsg_;
}
inline ::std::string* DataResp::release_errmsg() {
  clear_has_errmsg();
  if (errmsg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = errmsg_;
    errmsg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data2server

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data2server_2eproto__INCLUDED
