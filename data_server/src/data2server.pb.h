// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data2server.proto

#ifndef PROTOBUF_INCLUDED_data2server_2eproto
#define PROTOBUF_INCLUDED_data2server_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_data2server_2eproto 

namespace protobuf_data2server_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_data2server_2eproto
namespace data2server {
class DataReq;
class DataReqDefaultTypeInternal;
extern DataReqDefaultTypeInternal _DataReq_default_instance_;
class DataResp;
class DataRespDefaultTypeInternal;
extern DataRespDefaultTypeInternal _DataResp_default_instance_;
}  // namespace data2server
namespace google {
namespace protobuf {
template<> ::data2server::DataReq* Arena::CreateMaybeMessage<::data2server::DataReq>(Arena*);
template<> ::data2server::DataResp* Arena::CreateMaybeMessage<::data2server::DataResp>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace data2server {

// ===================================================================

class DataReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:data2server.DataReq) */ {
 public:
  DataReq();
  virtual ~DataReq();

  DataReq(const DataReq& from);

  inline DataReq& operator=(const DataReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DataReq(DataReq&& from) noexcept
    : DataReq() {
    *this = ::std::move(from);
  }

  inline DataReq& operator=(DataReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DataReq* internal_default_instance() {
    return reinterpret_cast<const DataReq*>(
               &_DataReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DataReq* other);
  friend void swap(DataReq& a, DataReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DataReq* New() const final {
    return CreateMaybeMessage<DataReq>(NULL);
  }

  DataReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DataReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DataReq& from);
  void MergeFrom(const DataReq& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string building = 1;
  bool has_building() const;
  void clear_building();
  static const int kBuildingFieldNumber = 1;
  const ::std::string& building() const;
  void set_building(const ::std::string& value);
  #if LANG_CXX11
  void set_building(::std::string&& value);
  #endif
  void set_building(const char* value);
  void set_building(const char* value, size_t size);
  ::std::string* mutable_building();
  ::std::string* release_building();
  void set_allocated_building(::std::string* building);

  // required string collector = 2;
  bool has_collector() const;
  void clear_collector();
  static const int kCollectorFieldNumber = 2;
  const ::std::string& collector() const;
  void set_collector(const ::std::string& value);
  #if LANG_CXX11
  void set_collector(::std::string&& value);
  #endif
  void set_collector(const char* value);
  void set_collector(const char* value, size_t size);
  ::std::string* mutable_collector();
  ::std::string* release_collector();
  void set_allocated_collector(::std::string* collector);

  // required string meter = 4;
  bool has_meter() const;
  void clear_meter();
  static const int kMeterFieldNumber = 4;
  const ::std::string& meter() const;
  void set_meter(const ::std::string& value);
  #if LANG_CXX11
  void set_meter(::std::string&& value);
  #endif
  void set_meter(const char* value);
  void set_meter(const char* value, size_t size);
  ::std::string* mutable_meter();
  ::std::string* release_meter();
  void set_allocated_meter(::std::string* meter);

  // required string data_desc = 5;
  bool has_data_desc() const;
  void clear_data_desc();
  static const int kDataDescFieldNumber = 5;
  const ::std::string& data_desc() const;
  void set_data_desc(const ::std::string& value);
  #if LANG_CXX11
  void set_data_desc(::std::string&& value);
  #endif
  void set_data_desc(const char* value);
  void set_data_desc(const char* value, size_t size);
  ::std::string* mutable_data_desc();
  ::std::string* release_data_desc();
  void set_allocated_data_desc(::std::string* data_desc);

  // required uint32 conn_type = 3;
  bool has_conn_type() const;
  void clear_conn_type();
  static const int kConnTypeFieldNumber = 3;
  ::google::protobuf::uint32 conn_type() const;
  void set_conn_type(::google::protobuf::uint32 value);

  // required float orig_data = 6;
  bool has_orig_data() const;
  void clear_orig_data();
  static const int kOrigDataFieldNumber = 6;
  float orig_data() const;
  void set_orig_data(float value);

  // required float scaled_data = 7;
  bool has_scaled_data() const;
  void clear_scaled_data();
  static const int kScaledDataFieldNumber = 7;
  float scaled_data() const;
  void set_scaled_data(float value);

  // required float coef_a = 8;
  bool has_coef_a() const;
  void clear_coef_a();
  static const int kCoefAFieldNumber = 8;
  float coef_a() const;
  void set_coef_a(float value);

  // required float coef_b = 9;
  bool has_coef_b() const;
  void clear_coef_b();
  static const int kCoefBFieldNumber = 9;
  float coef_b() const;
  void set_coef_b(float value);

  // @@protoc_insertion_point(class_scope:data2server.DataReq)
 private:
  void set_has_building();
  void clear_has_building();
  void set_has_collector();
  void clear_has_collector();
  void set_has_conn_type();
  void clear_has_conn_type();
  void set_has_meter();
  void clear_has_meter();
  void set_has_data_desc();
  void clear_has_data_desc();
  void set_has_orig_data();
  void clear_has_orig_data();
  void set_has_scaled_data();
  void clear_has_scaled_data();
  void set_has_coef_a();
  void clear_has_coef_a();
  void set_has_coef_b();
  void clear_has_coef_b();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr building_;
  ::google::protobuf::internal::ArenaStringPtr collector_;
  ::google::protobuf::internal::ArenaStringPtr meter_;
  ::google::protobuf::internal::ArenaStringPtr data_desc_;
  ::google::protobuf::uint32 conn_type_;
  float orig_data_;
  float scaled_data_;
  float coef_a_;
  float coef_b_;
  friend struct ::protobuf_data2server_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DataResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:data2server.DataResp) */ {
 public:
  DataResp();
  virtual ~DataResp();

  DataResp(const DataResp& from);

  inline DataResp& operator=(const DataResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DataResp(DataResp&& from) noexcept
    : DataResp() {
    *this = ::std::move(from);
  }

  inline DataResp& operator=(DataResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DataResp* internal_default_instance() {
    return reinterpret_cast<const DataResp*>(
               &_DataResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DataResp* other);
  friend void swap(DataResp& a, DataResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DataResp* New() const final {
    return CreateMaybeMessage<DataResp>(NULL);
  }

  DataResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DataResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DataResp& from);
  void MergeFrom(const DataResp& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string errmsg = 2;
  bool has_errmsg() const;
  void clear_errmsg();
  static const int kErrmsgFieldNumber = 2;
  const ::std::string& errmsg() const;
  void set_errmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_errmsg(::std::string&& value);
  #endif
  void set_errmsg(const char* value);
  void set_errmsg(const char* value, size_t size);
  ::std::string* mutable_errmsg();
  ::std::string* release_errmsg();
  void set_allocated_errmsg(::std::string* errmsg);

  // required int32 errcode = 1;
  bool has_errcode() const;
  void clear_errcode();
  static const int kErrcodeFieldNumber = 1;
  ::google::protobuf::int32 errcode() const;
  void set_errcode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:data2server.DataResp)
 private:
  void set_has_errcode();
  void clear_has_errcode();
  void set_has_errmsg();
  void clear_has_errmsg();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr errmsg_;
  ::google::protobuf::int32 errcode_;
  friend struct ::protobuf_data2server_2eproto::TableStruct;
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

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
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
  building_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_building();
}
inline const ::std::string& DataReq::building() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.building)
  return building_.GetNoArena();
}
inline void DataReq::set_building(const ::std::string& value) {
  set_has_building();
  building_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:data2server.DataReq.building)
}
#if LANG_CXX11
inline void DataReq::set_building(::std::string&& value) {
  set_has_building();
  building_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:data2server.DataReq.building)
}
#endif
inline void DataReq::set_building(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_building();
  building_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:data2server.DataReq.building)
}
inline void DataReq::set_building(const char* value, size_t size) {
  set_has_building();
  building_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:data2server.DataReq.building)
}
inline ::std::string* DataReq::mutable_building() {
  set_has_building();
  // @@protoc_insertion_point(field_mutable:data2server.DataReq.building)
  return building_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataReq::release_building() {
  // @@protoc_insertion_point(field_release:data2server.DataReq.building)
  if (!has_building()) {
    return NULL;
  }
  clear_has_building();
  return building_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataReq::set_allocated_building(::std::string* building) {
  if (building != NULL) {
    set_has_building();
  } else {
    clear_has_building();
  }
  building_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), building);
  // @@protoc_insertion_point(field_set_allocated:data2server.DataReq.building)
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
  collector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_collector();
}
inline const ::std::string& DataReq::collector() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.collector)
  return collector_.GetNoArena();
}
inline void DataReq::set_collector(const ::std::string& value) {
  set_has_collector();
  collector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:data2server.DataReq.collector)
}
#if LANG_CXX11
inline void DataReq::set_collector(::std::string&& value) {
  set_has_collector();
  collector_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:data2server.DataReq.collector)
}
#endif
inline void DataReq::set_collector(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_collector();
  collector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:data2server.DataReq.collector)
}
inline void DataReq::set_collector(const char* value, size_t size) {
  set_has_collector();
  collector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:data2server.DataReq.collector)
}
inline ::std::string* DataReq::mutable_collector() {
  set_has_collector();
  // @@protoc_insertion_point(field_mutable:data2server.DataReq.collector)
  return collector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataReq::release_collector() {
  // @@protoc_insertion_point(field_release:data2server.DataReq.collector)
  if (!has_collector()) {
    return NULL;
  }
  clear_has_collector();
  return collector_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataReq::set_allocated_collector(::std::string* collector) {
  if (collector != NULL) {
    set_has_collector();
  } else {
    clear_has_collector();
  }
  collector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), collector);
  // @@protoc_insertion_point(field_set_allocated:data2server.DataReq.collector)
}

