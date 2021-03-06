// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mathtest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mathtest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mathtest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mathtest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mathtest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mathtest_2eproto;
namespace mathtest {
class MathReply;
class MathReplyDefaultTypeInternal;
extern MathReplyDefaultTypeInternal _MathReply_default_instance_;
class MathRequest;
class MathRequestDefaultTypeInternal;
extern MathRequestDefaultTypeInternal _MathRequest_default_instance_;
}  // namespace mathtest
PROTOBUF_NAMESPACE_OPEN
template<> ::mathtest::MathReply* Arena::CreateMaybeMessage<::mathtest::MathReply>(Arena*);
template<> ::mathtest::MathRequest* Arena::CreateMaybeMessage<::mathtest::MathRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mathtest {

// ===================================================================

class MathRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mathtest.MathRequest) */ {
 public:
  inline MathRequest() : MathRequest(nullptr) {}
  virtual ~MathRequest();

  MathRequest(const MathRequest& from);
  MathRequest(MathRequest&& from) noexcept
    : MathRequest() {
    *this = ::std::move(from);
  }

  inline MathRequest& operator=(const MathRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline MathRequest& operator=(MathRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MathRequest& default_instance();

  static inline const MathRequest* internal_default_instance() {
    return reinterpret_cast<const MathRequest*>(
               &_MathRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MathRequest& a, MathRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(MathRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MathRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MathRequest* New() const final {
    return CreateMaybeMessage<MathRequest>(nullptr);
  }

  MathRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MathRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MathRequest& from);
  void MergeFrom(const MathRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MathRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mathtest.MathRequest";
  }
  protected:
  explicit MathRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mathtest_2eproto);
    return ::descriptor_table_mathtest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // int32 a = 1;
  void clear_a();
  ::PROTOBUF_NAMESPACE_ID::int32 a() const;
  void set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_a() const;
  void _internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 b = 2;
  void clear_b();
  ::PROTOBUF_NAMESPACE_ID::int32 b() const;
  void set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_b() const;
  void _internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:mathtest.MathRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 a_;
  ::PROTOBUF_NAMESPACE_ID::int32 b_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_mathtest_2eproto;
};
// -------------------------------------------------------------------

class MathReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mathtest.MathReply) */ {
 public:
  inline MathReply() : MathReply(nullptr) {}
  virtual ~MathReply();

  MathReply(const MathReply& from);
  MathReply(MathReply&& from) noexcept
    : MathReply() {
    *this = ::std::move(from);
  }

  inline MathReply& operator=(const MathReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline MathReply& operator=(MathReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MathReply& default_instance();

  static inline const MathReply* internal_default_instance() {
    return reinterpret_cast<const MathReply*>(
               &_MathReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MathReply& a, MathReply& b) {
    a.Swap(&b);
  }
  inline void Swap(MathReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MathReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MathReply* New() const final {
    return CreateMaybeMessage<MathReply>(nullptr);
  }

  MathReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MathReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MathReply& from);
  void MergeFrom(const MathReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MathReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mathtest.MathReply";
  }
  protected:
  explicit MathReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mathtest_2eproto);
    return ::descriptor_table_mathtest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // int32 result = 1;
  void clear_result();
  ::PROTOBUF_NAMESPACE_ID::int32 result() const;
  void set_result(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_result() const;
  void _internal_set_result(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:mathtest.MathReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_mathtest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MathRequest

// int32 a = 1;
inline void MathRequest::clear_a() {
  a_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathRequest::_internal_a() const {
  return a_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathRequest::a() const {
  // @@protoc_insertion_point(field_get:mathtest.MathRequest.a)
  return _internal_a();
}
inline void MathRequest::_internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  a_ = value;
}
inline void MathRequest::set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:mathtest.MathRequest.a)
}

// int32 b = 2;
inline void MathRequest::clear_b() {
  b_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathRequest::_internal_b() const {
  return b_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathRequest::b() const {
  // @@protoc_insertion_point(field_get:mathtest.MathRequest.b)
  return _internal_b();
}
inline void MathRequest::_internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  b_ = value;
}
inline void MathRequest::set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:mathtest.MathRequest.b)
}

// -------------------------------------------------------------------

// MathReply

// int32 result = 1;
inline void MathReply::clear_result() {
  result_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathReply::_internal_result() const {
  return result_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MathReply::result() const {
  // @@protoc_insertion_point(field_get:mathtest.MathReply.result)
  return _internal_result();
}
inline void MathReply::_internal_set_result(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  result_ = value;
}
inline void MathReply::set_result(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:mathtest.MathReply.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mathtest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mathtest_2eproto
