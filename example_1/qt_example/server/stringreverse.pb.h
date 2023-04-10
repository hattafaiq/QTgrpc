// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stringreverse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_stringreverse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_stringreverse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_stringreverse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_stringreverse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_stringreverse_2eproto;
namespace stringreverse {
class StringReply;
struct StringReplyDefaultTypeInternal;
extern StringReplyDefaultTypeInternal _StringReply_default_instance_;
class StringRequest;
struct StringRequestDefaultTypeInternal;
extern StringRequestDefaultTypeInternal _StringRequest_default_instance_;
}  // namespace stringreverse
PROTOBUF_NAMESPACE_OPEN
template<> ::stringreverse::StringReply* Arena::CreateMaybeMessage<::stringreverse::StringReply>(Arena*);
template<> ::stringreverse::StringRequest* Arena::CreateMaybeMessage<::stringreverse::StringRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace stringreverse {

// ===================================================================

class StringRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:stringreverse.StringRequest) */ {
 public:
  inline StringRequest() : StringRequest(nullptr) {}
  ~StringRequest() override;
  explicit PROTOBUF_CONSTEXPR StringRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StringRequest(const StringRequest& from);
  StringRequest(StringRequest&& from) noexcept
    : StringRequest() {
    *this = ::std::move(from);
  }

  inline StringRequest& operator=(const StringRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline StringRequest& operator=(StringRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StringRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const StringRequest* internal_default_instance() {
    return reinterpret_cast<const StringRequest*>(
               &_StringRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StringRequest& a, StringRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(StringRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StringRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StringRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StringRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StringRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StringRequest& from) {
    StringRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StringRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "stringreverse.StringRequest";
  }
  protected:
  explicit StringRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOriginalFieldNumber = 1,
  };
  // string original = 1;
  void clear_original();
  const std::string& original() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_original(ArgT0&& arg0, ArgT... args);
  std::string* mutable_original();
  PROTOBUF_NODISCARD std::string* release_original();
  void set_allocated_original(std::string* original);
  private:
  const std::string& _internal_original() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_original(const std::string& value);
  std::string* _internal_mutable_original();
  public:

  // @@protoc_insertion_point(class_scope:stringreverse.StringRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr original_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_stringreverse_2eproto;
};
// -------------------------------------------------------------------

class StringReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:stringreverse.StringReply) */ {
 public:
  inline StringReply() : StringReply(nullptr) {}
  ~StringReply() override;
  explicit PROTOBUF_CONSTEXPR StringReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StringReply(const StringReply& from);
  StringReply(StringReply&& from) noexcept
    : StringReply() {
    *this = ::std::move(from);
  }

  inline StringReply& operator=(const StringReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline StringReply& operator=(StringReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StringReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const StringReply* internal_default_instance() {
    return reinterpret_cast<const StringReply*>(
               &_StringReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StringReply& a, StringReply& b) {
    a.Swap(&b);
  }
  inline void Swap(StringReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StringReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StringReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StringReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StringReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StringReply& from) {
    StringReply::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StringReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "stringreverse.StringReply";
  }
  protected:
  explicit StringReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReversedFieldNumber = 1,
  };
  // string reversed = 1;
  void clear_reversed();
  const std::string& reversed() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_reversed(ArgT0&& arg0, ArgT... args);
  std::string* mutable_reversed();
  PROTOBUF_NODISCARD std::string* release_reversed();
  void set_allocated_reversed(std::string* reversed);
  private:
  const std::string& _internal_reversed() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reversed(const std::string& value);
  std::string* _internal_mutable_reversed();
  public:

  // @@protoc_insertion_point(class_scope:stringreverse.StringReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reversed_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_stringreverse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StringRequest

// string original = 1;
inline void StringRequest::clear_original() {
  _impl_.original_.ClearToEmpty();
}
inline const std::string& StringRequest::original() const {
  // @@protoc_insertion_point(field_get:stringreverse.StringRequest.original)
  return _internal_original();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StringRequest::set_original(ArgT0&& arg0, ArgT... args) {
 
 _impl_.original_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:stringreverse.StringRequest.original)
}
inline std::string* StringRequest::mutable_original() {
  std::string* _s = _internal_mutable_original();
  // @@protoc_insertion_point(field_mutable:stringreverse.StringRequest.original)
  return _s;
}
inline const std::string& StringRequest::_internal_original() const {
  return _impl_.original_.Get();
}
inline void StringRequest::_internal_set_original(const std::string& value) {
  
  _impl_.original_.Set(value, GetArenaForAllocation());
}
inline std::string* StringRequest::_internal_mutable_original() {
  
  return _impl_.original_.Mutable(GetArenaForAllocation());
}
inline std::string* StringRequest::release_original() {
  // @@protoc_insertion_point(field_release:stringreverse.StringRequest.original)
  return _impl_.original_.Release();
}
inline void StringRequest::set_allocated_original(std::string* original) {
  if (original != nullptr) {
    
  } else {
    
  }
  _impl_.original_.SetAllocated(original, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.original_.IsDefault()) {
    _impl_.original_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:stringreverse.StringRequest.original)
}

// -------------------------------------------------------------------

// StringReply

// string reversed = 1;
inline void StringReply::clear_reversed() {
  _impl_.reversed_.ClearToEmpty();
}
inline const std::string& StringReply::reversed() const {
  // @@protoc_insertion_point(field_get:stringreverse.StringReply.reversed)
  return _internal_reversed();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StringReply::set_reversed(ArgT0&& arg0, ArgT... args) {
 
 _impl_.reversed_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:stringreverse.StringReply.reversed)
}
inline std::string* StringReply::mutable_reversed() {
  std::string* _s = _internal_mutable_reversed();
  // @@protoc_insertion_point(field_mutable:stringreverse.StringReply.reversed)
  return _s;
}
inline const std::string& StringReply::_internal_reversed() const {
  return _impl_.reversed_.Get();
}
inline void StringReply::_internal_set_reversed(const std::string& value) {
  
  _impl_.reversed_.Set(value, GetArenaForAllocation());
}
inline std::string* StringReply::_internal_mutable_reversed() {
  
  return _impl_.reversed_.Mutable(GetArenaForAllocation());
}
inline std::string* StringReply::release_reversed() {
  // @@protoc_insertion_point(field_release:stringreverse.StringReply.reversed)
  return _impl_.reversed_.Release();
}
inline void StringReply::set_allocated_reversed(std::string* reversed) {
  if (reversed != nullptr) {
    
  } else {
    
  }
  _impl_.reversed_.SetAllocated(reversed, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.reversed_.IsDefault()) {
    _impl_.reversed_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:stringreverse.StringReply.reversed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace stringreverse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_stringreverse_2eproto