// required uint32 conn_type = 3;
inline bool DataReq::has_conn_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DataReq::set_has_conn_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DataReq::clear_has_conn_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DataReq::clear_conn_type() {
  conn_type_ = 0u;
  clear_has_conn_type();
}
inline ::google::protobuf::uint32 DataReq::conn_type() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.conn_type)
  return conn_type_;
}
inline void DataReq::set_conn_type(::google::protobuf::uint32 value) {
  set_has_conn_type();
  conn_type_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataReq.conn_type)
}

// required string meter = 4;
inline bool DataReq::has_meter() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataReq::set_has_meter() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataReq::clear_has_meter() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataReq::clear_meter() {
  meter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_meter();
}
inline const ::std::string& DataReq::meter() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.meter)
  return meter_.GetNoArena();
}
inline void DataReq::set_meter(const ::std::string& value) {
  set_has_meter();
  meter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:data2server.DataReq.meter)
}
#if LANG_CXX11
inline void DataReq::set_meter(::std::string&& value) {
  set_has_meter();
  meter_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:data2server.DataReq.meter)
}
#endif
inline void DataReq::set_meter(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_meter();
  meter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:data2server.DataReq.meter)
}
inline void DataReq::set_meter(const char* value, size_t size) {
  set_has_meter();
  meter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:data2server.DataReq.meter)
}
inline ::std::string* DataReq::mutable_meter() {
  set_has_meter();
  // @@protoc_insertion_point(field_mutable:data2server.DataReq.meter)
  return meter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataReq::release_meter() {
  // @@protoc_insertion_point(field_release:data2server.DataReq.meter)
  if (!has_meter()) {
    return NULL;
  }
  clear_has_meter();
  return meter_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataReq::set_allocated_meter(::std::string* meter) {
  if (meter != NULL) {
    set_has_meter();
  } else {
    clear_has_meter();
  }
  meter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), meter);
  // @@protoc_insertion_point(field_set_allocated:data2server.DataReq.meter)
}

