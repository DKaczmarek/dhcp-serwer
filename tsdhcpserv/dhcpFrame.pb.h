// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dhcpFrame.proto
#include "stdafx.h"
#ifndef PROTOBUF_dhcpFrame_2eproto__INCLUDED
#define PROTOBUF_dhcpFrame_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dhcpFrame {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_dhcpFrame_2eproto();
void protobuf_InitDefaults_dhcpFrame_2eproto();
void protobuf_AssignDesc_dhcpFrame_2eproto();
void protobuf_ShutdownFile_dhcpFrame_2eproto();

class Mess;

// ===================================================================

class Mess : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dhcpFrame.Mess) */ {
 public:
  Mess();
  virtual ~Mess();

  Mess(const Mess& from);

  inline Mess& operator=(const Mess& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Mess& default_instance();

  static const Mess* internal_default_instance();

  void Swap(Mess* other);

  // implements Message ----------------------------------------------

  inline Mess* New() const { return New(NULL); }

  Mess* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Mess& from);
  void MergeFrom(const Mess& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Mess* other);
  void UnsafeMergeFrom(const Mess& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 op = 1;
  bool has_op() const;
  void clear_op();
  static const int kOpFieldNumber = 1;
  ::google::protobuf::int32 op() const;
  void set_op(::google::protobuf::int32 value);

  // required int32 htype = 2 [default = 6];
  bool has_htype() const;
  void clear_htype();
  static const int kHtypeFieldNumber = 2;
  ::google::protobuf::int32 htype() const;
  void set_htype(::google::protobuf::int32 value);

  // required int32 hlen = 3 [default = 6];
  bool has_hlen() const;
  void clear_hlen();
  static const int kHlenFieldNumber = 3;
  ::google::protobuf::int32 hlen() const;
  void set_hlen(::google::protobuf::int32 value);

  // optional int32 hops = 4;
  bool has_hops() const;
  void clear_hops();
  static const int kHopsFieldNumber = 4;
  ::google::protobuf::int32 hops() const;
  void set_hops(::google::protobuf::int32 value);

  // required int32 xid = 5;
  bool has_xid() const;
  void clear_xid();
  static const int kXidFieldNumber = 5;
  ::google::protobuf::int32 xid() const;
  void set_xid(::google::protobuf::int32 value);

  // optional int32 secs = 6;
  bool has_secs() const;
  void clear_secs();
  static const int kSecsFieldNumber = 6;
  ::google::protobuf::int32 secs() const;
  void set_secs(::google::protobuf::int32 value);

  // optional int32 flags = 7;
  bool has_flags() const;
  void clear_flags();
  static const int kFlagsFieldNumber = 7;
  ::google::protobuf::int32 flags() const;
  void set_flags(::google::protobuf::int32 value);

  // optional string ciaddr = 8;
  bool has_ciaddr() const;
  void clear_ciaddr();
  static const int kCiaddrFieldNumber = 8;
  const ::std::string& ciaddr() const;
  void set_ciaddr(const ::std::string& value);
  void set_ciaddr(const char* value);
  void set_ciaddr(const char* value, size_t size);
  ::std::string* mutable_ciaddr();
  ::std::string* release_ciaddr();
  void set_allocated_ciaddr(::std::string* ciaddr);

  // required string yiaddr = 9;
  bool has_yiaddr() const;
  void clear_yiaddr();
  static const int kYiaddrFieldNumber = 9;
  const ::std::string& yiaddr() const;
  void set_yiaddr(const ::std::string& value);
  void set_yiaddr(const char* value);
  void set_yiaddr(const char* value, size_t size);
  ::std::string* mutable_yiaddr();
  ::std::string* release_yiaddr();
  void set_allocated_yiaddr(::std::string* yiaddr);

  // optional string siaddr = 10;
  bool has_siaddr() const;
  void clear_siaddr();
  static const int kSiaddrFieldNumber = 10;
  const ::std::string& siaddr() const;
  void set_siaddr(const ::std::string& value);
  void set_siaddr(const char* value);
  void set_siaddr(const char* value, size_t size);
  ::std::string* mutable_siaddr();
  ::std::string* release_siaddr();
  void set_allocated_siaddr(::std::string* siaddr);

  // required string giaddr = 11;
  bool has_giaddr() const;
  void clear_giaddr();
  static const int kGiaddrFieldNumber = 11;
  const ::std::string& giaddr() const;
  void set_giaddr(const ::std::string& value);
  void set_giaddr(const char* value);
  void set_giaddr(const char* value, size_t size);
  ::std::string* mutable_giaddr();
  ::std::string* release_giaddr();
  void set_allocated_giaddr(::std::string* giaddr);

  // required string chaddr = 12;
  bool has_chaddr() const;
  void clear_chaddr();
  static const int kChaddrFieldNumber = 12;
  const ::std::string& chaddr() const;
  void set_chaddr(const ::std::string& value);
  void set_chaddr(const char* value);
  void set_chaddr(const char* value, size_t size);
  ::std::string* mutable_chaddr();
  ::std::string* release_chaddr();
  void set_allocated_chaddr(::std::string* chaddr);

  // optional string sname = 13 [default = "DHCPserver"];
  bool has_sname() const;
  void clear_sname();
  static const int kSnameFieldNumber = 13;
  const ::std::string& sname() const;
  void set_sname(const ::std::string& value);
  void set_sname(const char* value);
  void set_sname(const char* value, size_t size);
  ::std::string* mutable_sname();
  ::std::string* release_sname();
  void set_allocated_sname(::std::string* sname);

  // optional string file = 14 [default = "null"];
  bool has_file() const;
  void clear_file();
  static const int kFileFieldNumber = 14;
  const ::std::string& file() const;
  void set_file(const ::std::string& value);
  void set_file(const char* value);
  void set_file(const char* value, size_t size);
  ::std::string* mutable_file();
  ::std::string* release_file();
  void set_allocated_file(::std::string* file);

  // required int32 opc = 15;
  bool has_opc() const;
  void clear_opc();
  static const int kOpcFieldNumber = 15;
  ::google::protobuf::int32 opc() const;
  void set_opc(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:dhcpFrame.Mess)
 private:
  inline void set_has_op();
  inline void clear_has_op();
  inline void set_has_htype();
  inline void clear_has_htype();
  inline void set_has_hlen();
  inline void clear_has_hlen();
  inline void set_has_hops();
  inline void clear_has_hops();
  inline void set_has_xid();
  inline void clear_has_xid();
  inline void set_has_secs();
  inline void clear_has_secs();
  inline void set_has_flags();
  inline void clear_has_flags();
  inline void set_has_ciaddr();
  inline void clear_has_ciaddr();
  inline void set_has_yiaddr();
  inline void clear_has_yiaddr();
  inline void set_has_siaddr();
  inline void clear_has_siaddr();
  inline void set_has_giaddr();
  inline void clear_has_giaddr();
  inline void set_has_chaddr();
  inline void clear_has_chaddr();
  inline void set_has_sname();
  inline void clear_has_sname();
  inline void set_has_file();
  inline void clear_has_file();
  inline void set_has_opc();
  inline void clear_has_opc();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ciaddr_;
  ::google::protobuf::internal::ArenaStringPtr yiaddr_;
  ::google::protobuf::internal::ArenaStringPtr siaddr_;
  ::google::protobuf::internal::ArenaStringPtr giaddr_;
  ::google::protobuf::internal::ArenaStringPtr chaddr_;
  static ::std::string* _default_sname_;
  ::google::protobuf::internal::ArenaStringPtr sname_;
  static ::std::string* _default_file_;
  ::google::protobuf::internal::ArenaStringPtr file_;
  ::google::protobuf::int32 op_;
  ::google::protobuf::int32 hops_;
  ::google::protobuf::int32 xid_;
  ::google::protobuf::int32 secs_;
  ::google::protobuf::int32 flags_;
  ::google::protobuf::int32 opc_;
  ::google::protobuf::int32 htype_;
  ::google::protobuf::int32 hlen_;
  friend void  protobuf_InitDefaults_dhcpFrame_2eproto_impl();
  friend void  protobuf_AddDesc_dhcpFrame_2eproto_impl();
  friend void protobuf_AssignDesc_dhcpFrame_2eproto();
  friend void protobuf_ShutdownFile_dhcpFrame_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Mess> Mess_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Mess

// required int32 op = 1;
inline bool Mess::has_op() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Mess::set_has_op() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Mess::clear_has_op() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Mess::clear_op() {
  op_ = 0;
  clear_has_op();
}
inline ::google::protobuf::int32 Mess::op() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.op)
  return op_;
}
inline void Mess::set_op(::google::protobuf::int32 value) {
  set_has_op();
  op_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.op)
}

