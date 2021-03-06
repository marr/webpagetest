// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pagespeed_input.proto

#ifndef PROTOBUF_pagespeed_5finput_2eproto__INCLUDED
#define PROTOBUF_pagespeed_5finput_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace pagespeed {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pagespeed_5finput_2eproto();
void protobuf_AssignDesc_pagespeed_5finput_2eproto();
void protobuf_ShutdownFile_pagespeed_5finput_2eproto();

class ProtoResource;
class ProtoResource_Header;
class ProtoInput;

// ===================================================================

class ProtoResource_Header : public ::google::protobuf::MessageLite {
 public:
  ProtoResource_Header();
  virtual ~ProtoResource_Header();
  
  ProtoResource_Header(const ProtoResource_Header& from);
  
  inline ProtoResource_Header& operator=(const ProtoResource_Header& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const ProtoResource_Header& default_instance();
  
  void Swap(ProtoResource_Header* other);
  
  // implements Message ----------------------------------------------
  
  ProtoResource_Header* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ProtoResource_Header& from);
  void MergeFrom(const ProtoResource_Header& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  
  // required string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  
  // @@protoc_insertion_point(class_scope:pagespeed.ProtoResource.Header)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();
  
  ::std::string* key_;
  ::std::string* value_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_pagespeed_5finput_2eproto();
  friend void protobuf_AssignDesc_pagespeed_5finput_2eproto();
  friend void protobuf_ShutdownFile_pagespeed_5finput_2eproto();
  
  void InitAsDefaultInstance();
  static ProtoResource_Header* default_instance_;
};
// -------------------------------------------------------------------

class ProtoResource : public ::google::protobuf::MessageLite {
 public:
  ProtoResource();
  virtual ~ProtoResource();
  
  ProtoResource(const ProtoResource& from);
  