// required string data_desc = 5;
inline bool DataReq::has_data_desc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DataReq::set_has_data_desc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DataReq::clear_has_data_desc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DataReq::clear_data_desc() {
  data_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data_desc();
}
inline const ::std::string& DataReq::data_desc() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.data_desc)
  return data_desc_.GetNoArena();
}
inline void DataReq::set_data_desc(const ::std::string& value) {
  set_has_data_desc();
  data_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:data2server.DataReq.data_desc)
}
#if LANG_CXX11
inline void DataReq::set_data_desc(::std::string&& value) {
  set_has_data_desc();
  data_desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:data2server.DataReq.data_desc)
}
#endif
inline void DataReq::set_data_desc(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data_desc();
  data_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:data2server.DataReq.data_desc)
}
inline void DataReq::set_data_desc(const char* value, size_t size) {
  set_has_data_desc();
  data_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:data2server.DataReq.data_desc)
}
inline ::std::string* DataReq::mutable_data_desc() {
  set_has_data_desc();
  // @@protoc_insertion_point(field_mutable:data2server.DataReq.data_desc)
  return data_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataReq::release_data_desc() {
  // @@protoc_insertion_point(field_release:data2server.DataReq.data_desc)
  if (!has_data_desc()) {
    return NULL;
  }
  clear_has_data_desc();
  return data_desc_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataReq::set_allocated_data_desc(::std::string* data_desc) {
  if (data_desc != NULL) {
    set_has_data_desc();
  } else {
    clear_has_data_desc();
  }
  data_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data_desc);
  // @@protoc_insertion_point(field_set_allocated:data2server.DataReq.data_desc)
}

// required float orig_data = 6;
inline bool DataReq::has_orig_data() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DataReq::set_has_orig_data() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DataReq::clear_has_orig_data() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DataReq::clear_orig_data() {
  orig_data_ = 0;
  clear_has_orig_data();
}
inline float DataReq::orig_data() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.orig_data)
  return orig_data_;
}
inline void DataReq::set_orig_data(float value) {
  set_has_orig_data();
  orig_data_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataReq.orig_data)
}