// required int32 htype = 2 [default = 6];
inline bool Mess::has_htype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Mess::set_has_htype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Mess::clear_has_htype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Mess::clear_htype() {
  htype_ = 6;
  clear_has_htype();
}
inline ::google::protobuf::int32 Mess::htype() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.htype)
  return htype_;
}
inline void Mess::set_htype(::google::protobuf::int32 value) {
  set_has_htype();
  htype_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.htype)
}

// required int32 hlen = 3 [default = 6];
inline bool Mess::has_hlen() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Mess::set_has_hlen() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Mess::clear_has_hlen() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Mess::clear_hlen() {
  hlen_ = 6;
  clear_has_hlen();
}
inline ::google::protobuf::int32 Mess::hlen() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.hlen)
  return hlen_;
}
inline void Mess::set_hlen(::google::protobuf::int32 value) {
  set_has_hlen();
  hlen_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.hlen)
}

// optional int32 hops = 4;
inline bool Mess::has_hops() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Mess::set_has_hops() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Mess::clear_has_hops() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Mess::clear_hops() {
  hops_ = 0;
  clear_has_hops();
}
inline ::google::protobuf::int32 Mess::hops() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.hops)
  return hops_;
}
inline void Mess::set_hops(::google::protobuf::int32 value) {
  set_has_hops();
  hops_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.hops)
}

