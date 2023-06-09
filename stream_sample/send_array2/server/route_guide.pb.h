// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route_guide.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_route_5fguide_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_route_5fguide_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_route_5fguide_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_route_5fguide_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_route_5fguide_2eproto;
namespace routeguide {
class Point;
struct PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class RouteNote;
struct RouteNoteDefaultTypeInternal;
extern RouteNoteDefaultTypeInternal _RouteNote_default_instance_;
class Routebaru;
struct RoutebaruDefaultTypeInternal;
extern RoutebaruDefaultTypeInternal _Routebaru_default_instance_;
class Routekomdat;
struct RoutekomdatDefaultTypeInternal;
extern RoutekomdatDefaultTypeInternal _Routekomdat_default_instance_;
}  // namespace routeguide
PROTOBUF_NAMESPACE_OPEN
template<> ::routeguide::Point* Arena::CreateMaybeMessage<::routeguide::Point>(Arena*);
template<> ::routeguide::RouteNote* Arena::CreateMaybeMessage<::routeguide::RouteNote>(Arena*);
template<> ::routeguide::Routebaru* Arena::CreateMaybeMessage<::routeguide::Routebaru>(Arena*);
template<> ::routeguide::Routekomdat* Arena::CreateMaybeMessage<::routeguide::Routekomdat>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace routeguide {

// ===================================================================

class Point final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:routeguide.Point) */ {
 public:
  inline Point() : Point(nullptr) {}
  ~Point() override;
  explicit PROTOBUF_CONSTEXPR Point(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Point(const Point& from);
  Point(Point&& from) noexcept
    : Point() {
    *this = ::std::move(from);
  }

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point& operator=(Point&& from) noexcept {
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
  static const Point& default_instance() {
    return *internal_default_instance();
  }
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Point& a, Point& b) {
    a.Swap(&b);
  }
  inline void Swap(Point* other) {
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
  void UnsafeArenaSwap(Point* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Point* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Point>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Point& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Point& from) {
    Point::MergeImpl(*this, from);
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
  void InternalSwap(Point* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "routeguide.Point";
  }
  protected:
  explicit Point(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLatitudeFieldNumber = 1,
    kLongitudeFieldNumber = 2,
  };
  // int32 latitude = 1;
  void clear_latitude();
  int32_t latitude() const;
  void set_latitude(int32_t value);
  private:
  int32_t _internal_latitude() const;
  void _internal_set_latitude(int32_t value);
  public:

  // int32 longitude = 2;
  void clear_longitude();
  int32_t longitude() const;
  void set_longitude(int32_t value);
  private:
  int32_t _internal_longitude() const;
  void _internal_set_longitude(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:routeguide.Point)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t latitude_;
    int32_t longitude_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class RouteNote final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:routeguide.RouteNote) */ {
 public:
  inline RouteNote() : RouteNote(nullptr) {}
  ~RouteNote() override;
  explicit PROTOBUF_CONSTEXPR RouteNote(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RouteNote(const RouteNote& from);
  RouteNote(RouteNote&& from) noexcept
    : RouteNote() {
    *this = ::std::move(from);
  }

  inline RouteNote& operator=(const RouteNote& from) {
    CopyFrom(from);
    return *this;
  }
  inline RouteNote& operator=(RouteNote&& from) noexcept {
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
  static const RouteNote& default_instance() {
    return *internal_default_instance();
  }
  static inline const RouteNote* internal_default_instance() {
    return reinterpret_cast<const RouteNote*>(
               &_RouteNote_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RouteNote& a, RouteNote& b) {
    a.Swap(&b);
  }
  inline void Swap(RouteNote* other) {
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
  void UnsafeArenaSwap(RouteNote* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RouteNote* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RouteNote>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RouteNote& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RouteNote& from) {
    RouteNote::MergeImpl(*this, from);
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
  void InternalSwap(RouteNote* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "routeguide.RouteNote";
  }
  protected:
  explicit RouteNote(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kLocationFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // .routeguide.Point location = 1;
  bool has_location() const;
  private:
  bool _internal_has_location() const;
  public:
  void clear_location();
  const ::routeguide::Point& location() const;
  PROTOBUF_NODISCARD ::routeguide::Point* release_location();
  ::routeguide::Point* mutable_location();
  void set_allocated_location(::routeguide::Point* location);
  private:
  const ::routeguide::Point& _internal_location() const;
  ::routeguide::Point* _internal_mutable_location();
  public:
  void unsafe_arena_set_allocated_location(
      ::routeguide::Point* location);
  ::routeguide::Point* unsafe_arena_release_location();

  // @@protoc_insertion_point(class_scope:routeguide.RouteNote)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    ::routeguide::Point* location_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class Routekomdat final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:routeguide.Routekomdat) */ {
 public:
  inline Routekomdat() : Routekomdat(nullptr) {}
  ~Routekomdat() override;
  explicit PROTOBUF_CONSTEXPR Routekomdat(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Routekomdat(const Routekomdat& from);
  Routekomdat(Routekomdat&& from) noexcept
    : Routekomdat() {
    *this = ::std::move(from);
  }

  inline Routekomdat& operator=(const Routekomdat& from) {
    CopyFrom(from);
    return *this;
  }
  inline Routekomdat& operator=(Routekomdat&& from) noexcept {
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
  static const Routekomdat& default_instance() {
    return *internal_default_instance();
  }
  static inline const Routekomdat* internal_default_instance() {
    return reinterpret_cast<const Routekomdat*>(
               &_Routekomdat_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Routekomdat& a, Routekomdat& b) {
    a.Swap(&b);
  }
  inline void Swap(Routekomdat* other) {
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
  void UnsafeArenaSwap(Routekomdat* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Routekomdat* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Routekomdat>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Routekomdat& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Routekomdat& from) {
    Routekomdat::MergeImpl(*this, from);
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
  void InternalSwap(Routekomdat* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "routeguide.Routekomdat";
  }
  protected:
  explicit Routekomdat(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kDataFieldNumber = 2,
  };
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

  // int32 data = 2;
  void clear_data();
  int32_t data() const;
  void set_data(int32_t value);
  private:
  int32_t _internal_data() const;
  void _internal_set_data(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:routeguide.Routekomdat)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr header_;
    int32_t data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// -------------------------------------------------------------------

class Routebaru final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:routeguide.Routebaru) */ {
 public:
  inline Routebaru() : Routebaru(nullptr) {}
  ~Routebaru() override;
  explicit PROTOBUF_CONSTEXPR Routebaru(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Routebaru(const Routebaru& from);
  Routebaru(Routebaru&& from) noexcept
    : Routebaru() {
    *this = ::std::move(from);
  }

  inline Routebaru& operator=(const Routebaru& from) {
    CopyFrom(from);
    return *this;
  }
  inline Routebaru& operator=(Routebaru&& from) noexcept {
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
  static const Routebaru& default_instance() {
    return *internal_default_instance();
  }
  static inline const Routebaru* internal_default_instance() {
    return reinterpret_cast<const Routebaru*>(
               &_Routebaru_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Routebaru& a, Routebaru& b) {
    a.Swap(&b);
  }
  inline void Swap(Routebaru* other) {
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
  void UnsafeArenaSwap(Routebaru* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Routebaru* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Routebaru>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Routebaru& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Routebaru& from) {
    Routebaru::MergeImpl(*this, from);
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
  void InternalSwap(Routebaru* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "routeguide.Routebaru";
  }
  protected:
  explicit Routebaru(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // repeated float data_f = 3;
  int data_f_size() const;
  private:
  int _internal_data_f_size() const;
  public:
  void clear_data_f();
  private:
  float _internal_data_f(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_data_f() const;
  void _internal_add_data_f(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_data_f();
  public:
  float data_f(int index) const;
  void set_data_f(int index, float value);
  void add_data_f(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      data_f() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_data_f();

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

  // int32 data = 2;
  void clear_data();
  int32_t data() const;
  void set_data(int32_t value);
  private:
  int32_t _internal_data() const;
  void _internal_set_data(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:routeguide.Routebaru)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > data_f_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr header_;
    int32_t data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_route_5fguide_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Point

// int32 latitude = 1;
inline void Point::clear_latitude() {
  _impl_.latitude_ = 0;
}
inline int32_t Point::_internal_latitude() const {
  return _impl_.latitude_;
}
inline int32_t Point::latitude() const {
  // @@protoc_insertion_point(field_get:routeguide.Point.latitude)
  return _internal_latitude();
}
inline void Point::_internal_set_latitude(int32_t value) {
  
  _impl_.latitude_ = value;
}
inline void Point::set_latitude(int32_t value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:routeguide.Point.latitude)
}

// int32 longitude = 2;
inline void Point::clear_longitude() {
  _impl_.longitude_ = 0;
}
inline int32_t Point::_internal_longitude() const {
  return _impl_.longitude_;
}
inline int32_t Point::longitude() const {
  // @@protoc_insertion_point(field_get:routeguide.Point.longitude)
  return _internal_longitude();
}
inline void Point::_internal_set_longitude(int32_t value) {
  
  _impl_.longitude_ = value;
}
inline void Point::set_longitude(int32_t value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:routeguide.Point.longitude)
}

// -------------------------------------------------------------------

// RouteNote

// .routeguide.Point location = 1;
inline bool RouteNote::_internal_has_location() const {
  return this != internal_default_instance() && _impl_.location_ != nullptr;
}
inline bool RouteNote::has_location() const {
  return _internal_has_location();
}
inline void RouteNote::clear_location() {
  if (GetArenaForAllocation() == nullptr && _impl_.location_ != nullptr) {
    delete _impl_.location_;
  }
  _impl_.location_ = nullptr;
}
inline const ::routeguide::Point& RouteNote::_internal_location() const {
  const ::routeguide::Point* p = _impl_.location_;
  return p != nullptr ? *p : reinterpret_cast<const ::routeguide::Point&>(
      ::routeguide::_Point_default_instance_);
}
inline const ::routeguide::Point& RouteNote::location() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteNote.location)
  return _internal_location();
}
inline void RouteNote::unsafe_arena_set_allocated_location(
    ::routeguide::Point* location) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.location_);
  }
  _impl_.location_ = location;
  if (location) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:routeguide.RouteNote.location)
}
inline ::routeguide::Point* RouteNote::release_location() {
  
  ::routeguide::Point* temp = _impl_.location_;
  _impl_.location_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::routeguide::Point* RouteNote::unsafe_arena_release_location() {
  // @@protoc_insertion_point(field_release:routeguide.RouteNote.location)
  
  ::routeguide::Point* temp = _impl_.location_;
  _impl_.location_ = nullptr;
  return temp;
}
inline ::routeguide::Point* RouteNote::_internal_mutable_location() {
  
  if (_impl_.location_ == nullptr) {
    auto* p = CreateMaybeMessage<::routeguide::Point>(GetArenaForAllocation());
    _impl_.location_ = p;
  }
  return _impl_.location_;
}
inline ::routeguide::Point* RouteNote::mutable_location() {
  ::routeguide::Point* _msg = _internal_mutable_location();
  // @@protoc_insertion_point(field_mutable:routeguide.RouteNote.location)
  return _msg;
}
inline void RouteNote::set_allocated_location(::routeguide::Point* location) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.location_;
  }
  if (location) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(location);
    if (message_arena != submessage_arena) {
      location = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, location, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.location_ = location;
  // @@protoc_insertion_point(field_set_allocated:routeguide.RouteNote.location)
}

// string message = 2;
inline void RouteNote::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& RouteNote::message() const {
  // @@protoc_insertion_point(field_get:routeguide.RouteNote.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RouteNote::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:routeguide.RouteNote.message)
}
inline std::string* RouteNote::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:routeguide.RouteNote.message)
  return _s;
}
inline const std::string& RouteNote::_internal_message() const {
  return _impl_.message_.Get();
}
inline void RouteNote::_internal_set_message(const std::string& value) {
  
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* RouteNote::_internal_mutable_message() {
  
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* RouteNote::release_message() {
  // @@protoc_insertion_point(field_release:routeguide.RouteNote.message)
  return _impl_.message_.Release();
}
inline void RouteNote::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:routeguide.RouteNote.message)
}

// -------------------------------------------------------------------

// Routekomdat

// string header = 1;
inline void Routekomdat::clear_header() {
  _impl_.header_.ClearToEmpty();
}
inline const std::string& Routekomdat::header() const {
  // @@protoc_insertion_point(field_get:routeguide.Routekomdat.header)
  return _internal_header();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Routekomdat::set_header(ArgT0&& arg0, ArgT... args) {
 
 _impl_.header_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:routeguide.Routekomdat.header)
}
inline std::string* Routekomdat::mutable_header() {
  std::string* _s = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:routeguide.Routekomdat.header)
  return _s;
}
inline const std::string& Routekomdat::_internal_header() const {
  return _impl_.header_.Get();
}
inline void Routekomdat::_internal_set_header(const std::string& value) {
  
  _impl_.header_.Set(value, GetArenaForAllocation());
}
inline std::string* Routekomdat::_internal_mutable_header() {
  
  return _impl_.header_.Mutable(GetArenaForAllocation());
}
inline std::string* Routekomdat::release_header() {
  // @@protoc_insertion_point(field_release:routeguide.Routekomdat.header)
  return _impl_.header_.Release();
}
inline void Routekomdat::set_allocated_header(std::string* header) {
  if (header != nullptr) {
    
  } else {
    
  }
  _impl_.header_.SetAllocated(header, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.header_.IsDefault()) {
    _impl_.header_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:routeguide.Routekomdat.header)
}

// int32 data = 2;
inline void Routekomdat::clear_data() {
  _impl_.data_ = 0;
}
inline int32_t Routekomdat::_internal_data() const {
  return _impl_.data_;
}
inline int32_t Routekomdat::data() const {
  // @@protoc_insertion_point(field_get:routeguide.Routekomdat.data)
  return _internal_data();
}
inline void Routekomdat::_internal_set_data(int32_t value) {
  
  _impl_.data_ = value;
}
inline void Routekomdat::set_data(int32_t value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:routeguide.Routekomdat.data)
}

// -------------------------------------------------------------------

// Routebaru

// string header = 1;
inline void Routebaru::clear_header() {
  _impl_.header_.ClearToEmpty();
}
inline const std::string& Routebaru::header() const {
  // @@protoc_insertion_point(field_get:routeguide.Routebaru.header)
  return _internal_header();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Routebaru::set_header(ArgT0&& arg0, ArgT... args) {
 
 _impl_.header_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:routeguide.Routebaru.header)
}
inline std::string* Routebaru::mutable_header() {
  std::string* _s = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:routeguide.Routebaru.header)
  return _s;
}
inline const std::string& Routebaru::_internal_header() const {
  return _impl_.header_.Get();
}
inline void Routebaru::_internal_set_header(const std::string& value) {
  
  _impl_.header_.Set(value, GetArenaForAllocation());
}
inline std::string* Routebaru::_internal_mutable_header() {
  
  return _impl_.header_.Mutable(GetArenaForAllocation());
}
inline std::string* Routebaru::release_header() {
  // @@protoc_insertion_point(field_release:routeguide.Routebaru.header)
  return _impl_.header_.Release();
}
inline void Routebaru::set_allocated_header(std::string* header) {
  if (header != nullptr) {
    
  } else {
    
  }
  _impl_.header_.SetAllocated(header, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.header_.IsDefault()) {
    _impl_.header_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:routeguide.Routebaru.header)
}

// int32 data = 2;
inline void Routebaru::clear_data() {
  _impl_.data_ = 0;
}
inline int32_t Routebaru::_internal_data() const {
  return _impl_.data_;
}
inline int32_t Routebaru::data() const {
  // @@protoc_insertion_point(field_get:routeguide.Routebaru.data)
  return _internal_data();
}
inline void Routebaru::_internal_set_data(int32_t value) {
  
  _impl_.data_ = value;
}
inline void Routebaru::set_data(int32_t value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:routeguide.Routebaru.data)
}

// repeated float data_f = 3;
inline int Routebaru::_internal_data_f_size() const {
  return _impl_.data_f_.size();
}
inline int Routebaru::data_f_size() const {
  return _internal_data_f_size();
}
inline void Routebaru::clear_data_f() {
  _impl_.data_f_.Clear();
}
inline float Routebaru::_internal_data_f(int index) const {
  return _impl_.data_f_.Get(index);
}
inline float Routebaru::data_f(int index) const {
  // @@protoc_insertion_point(field_get:routeguide.Routebaru.data_f)
  return _internal_data_f(index);
}
inline void Routebaru::set_data_f(int index, float value) {
  _impl_.data_f_.Set(index, value);
  // @@protoc_insertion_point(field_set:routeguide.Routebaru.data_f)
}
inline void Routebaru::_internal_add_data_f(float value) {
  _impl_.data_f_.Add(value);
}
inline void Routebaru::add_data_f(float value) {
  _internal_add_data_f(value);
  // @@protoc_insertion_point(field_add:routeguide.Routebaru.data_f)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Routebaru::_internal_data_f() const {
  return _impl_.data_f_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Routebaru::data_f() const {
  // @@protoc_insertion_point(field_list:routeguide.Routebaru.data_f)
  return _internal_data_f();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Routebaru::_internal_mutable_data_f() {
  return &_impl_.data_f_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Routebaru::mutable_data_f() {
  // @@protoc_insertion_point(field_mutable_list:routeguide.Routebaru.data_f)
  return _internal_mutable_data_f();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace routeguide

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_route_5fguide_2eproto