// required float scaled_data = 7;
inline bool DataReq::has_scaled_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DataReq::set_has_scaled_data() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DataReq::clear_has_scaled_data() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DataReq::clear_scaled_data() {
  scaled_data_ = 0;
  clear_has_scaled_data();
}
inline float DataReq::scaled_data() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.scaled_data)
  return scaled_data_;
}
inline void DataReq::set_scaled_data(float value) {
  set_has_scaled_data();
  scaled_data_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataReq.scaled_data)
}

// required float coef_a = 8;
inline bool DataReq::has_coef_a() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DataReq::set_has_coef_a() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DataReq::clear_has_coef_a() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DataReq::clear_coef_a() {
  coef_a_ = 0;
  clear_has_coef_a();
}
inline float DataReq::coef_a() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.coef_a)
  return coef_a_;
}
inline void DataReq::set_coef_a(float value) {
  set_has_coef_a();
  coef_a_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataReq.coef_a)
}

// required float coef_b = 9;
inline bool DataReq::has_coef_b() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DataReq::set_has_coef_b() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DataReq::clear_has_coef_b() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DataReq::clear_coef_b() {
  coef_b_ = 0;
  clear_has_coef_b();
}
inline float DataReq::coef_b() const {
  // @@protoc_insertion_point(field_get:data2server.DataReq.coef_b)
  return coef_b_;
}
inline void DataReq::set_coef_b(float value) {
  set_has_coef_b();
  coef_b_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataReq.coef_b)
}

// -------------------------------------------------------------------

// DataResp

// required int32 errcode = 1;
inline bool DataResp::has_errcode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataResp::set_has_errcode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataResp::clear_has_errcode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataResp::clear_errcode() {
  errcode_ = 0;
  clear_has_errcode();
}
inline ::google::protobuf::int32 DataResp::errcode() const {
  // @@protoc_insertion_point(field_get:data2server.DataResp.errcode)
  return errcode_;
}
inline void DataResp::set_errcode(::google::protobuf::int32 value) {
  set_has_errcode();
  errcode_ = value;
  // @@protoc_insertion_point(field_set:data2server.DataResp.errcode)
}

// required string errmsg = 2;
inline bool DataResp::has_errmsg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataResp::set_has_errmsg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataResp::clear_has_errmsg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataResp::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_errmsg();
}
inline const ::std::string& DataResp::errmsg() const {
  // @@protoc_insertion_point(field_get:data2server.DataResp.errmsg)
  return errmsg_.GetNoArena();
}
inline void DataResp::set_errmsg(const ::std::string& value) {
  set_has_errmsg();
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:data2server.DataResp.errmsg)
}
#if LANG_CXX11
inline void DataResp::set_errmsg(::std::string&& value) {
  set_has_errmsg();
  errmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:data2server.DataResp.errmsg)
}
#endif
inline void DataResp::set_errmsg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_errmsg();
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:data2server.DataResp.errmsg)
}
inline void DataResp::set_errmsg(const char* value, size_t size) {
  set_has_errmsg();
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:data2server.DataResp.errmsg)
}
inline ::std::string* DataResp::mutable_errmsg() {
  set_has_errmsg();
  // @@protoc_insertion_point(field_mutable:data2server.DataResp.errmsg)
  return errmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataResp::release_errmsg() {
  // @@protoc_insertion_point(field_release:data2server.DataResp.errmsg)
  if (!has_errmsg()) {
    return NULL;
  }
  clear_has_errmsg();
  return errmsg_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataResp::set_allocated_errmsg(::std::string* errmsg) {
  if (errmsg != NULL) {
    set_has_errmsg();
  } else {
    clear_has_errmsg();
  }
  errmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:data2server.DataResp.errmsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace data2server

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_data2server_2eproto