// required int32 xid = 5;
inline bool Mess::has_xid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Mess::set_has_xid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Mess::clear_has_xid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Mess::clear_xid() {
  xid_ = 0;
  clear_has_xid();
}
inline ::google::protobuf::int32 Mess::xid() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.xid)
  return xid_;
}
inline void Mess::set_xid(::google::protobuf::int32 value) {
  set_has_xid();
  xid_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.xid)
}

// optional int32 secs = 6;
inline bool Mess::has_secs() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Mess::set_has_secs() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Mess::clear_has_secs() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Mess::clear_secs() {
  secs_ = 0;
  clear_has_secs();
}
inline ::google::protobuf::int32 Mess::secs() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.secs)
  return secs_;
}
inline void Mess::set_secs(::google::protobuf::int32 value) {
  set_has_secs();
  secs_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.secs)
}

// optional int32 flags = 7;
inline bool Mess::has_flags() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Mess::set_has_flags() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Mess::clear_has_flags() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Mess::clear_flags() {
  flags_ = 0;
  clear_has_flags();
}
inline ::google::protobuf::int32 Mess::flags() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.flags)
  return flags_;
}
inline void Mess::set_flags(::google::protobuf::int32 value) {
  set_has_flags();
  flags_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.flags)
}

// optional string ciaddr = 8;
inline bool Mess::has_ciaddr() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Mess::set_has_ciaddr() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Mess::clear_has_ciaddr() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Mess::clear_ciaddr() {
  ciaddr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ciaddr();
}
inline const ::std::string& Mess::ciaddr() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.ciaddr)
  return ciaddr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_ciaddr(const ::std::string& value) {
  set_has_ciaddr();
  ciaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.ciaddr)
}
inline void Mess::set_ciaddr(const char* value) {
  set_has_ciaddr();
  ciaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.ciaddr)
}
inline void Mess::set_ciaddr(const char* value, size_t size) {
  set_has_ciaddr();
  ciaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.ciaddr)
}
inline ::std::string* Mess::mutable_ciaddr() {
  set_has_ciaddr();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.ciaddr)
  return ciaddr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mess::release_ciaddr() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.ciaddr)
  clear_has_ciaddr();
  return ciaddr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_allocated_ciaddr(::std::string* ciaddr) {
  if (ciaddr != NULL) {
    set_has_ciaddr();
  } else {
    clear_has_ciaddr();
  }
  ciaddr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ciaddr);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.ciaddr)
}

