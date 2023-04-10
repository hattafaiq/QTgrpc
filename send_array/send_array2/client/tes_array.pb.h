// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tes_array.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tes_5farray_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tes_5farray_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_tes_5farray_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tes_5farray_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tes_5farray_2eproto;
namespace mathtest {
class MathReply;
struct MathReplyDefaultTypeInternal;
extern MathReplyDefaultTypeInternal _MathReply_default_instance_;
class MathRequest;
struct MathRequestDefaultTypeInternal;
extern MathRequestDefaultTypeInternal _MathRequest_default_instance_;
class Mathhasil;
struct MathhasilDefaultTypeInternal;
extern MathhasilDefaultTypeInternal _Mathhasil_default_instance_;
}  // namespace mathtest
PROTOBUF_NAMESPACE_OPEN
template<> ::mathtest::MathReply* Arena::CreateMaybeMessage<::mathtest::MathReply>(Arena*);
template<> ::mathtest::MathRequest* Arena::CreateMaybeMessage<::mathtest::MathRequest>(Arena*);
template<> ::mathtest::Mathhasil* Arena::CreateMaybeMessage<::mathtest::Mathhasil>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mathtest {

// ===================================================================

class MathRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mathtest.MathRequest) */ {
 public:
  inline MathRequest() : MathRequest(nullptr) {}
  ~MathRequest() override;
  explicit PROTOBUF_CONSTEXPR MathRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  static const MathRequest& default_instance() {
    return *internal_default_instance();
  }
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
  void UnsafeArenaSwap(MathRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MathRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MathRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MathRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MathRequest& from) {
    MathRequest::MergeImpl(*this, from);
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
  void InternalSwap(MathRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mathtest.MathRequest";
  }
  protected:
  explicit MathRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // int32 a = 1;
  void clear_a();
  int32_t a() const;
  void set_a(int32_t value);
  private:
  int32_t _internal_a() const;
  void _internal_set_a(int32_t value);
  public:

  // int32 b = 2;
  void clear_b();
  int32_t b() const;
  void set_b(int32_t value);
  private:
  int32_t _internal_b() const;
  void _internal_set_b(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:mathtest.MathRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t a_;
    int32_t b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tes_5farray_2eproto;
};
// -------------------------------------------------------------------

class MathReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mathtest.MathReply) */ {
 public:
  inline MathReply() : MathReply(nullptr) {}
  ~MathReply() override;
  explicit PROTOBUF_CONSTEXPR MathReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
  static const MathReply& default_instance() {
    return *internal_default_instance();
  }
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
  void UnsafeArenaSwap(MathReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MathReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MathReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MathReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MathReply& from) {
    MathReply::MergeImpl(*this, from);
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
  void InternalSwap(MathReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mathtest.MathReply";
  }
  protected:
  explicit MathReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // int32 result = 1;
  void clear_result();
  int32_t result() const;
  void set_result(int32_t value);
  private:
  int32_t _internal_result() const;
  void _internal_set_result(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:mathtest.MathReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t result_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tes_5farray_2eproto;
};
// -------------------------------------------------------------------

class Mathhasil final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mathtest.Mathhasil) */ {
 public:
  inline Mathhasil() : Mathhasil(nullptr) {}
  ~Mathhasil() override;
  explicit PROTOBUF_CONSTEXPR Mathhasil(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Mathhasil(const Mathhasil& from);
  Mathhasil(Mathhasil&& from) noexcept
    : Mathhasil() {
    *this = ::std::move(from);
  }

  inline Mathhasil& operator=(const Mathhasil& from) {
    CopyFrom(from);
    return *this;
  }
  inline Mathhasil& operator=(Mathhasil&& from) noexcept {
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
  static const Mathhasil& default_instance() {
    return *internal_default_instance();
  }
  static inline const Mathhasil* internal_default_instance() {
    return reinterpret_cast<const Mathhasil*>(
               &_Mathhasil_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Mathhasil& a, Mathhasil& b) {
    a.Swap(&b);
  }
  inline void Swap(Mathhasil* other) {
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
  void UnsafeArenaSwap(Mathhasil* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Mathhasil* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Mathhasil>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Mathhasil& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Mathhasil& from) {
    Mathhasil::MergeImpl(*this, from);
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
  void InternalSwap(Mathhasil* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mathtest.Mathhasil";
  }
  protected:
  explicit Mathhasil(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFloatFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // repeated float result_float = 2;
  int result_float_size() const;
  private:
  int _internal_result_float_size() const;
  public:
  void clear_result_float();
  private:
  float _internal_result_float(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_result_float() const;
  void _internal_add_result_float(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_result_float();
  public:
  float result_float(int index) const;
  void set_result_float(int index, float value);
  void add_result_float(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      result_float() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_result_float();

  // string header = 1;
  void clear_header();
  const std::string& header() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_header(ArgT0&& arg0, ArgT... args);
  std::string* mutable_header();
  PROTOBUF_NODISCARD std::string* release_header();
  void set_allocated_header(std::string* header);
  private:
  const std::string& _internal_header() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_header(const std::string& value);
  std::string* _internal_mutable_header();
  public:

  // @@protoc_insertion_point(class_scope:mathtest.Mathhasil)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > result_float_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr header_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tes_5farray_2eproto;
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
  _impl_.a_ = 0;
}
inline int32_t MathRequest::_internal_a() const {
  return _impl_.a_;
}
inline int32_t MathRequest::a() const {
  // @@protoc_insertion_point(field_get:mathtest.MathRequest.a)
  return _internal_a();
}
inline void MathRequest::_internal_set_a(int32_t value) {
  
  _impl_.a_ = value;
}
inline void MathRequest::set_a(int32_t value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:mathtest.MathRequest.a)
}

// int32 b = 2;
inline void MathRequest::clear_b() {
  _impl_.b_ = 0;
}
inline int32_t MathRequest::_internal_b() const {
  return _impl_.b_;
}
inline int32_t MathRequest::b() const {
  // @@protoc_insertion_point(field_get:mathtest.MathRequest.b)
  return _internal_b();
}
inline void MathRequest::_internal_set_b(int32_t value) {
  
  _impl_.b_ = value;
}
inline void MathRequest::set_b(int32_t value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:mathtest.MathRequest.b)
}

// -------------------------------------------------------------------

// MathReply

// int32 result = 1;
inline void MathReply::clear_result() {
  _impl_.result_ = 0;
}
inline int32_t MathReply::_internal_result() const {
  return _impl_.result_;
}
inline int32_t MathReply::result() const {
  // @@protoc_insertion_point(field_get:mathtest.MathReply.result)
  return _internal_result();
}
inline void MathReply::_internal_set_result(int32_t value) {
  
  _impl_.result_ = value;
}
inline void MathReply::set_result(int32_t value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:mathtest.MathReply.result)
}

// -------------------------------------------------------------------

// Mathhasil

// string header = 1;
inline void Mathhasil::clear_header() {
  _impl_.header_.ClearToEmpty();
}
inline const std::string& Mathhasil::header() const {
  // @@protoc_insertion_point(field_get:mathtest.Mathhasil.header)
  return _internal_header();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Mathhasil::set_header(ArgT0&& arg0, ArgT... args) {
 
 _impl_.header_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:mathtest.Mathhasil.header)
}
inline std::string* Mathhasil::mutable_header() {
  std::string* _s = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:mathtest.Mathhasil.header)
  return _s;
}
inline const std::string& Mathhasil::_internal_header() const {
  return _impl_.header_.Get();
}
inline void Mathhasil::_internal_set_header(const std::string& value) {
  
  _impl_.header_.Set(value, GetArenaForAllocation());
}
inline std::string* Mathhasil::_internal_mutable_header() {
  
  return _impl_.header_.Mutable(GetArenaForAllocation());
}
inline std::string* Mathhasil::release_header() {
  // @@protoc_insertion_point(field_release:mathtest.Mathhasil.header)
  return _impl_.header_.Release();
}
inline void Mathhasil::set_allocated_header(std::string* header) {
  if (header != nullptr) {
    
  } else {
    
  }
  _impl_.header_.SetAllocated(header, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.header_.IsDefault()) {
    _impl_.header_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mathtest.Mathhasil.header)
}

// repeated float result_float = 2;
inline int Mathhasil::_internal_result_float_size() const {
  return _impl_.result_float_.size();
}
inline int Mathhasil::result_float_size() const {
  return _internal_result_float_size();
}
inline void Mathhasil::clear_result_float() {
  _impl_.result_float_.Clear();
}
inline float Mathhasil::_internal_result_float(int index) const {
  return _impl_.result_float_.Get(index);
}
inline float Mathhasil::result_float(int index) const {
  // @@protoc_insertion_point(field_get:mathtest.Mathhasil.result_float)
  return _internal_result_float(index);
}
inline void Mathhasil::set_result_float(int index, float value) {
  _impl_.result_float_.Set(index, value);
  // @@protoc_insertion_point(field_set:mathtest.Mathhasil.result_float)
}
inline void Mathhasil::_internal_add_result_float(float value) {
  _impl_.result_float_.Add(value);
}
inline void Mathhasil::add_result_float(float value) {
  _internal_add_result_float(value);
  // @@protoc_insertion_point(field_add:mathtest.Mathhasil.result_float)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Mathhasil::_internal_result_float() const {
  return _impl_.result_float_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Mathhasil::result_float() const {
  // @@protoc_insertion_point(field_list:mathtest.Mathhasil.result_float)
  return _internal_result_float();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Mathhasil::_internal_mutable_result_float() {
  return &_impl_.result_float_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Mathhasil::mutable_result_float() {
  // @@protoc_insertion_point(field_mutable_list:mathtest.Mathhasil.result_float)
  return _internal_mutable_result_float();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mathtest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tes_5farray_2eproto