  inline ProtoResource& operator=(const ProtoResource& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const ProtoResource& default_instance();
  
  void Swap(ProtoResource* other);
  
  // implements Message ----------------------------------------------
  
  ProtoResource* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ProtoResource& from);
  void MergeFrom(const ProtoResource& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef ProtoResource_Header Header;
  
  // accessors -------------------------------------------------------
  
  // optional string request_url = 1;
  inline bool has_request_url() const;
  inline void clear_request_url();
  static const int kRequestUrlFieldNumber = 1;
  inline const ::std::string& request_url() const;
  inline void set_request_url(const ::std::string& value);
  inline void set_request_url(const char* value);
  inline void set_request_url(const char* value, size_t size);
  inline ::std::string* mutable_request_url();
  inline ::std::string* release_request_url();
  
  // optional string request_method = 2;
  inline bool has_request_method() const;
  inline void clear_request_method();
  static const int kRequestMethodFieldNumber = 2;
  inline const ::std::string& request_method() const;
  inline void set_request_method(const ::std::string& value);
  inline void set_request_method(const char* value);
  inline void set_request_method(const char* value, size_t size);
  inline ::std::string* mutable_request_method();
  inline ::std::string* release_request_method();
  
  // optional string request_protocol = 3;
  inline bool has_request_protocol() const;
  inline void clear_request_protocol();
  static const int kRequestProtocolFieldNumber = 3;
  inline const ::std::string& request_protocol() const;
  inline void set_request_protocol(const ::std::string& value);
  inline void set_request_protocol(const char* value);
  inline void set_request_protocol(const char* value, size_t size);
  inline ::std::string* mutable_request_protocol();
  inline ::std::string* release_request_protocol();
  
  // repeated .pagespeed.ProtoResource.Header request_headers = 4;
  inline int request_headers_size() const;
  inline void clear_request_headers();
  static const int kRequestHeadersFieldNumber = 4;
  inline const ::pagespeed::ProtoResource_Header& request_headers(int index) const;
  inline ::pagespeed::ProtoResource_Header* mutable_request_headers(int index);
  inline ::pagespeed::ProtoResource_Header* add_request_headers();
  inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >&
      request_headers() const;
  inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >*
      mutable_request_headers();
  
  // optional bytes request_body = 5;
  inline bool has_request_body() const;
  inline void clear_request_body();
  static const int kRequestBodyFieldNumber = 5;
  inline const ::std::string& request_body() const;
  inline void set_request_body(const ::std::string& value);
  inline void set_request_body(const char* value);
  inline void set_request_body(const void* value, size_t size);
  inline ::std::string* mutable_request_body();
  inline ::std::string* release_request_body();
  
  // optional string response_protocol = 6;
  inline bool has_response_protocol() const;
  inline void clear_response_protocol();
  static const int kResponseProtocolFieldNumber = 6;
  inline const ::std::string& response_protocol() const;
  inline void set_response_protocol(const ::std::string& value);
  inline void set_response_protocol(const char* value);
  inline void set_response_protocol(const char* value, size_t size);
  inline ::std::string* mutable_response_protocol();
  inline ::std::string* release_response_protocol();
  
  // optional int32 response_status_code = 7;
  inline bool has_response_status_code() const;
  inline void clear_response_status_code();
  static const int kResponseStatusCodeFieldNumber = 7;
  inline ::google::protobuf::int32 response_status_code() const;
  inline void set_response_status_code(::google::protobuf::int32 value);
  
  // repeated .pagespeed.ProtoResource.Header response_headers = 8;
  inline int response_headers_size() const;
  inline void clear_response_headers();
  static const int kResponseHeadersFieldNumber = 8;
  inline const ::pagespeed::ProtoResource_Header& response_headers(int index) const;
  inline ::pagespeed::ProtoResource_Header* mutable_response_headers(int index);
  inline ::pagespeed::ProtoResource_Header* add_response_headers();
  inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >&
      response_headers() const;
  inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >*
      mutable_response_headers();
  
  // optional bytes response_body = 9;
  inline bool has_response_body() const;
  inline void clear_response_body();
  static const int kResponseBodyFieldNumber = 9;
  inline const ::std::string& response_body() const;
  inline void set_response_body(const ::std::string& value);
  inline void set_response_body(const char* value);
  inline void set_response_body(const void* value, size_t size);
  inline ::std::string* mutable_response_body();
  inline ::std::string* release_response_body();
  
  // @@protoc_insertion_point(class_scope:pagespeed.ProtoResource)
 private:
  inline void set_has_request_url();
  inline void clear_has_request_url();
  inline void set_has_request_method();
  inline void clear_has_request_method();
  inline void set_has_request_protocol();
  inline void clear_has_request_protocol();
  inline void set_has_request_body();
  inline void clear_has_request_body();
  inline void set_has_response_protocol();
  inline void clear_has_response_protocol();
  inline void set_has_response_status_code();
  inline void clear_has_response_status_code();
  inline void set_has_response_body();
  inline void clear_has_response_body();
  
  ::std::string* request_url_;
  ::std::string* request_method_;
  ::std::string* request_protocol_;
  ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header > request_headers_;
  ::std::string* request_body_;
  ::std::string* response_protocol_;
  ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header > response_headers_;
  ::std::string* response_body_;
  ::google::protobuf::int32 response_status_code_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];
  
  friend void  protobuf_AddDesc_pagespeed_5finput_2eproto();
  friend void protobuf_AssignDesc_pagespeed_5finput_2eproto();
  friend void protobuf_ShutdownFile_pagespeed_5finput_2eproto();
  
  void InitAsDefaultInstance();
  static ProtoResource* default_instance_;
};
// -------------------------------------------------------------------

class ProtoInput : public ::google::protobuf::MessageLite {
 public:
  ProtoInput();
  virtual ~ProtoInput();
  
  ProtoInput(const ProtoInput& from);
  