// required string yiaddr = 9;
inline bool Mess::has_yiaddr() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Mess::set_has_yiaddr() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Mess::clear_has_yiaddr() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Mess::clear_yiaddr() {
  yiaddr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_yiaddr();
}
inline const ::std::string& Mess::yiaddr() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.yiaddr)
  return yiaddr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_yiaddr(const ::std::string& value) {
  set_has_yiaddr();
  yiaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.yiaddr)
}
inline void Mess::set_yiaddr(const char* value) {
  set_has_yiaddr();
  yiaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.yiaddr)
}
inline void Mess::set_yiaddr(const char* value, size_t size) {
  set_has_yiaddr();
  yiaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.yiaddr)
}
inline ::std::string* Mess::mutable_yiaddr() {
  set_has_yiaddr();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.yiaddr)
  return yiaddr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mess::release_yiaddr() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.yiaddr)
  clear_has_yiaddr();
  return yiaddr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_allocated_yiaddr(::std::string* yiaddr) {
  if (yiaddr != NULL) {
    set_has_yiaddr();
  } else {
    clear_has_yiaddr();
  }
  yiaddr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), yiaddr);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.yiaddr)
}

// optional string siaddr = 10;
inline bool Mess::has_siaddr() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Mess::set_has_siaddr() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Mess::clear_has_siaddr() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Mess::clear_siaddr() {
  siaddr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_siaddr();
}
inline const ::std::string& Mess::siaddr() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.siaddr)
  return siaddr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_siaddr(const ::std::string& value) {
  set_has_siaddr();
  siaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.siaddr)
}
inline void Mess::set_siaddr(const char* value) {
  set_has_siaddr();
  siaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.siaddr)
}
inline void Mess::set_siaddr(const char* value, size_t size) {
  set_has_siaddr();
  siaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.siaddr)
}
inline ::std::string* Mess::mutable_siaddr() {
  set_has_siaddr();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.siaddr)
  return siaddr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mess::release_siaddr() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.siaddr)
  clear_has_siaddr();
  return siaddr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_allocated_siaddr(::std::string* siaddr) {
  if (siaddr != NULL) {
    set_has_siaddr();
  } else {
    clear_has_siaddr();
  }
  siaddr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), siaddr);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.siaddr)
}

// required string giaddr = 11;
inline bool Mess::has_giaddr() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Mess::set_has_giaddr() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Mess::clear_has_giaddr() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Mess::clear_giaddr() {
  giaddr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_giaddr();
}
inline const ::std::string& Mess::giaddr() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.giaddr)
  return giaddr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_giaddr(const ::std::string& value) {
  set_has_giaddr();
  giaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.giaddr)
}
inline void Mess::set_giaddr(const char* value) {
  set_has_giaddr();
  giaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.giaddr)
}
inline void Mess::set_giaddr(const char* value, size_t size) {
  set_has_giaddr();
  giaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.giaddr)
}
inline ::std::string* Mess::mutable_giaddr() {
  set_has_giaddr();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.giaddr)
  return giaddr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mess::release_giaddr() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.giaddr)
  clear_has_giaddr();
  return giaddr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_allocated_giaddr(::std::string* giaddr) {
  if (giaddr != NULL) {
    set_has_giaddr();
  } else {
    clear_has_giaddr();
  }
  giaddr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), giaddr);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.giaddr)
}

// required string chaddr = 12;
inline bool Mess::has_chaddr() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Mess::set_has_chaddr() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Mess::clear_has_chaddr() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Mess::clear_chaddr() {
  chaddr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_chaddr();
}
inline const ::std::string& Mess::chaddr() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.chaddr)
  return chaddr_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_chaddr(const ::std::string& value) {
  set_has_chaddr();
  chaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.chaddr)
}
inline void Mess::set_chaddr(const char* value) {
  set_has_chaddr();
  chaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.chaddr)
}
inline void Mess::set_chaddr(const char* value, size_t size) {
  set_has_chaddr();
  chaddr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.chaddr)
}
inline ::std::string* Mess::mutable_chaddr() {
  set_has_chaddr();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.chaddr)
  return chaddr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mess::release_chaddr() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.chaddr)
  clear_has_chaddr();
  return chaddr_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mess::set_allocated_chaddr(::std::string* chaddr) {
  if (chaddr != NULL) {
    set_has_chaddr();
  } else {
    clear_has_chaddr();
  }
  chaddr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), chaddr);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.chaddr)
}

// optional string sname = 13 [default = "DHCPserver"];
inline bool Mess::has_sname() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Mess::set_has_sname() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Mess::clear_has_sname() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Mess::clear_sname() {
  sname_.ClearToDefaultNoArena(_default_sname_);
  clear_has_sname();
}
inline const ::std::string& Mess::sname() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.sname)
  return sname_.GetNoArena(_default_sname_);
}
inline void Mess::set_sname(const ::std::string& value) {
  set_has_sname();
  sname_.SetNoArena(_default_sname_, value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.sname)
}
inline void Mess::set_sname(const char* value) {
  set_has_sname();
  sname_.SetNoArena(_default_sname_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.sname)
}
inline void Mess::set_sname(const char* value, size_t size) {
  set_has_sname();
  sname_.SetNoArena(_default_sname_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.sname)
}
inline ::std::string* Mess::mutable_sname() {
  set_has_sname();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.sname)
  return sname_.MutableNoArena(_default_sname_);
}
inline ::std::string* Mess::release_sname() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.sname)
  clear_has_sname();
  return sname_.ReleaseNoArena(_default_sname_);
}
inline void Mess::set_allocated_sname(::std::string* sname) {
  if (sname != NULL) {
    set_has_sname();
  } else {
    clear_has_sname();
  }
  sname_.SetAllocatedNoArena(_default_sname_, sname);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.sname)
}

// optional string file = 14 [default = "null"];
inline bool Mess::has_file() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Mess::set_has_file() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Mess::clear_has_file() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Mess::clear_file() {
  file_.ClearToDefaultNoArena(_default_file_);
  clear_has_file();
}
inline const ::std::string& Mess::file() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.file)
  return file_.GetNoArena(_default_file_);
}
inline void Mess::set_file(const ::std::string& value) {
  set_has_file();
  file_.SetNoArena(_default_file_, value);
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.file)
}
inline void Mess::set_file(const char* value) {
  set_has_file();
  file_.SetNoArena(_default_file_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhcpFrame.Mess.file)
}
inline void Mess::set_file(const char* value, size_t size) {
  set_has_file();
  file_.SetNoArena(_default_file_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhcpFrame.Mess.file)
}
inline ::std::string* Mess::mutable_file() {
  set_has_file();
  // @@protoc_insertion_point(field_mutable:dhcpFrame.Mess.file)
  return file_.MutableNoArena(_default_file_);
}
inline ::std::string* Mess::release_file() {
  // @@protoc_insertion_point(field_release:dhcpFrame.Mess.file)
  clear_has_file();
  return file_.ReleaseNoArena(_default_file_);
}
inline void Mess::set_allocated_file(::std::string* file) {
  if (file != NULL) {
    set_has_file();
  } else {
    clear_has_file();
  }
  file_.SetAllocatedNoArena(_default_file_, file);
  // @@protoc_insertion_point(field_set_allocated:dhcpFrame.Mess.file)
}

// required int32 opc = 15;
inline bool Mess::has_opc() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Mess::set_has_opc() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Mess::clear_has_opc() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Mess::clear_opc() {
  opc_ = 0;
  clear_has_opc();
}
inline ::google::protobuf::int32 Mess::opc() const {
  // @@protoc_insertion_point(field_get:dhcpFrame.Mess.opc)
  return opc_;
}
inline void Mess::set_opc(::google::protobuf::int32 value) {
  set_has_opc();
  opc_ = value;
  // @@protoc_insertion_point(field_set:dhcpFrame.Mess.opc)
}

inline const Mess* Mess::internal_default_instance() {
  return &Mess_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dhcpFrame

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dhcpFrame_2eproto__INCLUDED