  inline ProtoInput& operator=(const ProtoInput& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const ProtoInput& default_instance();
  
  void Swap(ProtoInput* other);
  
  // implements Message ----------------------------------------------
  
  ProtoInput* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ProtoInput& from);
  void MergeFrom(const ProtoInput& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string identifier = 1;
  inline bool has_identifier() const;
  inline void clear_identifier();
  static const int kIdentifierFieldNumber = 1;
  inline const ::std::string& identifier() const;
  inline void set_identifier(const ::std::string& value);
  inline void set_identifier(const char* value);
  inline void set_identifier(const char* value, size_t size);
  inline ::std::string* mutable_identifier();
  inline ::std::string* release_identifier();
  
  // repeated .pagespeed.ProtoResource resources = 2;
  inline int resources_size() const;
  inline void clear_resources();
  static const int kResourcesFieldNumber = 2;
  inline const ::pagespeed::ProtoResource& resources(int index) const;
  inline ::pagespeed::ProtoResource* mutable_resources(int index);
  inline ::pagespeed::ProtoResource* add_resources();
  inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource >&
      resources() const;
  inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource >*
      mutable_resources();
  
  // @@protoc_insertion_point(class_scope:pagespeed.ProtoInput)
 private:
  inline void set_has_identifier();
  inline void clear_has_identifier();
  
  ::std::string* identifier_;
  ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource > resources_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_pagespeed_5finput_2eproto();
  friend void protobuf_AssignDesc_pagespeed_5finput_2eproto();
  friend void protobuf_ShutdownFile_pagespeed_5finput_2eproto();
  
  void InitAsDefaultInstance();
  static ProtoInput* default_instance_;
};
// ===================================================================


// ===================================================================

// ProtoResource_Header

// required string key = 1;
inline bool ProtoResource_Header::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoResource_Header::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoResource_Header::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoResource_Header::clear_key() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& ProtoResource_Header::key() const {
  return *key_;
}
inline void ProtoResource_Header::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ProtoResource_Header::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ProtoResource_Header::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource_Header::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  return key_;
}
inline ::std::string* ProtoResource_Header::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string value = 2;
inline bool ProtoResource_Header::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProtoResource_Header::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProtoResource_Header::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProtoResource_Header::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& ProtoResource_Header::value() const {
  return *value_;
}
inline void ProtoResource_Header::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ProtoResource_Header::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ProtoResource_Header::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource_Header::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* ProtoResource_Header::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// ProtoResource

// optional string request_url = 1;
inline bool ProtoResource::has_request_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoResource::set_has_request_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoResource::clear_has_request_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoResource::clear_request_url() {
  if (request_url_ != &::google::protobuf::internal::kEmptyString) {
    request_url_->clear();
  }
  clear_has_request_url();
}
inline const ::std::string& ProtoResource::request_url() const {
  return *request_url_;
}
inline void ProtoResource::set_request_url(const ::std::string& value) {
  set_has_request_url();
  if (request_url_ == &::google::protobuf::internal::kEmptyString) {
    request_url_ = new ::std::string;
  }
  request_url_->assign(value);
}
inline void ProtoResource::set_request_url(const char* value) {
  set_has_request_url();
  if (request_url_ == &::google::protobuf::internal::kEmptyString) {
    request_url_ = new ::std::string;
  }
  request_url_->assign(value);
}
inline void ProtoResource::set_request_url(const char* value, size_t size) {
  set_has_request_url();
  if (request_url_ == &::google::protobuf::internal::kEmptyString) {
    request_url_ = new ::std::string;
  }
  request_url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_request_url() {
  set_has_request_url();
  if (request_url_ == &::google::protobuf::internal::kEmptyString) {
    request_url_ = new ::std::string;
  }
  return request_url_;
}
inline ::std::string* ProtoResource::release_request_url() {
  clear_has_request_url();
  if (request_url_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = request_url_;
    request_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string request_method = 2;
inline bool ProtoResource::has_request_method() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProtoResource::set_has_request_method() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProtoResource::clear_has_request_method() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProtoResource::clear_request_method() {
  if (request_method_ != &::google::protobuf::internal::kEmptyString) {
    request_method_->clear();
  }
  clear_has_request_method();
}
inline const ::std::string& ProtoResource::request_method() const {
  return *request_method_;
}
inline void ProtoResource::set_request_method(const ::std::string& value) {
  set_has_request_method();
  if (request_method_ == &::google::protobuf::internal::kEmptyString) {
    request_method_ = new ::std::string;
  }
  request_method_->assign(value);
}
inline void ProtoResource::set_request_method(const char* value) {
  set_has_request_method();
  if (request_method_ == &::google::protobuf::internal::kEmptyString) {
    request_method_ = new ::std::string;
  }
  request_method_->assign(value);
}
inline void ProtoResource::set_request_method(const char* value, size_t size) {
  set_has_request_method();
  if (request_method_ == &::google::protobuf::internal::kEmptyString) {
    request_method_ = new ::std::string;
  }
  request_method_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_request_method() {
  set_has_request_method();
  if (request_method_ == &::google::protobuf::internal::kEmptyString) {
    request_method_ = new ::std::string;
  }
  return request_method_;
}
inline ::std::string* ProtoResource::release_request_method() {
  clear_has_request_method();
  if (request_method_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = request_method_;
    request_method_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string request_protocol = 3;
inline bool ProtoResource::has_request_protocol() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProtoResource::set_has_request_protocol() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProtoResource::clear_has_request_protocol() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProtoResource::clear_request_protocol() {
  if (request_protocol_ != &::google::protobuf::internal::kEmptyString) {
    request_protocol_->clear();
  }
  clear_has_request_protocol();
}
inline const ::std::string& ProtoResource::request_protocol() const {
  return *request_protocol_;
}
inline void ProtoResource::set_request_protocol(const ::std::string& value) {
  set_has_request_protocol();
  if (request_protocol_ == &::google::protobuf::internal::kEmptyString) {
    request_protocol_ = new ::std::string;
  }
  request_protocol_->assign(value);
}
inline void ProtoResource::set_request_protocol(const char* value) {
  set_has_request_protocol();
  if (request_protocol_ == &::google::protobuf::internal::kEmptyString) {
    request_protocol_ = new ::std::string;
  }
  request_protocol_->assign(value);
}
inline void ProtoResource::set_request_protocol(const char* value, size_t size) {
  set_has_request_protocol();
  if (request_protocol_ == &::google::protobuf::internal::kEmptyString) {
    request_protocol_ = new ::std::string;
  }
  request_protocol_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_request_protocol() {
  set_has_request_protocol();
  if (request_protocol_ == &::google::protobuf::internal::kEmptyString) {
    request_protocol_ = new ::std::string;
  }
  return request_protocol_;
}
inline ::std::string* ProtoResource::release_request_protocol() {
  clear_has_request_protocol();
  if (request_protocol_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = request_protocol_;
    request_protocol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .pagespeed.ProtoResource.Header request_headers = 4;
inline int ProtoResource::request_headers_size() const {
  return request_headers_.size();
}
inline void ProtoResource::clear_request_headers() {
  request_headers_.Clear();
}
inline const ::pagespeed::ProtoResource_Header& ProtoResource::request_headers(int index) const {
  return request_headers_.Get(index);
}
inline ::pagespeed::ProtoResource_Header* ProtoResource::mutable_request_headers(int index) {
  return request_headers_.Mutable(index);
}
inline ::pagespeed::ProtoResource_Header* ProtoResource::add_request_headers() {
  return request_headers_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >&
ProtoResource::request_headers() const {
  return request_headers_;
}
inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >*
ProtoResource::mutable_request_headers() {
  return &request_headers_;
}

// optional bytes request_body = 5;
inline bool ProtoResource::has_request_body() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProtoResource::set_has_request_body() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProtoResource::clear_has_request_body() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProtoResource::clear_request_body() {
  if (request_body_ != &::google::protobuf::internal::kEmptyString) {
    request_body_->clear();
  }
  clear_has_request_body();
}
inline const ::std::string& ProtoResource::request_body() const {
  return *request_body_;
}
inline void ProtoResource::set_request_body(const ::std::string& value) {
  set_has_request_body();
  if (request_body_ == &::google::protobuf::internal::kEmptyString) {
    request_body_ = new ::std::string;
  }
  request_body_->assign(value);
}
inline void ProtoResource::set_request_body(const char* value) {
  set_has_request_body();
  if (request_body_ == &::google::protobuf::internal::kEmptyString) {
    request_body_ = new ::std::string;
  }
  request_body_->assign(value);
}
inline void ProtoResource::set_request_body(const void* value, size_t size) {
  set_has_request_body();
  if (request_body_ == &::google::protobuf::internal::kEmptyString) {
    request_body_ = new ::std::string;
  }
  request_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_request_body() {
  set_has_request_body();
  if (request_body_ == &::google::protobuf::internal::kEmptyString) {
    request_body_ = new ::std::string;
  }
  return request_body_;
}
inline ::std::string* ProtoResource::release_request_body() {
  clear_has_request_body();
  if (request_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = request_body_;
    request_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string response_protocol = 6;
inline bool ProtoResource::has_response_protocol() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ProtoResource::set_has_response_protocol() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ProtoResource::clear_has_response_protocol() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ProtoResource::clear_response_protocol() {
  if (response_protocol_ != &::google::protobuf::internal::kEmptyString) {
    response_protocol_->clear();
  }
  clear_has_response_protocol();
}
inline const ::std::string& ProtoResource::response_protocol() const {
  return *response_protocol_;
}
inline void ProtoResource::set_response_protocol(const ::std::string& value) {
  set_has_response_protocol();
  if (response_protocol_ == &::google::protobuf::internal::kEmptyString) {
    response_protocol_ = new ::std::string;
  }
  response_protocol_->assign(value);
}
inline void ProtoResource::set_response_protocol(const char* value) {
  set_has_response_protocol();
  if (response_protocol_ == &::google::protobuf::internal::kEmptyString) {
    response_protocol_ = new ::std::string;
  }
  response_protocol_->assign(value);
}
inline void ProtoResource::set_response_protocol(const char* value, size_t size) {
  set_has_response_protocol();
  if (response_protocol_ == &::google::protobuf::internal::kEmptyString) {
    response_protocol_ = new ::std::string;
  }
  response_protocol_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_response_protocol() {
  set_has_response_protocol();
  if (response_protocol_ == &::google::protobuf::internal::kEmptyString) {
    response_protocol_ = new ::std::string;
  }
  return response_protocol_;
}
inline ::std::string* ProtoResource::release_response_protocol() {
  clear_has_response_protocol();
  if (response_protocol_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = response_protocol_;
    response_protocol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 response_status_code = 7;
inline bool ProtoResource::has_response_status_code() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ProtoResource::set_has_response_status_code() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ProtoResource::clear_has_response_status_code() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ProtoResource::clear_response_status_code() {
  response_status_code_ = 0;
  clear_has_response_status_code();
}
inline ::google::protobuf::int32 ProtoResource::response_status_code() const {
  return response_status_code_;
}
inline void ProtoResource::set_response_status_code(::google::protobuf::int32 value) {
  set_has_response_status_code();
  response_status_code_ = value;
}

// repeated .pagespeed.ProtoResource.Header response_headers = 8;
inline int ProtoResource::response_headers_size() const {
  return response_headers_.size();
}
inline void ProtoResource::clear_response_headers() {
  response_headers_.Clear();
}
inline const ::pagespeed::ProtoResource_Header& ProtoResource::response_headers(int index) const {
  return response_headers_.Get(index);
}
inline ::pagespeed::ProtoResource_Header* ProtoResource::mutable_response_headers(int index) {
  return response_headers_.Mutable(index);
}
inline ::pagespeed::ProtoResource_Header* ProtoResource::add_response_headers() {
  return response_headers_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >&
ProtoResource::response_headers() const {
  return response_headers_;
}
inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource_Header >*
ProtoResource::mutable_response_headers() {
  return &response_headers_;
}

// optional bytes response_body = 9;
inline bool ProtoResource::has_response_body() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ProtoResource::set_has_response_body() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ProtoResource::clear_has_response_body() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ProtoResource::clear_response_body() {
  if (response_body_ != &::google::protobuf::internal::kEmptyString) {
    response_body_->clear();
  }
  clear_has_response_body();
}
inline const ::std::string& ProtoResource::response_body() const {
  return *response_body_;
}
inline void ProtoResource::set_response_body(const ::std::string& value) {
  set_has_response_body();
  if (response_body_ == &::google::protobuf::internal::kEmptyString) {
    response_body_ = new ::std::string;
  }
  response_body_->assign(value);
}
inline void ProtoResource::set_response_body(const char* value) {
  set_has_response_body();
  if (response_body_ == &::google::protobuf::internal::kEmptyString) {
    response_body_ = new ::std::string;
  }
  response_body_->assign(value);
}
inline void ProtoResource::set_response_body(const void* value, size_t size) {
  set_has_response_body();
  if (response_body_ == &::google::protobuf::internal::kEmptyString) {
    response_body_ = new ::std::string;
  }
  response_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoResource::mutable_response_body() {
  set_has_response_body();
  if (response_body_ == &::google::protobuf::internal::kEmptyString) {
    response_body_ = new ::std::string;
  }
  return response_body_;
}
inline ::std::string* ProtoResource::release_response_body() {
  clear_has_response_body();
  if (response_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = response_body_;
    response_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// ProtoInput

// optional string identifier = 1;
inline bool ProtoInput::has_identifier() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoInput::set_has_identifier() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoInput::clear_has_identifier() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoInput::clear_identifier() {
  if (identifier_ != &::google::protobuf::internal::kEmptyString) {
    identifier_->clear();
  }
  clear_has_identifier();
}
inline const ::std::string& ProtoInput::identifier() const {
  return *identifier_;
}
inline void ProtoInput::set_identifier(const ::std::string& value) {
  set_has_identifier();
  if (identifier_ == &::google::protobuf::internal::kEmptyString) {
    identifier_ = new ::std::string;
  }
  identifier_->assign(value);
}
inline void ProtoInput::set_identifier(const char* value) {
  set_has_identifier();
  if (identifier_ == &::google::protobuf::internal::kEmptyString) {
    identifier_ = new ::std::string;
  }
  identifier_->assign(value);
}
inline void ProtoInput::set_identifier(const char* value, size_t size) {
  set_has_identifier();
  if (identifier_ == &::google::protobuf::internal::kEmptyString) {
    identifier_ = new ::std::string;
  }
  identifier_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProtoInput::mutable_identifier() {
  set_has_identifier();
  if (identifier_ == &::google::protobuf::internal::kEmptyString) {
    identifier_ = new ::std::string;
  }
  return identifier_;
}
inline ::std::string* ProtoInput::release_identifier() {
  clear_has_identifier();
  if (identifier_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = identifier_;
    identifier_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .pagespeed.ProtoResource resources = 2;
inline int ProtoInput::resources_size() const {
  return resources_.size();
}
inline void ProtoInput::clear_resources() {
  resources_.Clear();
}
inline const ::pagespeed::ProtoResource& ProtoInput::resources(int index) const {
  return resources_.Get(index);
}
inline ::pagespeed::ProtoResource* ProtoInput::mutable_resources(int index) {
  return resources_.Mutable(index);
}
inline ::pagespeed::ProtoResource* ProtoInput::add_resources() {
  return resources_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource >&
ProtoInput::resources() const {
  return resources_;
}
inline ::google::protobuf::RepeatedPtrField< ::pagespeed::ProtoResource >*
ProtoInput::mutable_resources() {
  return &resources_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pagespeed

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pagespeed_5finput_2eproto__INCLUDED
