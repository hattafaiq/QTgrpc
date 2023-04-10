// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tes_array.proto

#include "tes_array.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace mathtest {
PROTOBUF_CONSTEXPR MathRequest::MathRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.a_)*/0
  , /*decltype(_impl_.b_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathRequestDefaultTypeInternal() {}
  union {
    MathRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathRequestDefaultTypeInternal _MathRequest_default_instance_;
PROTOBUF_CONSTEXPR MathReply::MathReply(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.result_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathReplyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathReplyDefaultTypeInternal() {}
  union {
    MathReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathReplyDefaultTypeInternal _MathReply_default_instance_;
PROTOBUF_CONSTEXPR Mathhasil::Mathhasil(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.result_float_)*/{}
  , /*decltype(_impl_.header_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathhasilDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathhasilDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathhasilDefaultTypeInternal() {}
  union {
    Mathhasil _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathhasilDefaultTypeInternal _Mathhasil_default_instance_;
}  // namespace mathtest
static ::_pb::Metadata file_level_metadata_tes_5farray_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_tes_5farray_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_tes_5farray_2eproto = nullptr;

const uint32_t TableStruct_tes_5farray_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mathtest::MathRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mathtest::MathRequest, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::mathtest::MathRequest, _impl_.b_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mathtest::MathReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mathtest::MathReply, _impl_.result_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mathtest::Mathhasil, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mathtest::Mathhasil, _impl_.header_),
  PROTOBUF_FIELD_OFFSET(::mathtest::Mathhasil, _impl_.result_float_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mathtest::MathRequest)},
  { 8, -1, -1, sizeof(::mathtest::MathReply)},
  { 15, -1, -1, sizeof(::mathtest::Mathhasil)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::mathtest::_MathRequest_default_instance_._instance,
  &::mathtest::_MathReply_default_instance_._instance,
  &::mathtest::_Mathhasil_default_instance_._instance,
};

const char descriptor_table_protodef_tes_5farray_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017tes_array.proto\022\010mathtest\"#\n\013MathReque"
  "st\022\t\n\001a\030\001 \001(\005\022\t\n\001b\030\002 \001(\005\"\033\n\tMathReply\022\016\n"
  "\006result\030\001 \001(\005\"1\n\tMathhasil\022\016\n\006header\030\001 \001"
  "(\t\022\024\n\014result_float\030\002 \003(\0022\202\001\n\010MathTest\022;\n"
  "\013sendRequest\022\025.mathtest.MathRequest\032\023.ma"
  "thtest.MathReply\"\000\0229\n\tsendarray\022\025.mathte"
  "st.MathRequest\032\023.mathtest.Mathhasil\"\000b\006p"
  "roto3"
  ;
static ::_pbi::once_flag descriptor_table_tes_5farray_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_tes_5farray_2eproto = {
    false, false, 285, descriptor_table_protodef_tes_5farray_2eproto,
    "tes_array.proto",
    &descriptor_table_tes_5farray_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_tes_5farray_2eproto::offsets,
    file_level_metadata_tes_5farray_2eproto, file_level_enum_descriptors_tes_5farray_2eproto,
    file_level_service_descriptors_tes_5farray_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_tes_5farray_2eproto_getter() {
  return &descriptor_table_tes_5farray_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_tes_5farray_2eproto(&descriptor_table_tes_5farray_2eproto);
namespace mathtest {

// ===================================================================

class MathRequest::_Internal {
 public:
};

MathRequest::MathRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:mathtest.MathRequest)
}
MathRequest::MathRequest(const MathRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MathRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.a_, &from._impl_.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.b_) -
    reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  // @@protoc_insertion_point(copy_constructor:mathtest.MathRequest)
}

inline void MathRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){0}
    , decltype(_impl_.b_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MathRequest::~MathRequest() {
  // @@protoc_insertion_point(destructor:mathtest.MathRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MathRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MathRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MathRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mathtest.MathRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.a_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.b_) -
      reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MathRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MathRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mathtest.MathRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_a(), target);
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mathtest.MathRequest)
  return target;
}

size_t MathRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mathtest.MathRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 a = 1;
  if (this->_internal_a() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_a());
  }

  // int32 b = 2;
  if (this->_internal_b() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MathRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MathRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MathRequest::GetClassData() const { return &_class_data_; }


void MathRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MathRequest*>(&to_msg);
  auto& from = static_cast<const MathRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mathtest.MathRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_a() != 0) {
    _this->_internal_set_a(from._internal_a());
  }
  if (from._internal_b() != 0) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MathRequest::CopyFrom(const MathRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mathtest.MathRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathRequest::IsInitialized() const {
  return true;
}

void MathRequest::InternalSwap(MathRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MathRequest, _impl_.b_)
      + sizeof(MathRequest::_impl_.b_)
      - PROTOBUF_FIELD_OFFSET(MathRequest, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MathRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tes_5farray_2eproto_getter, &descriptor_table_tes_5farray_2eproto_once,
      file_level_metadata_tes_5farray_2eproto[0]);
}

// ===================================================================

class MathReply::_Internal {
 public:
};

MathReply::MathReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:mathtest.MathReply)
}
MathReply::MathReply(const MathReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MathReply* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.result_ = from._impl_.result_;
  // @@protoc_insertion_point(copy_constructor:mathtest.MathReply)
}

inline void MathReply::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MathReply::~MathReply() {
  // @@protoc_insertion_point(destructor:mathtest.MathReply)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MathReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MathReply::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MathReply::Clear() {
// @@protoc_insertion_point(message_clear_start:mathtest.MathReply)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MathReply::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.result_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MathReply::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mathtest.MathReply)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->_internal_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mathtest.MathReply)
  return target;
}

size_t MathReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mathtest.MathReply)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->_internal_result() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MathReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MathReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MathReply::GetClassData() const { return &_class_data_; }


void MathReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MathReply*>(&to_msg);
  auto& from = static_cast<const MathReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mathtest.MathReply)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_result() != 0) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MathReply::CopyFrom(const MathReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mathtest.MathReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathReply::IsInitialized() const {
  return true;
}

void MathReply::InternalSwap(MathReply* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.result_, other->_impl_.result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MathReply::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tes_5farray_2eproto_getter, &descriptor_table_tes_5farray_2eproto_once,
      file_level_metadata_tes_5farray_2eproto[1]);
}

// ===================================================================

class Mathhasil::_Internal {
 public:
};

Mathhasil::Mathhasil(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:mathtest.Mathhasil)
}
Mathhasil::Mathhasil(const Mathhasil& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Mathhasil* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.result_float_){from._impl_.result_float_}
    , decltype(_impl_.header_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.header_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_header().empty()) {
    _this->_impl_.header_.Set(from._internal_header(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:mathtest.Mathhasil)
}

inline void Mathhasil::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.result_float_){arena}
    , decltype(_impl_.header_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.header_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Mathhasil::~Mathhasil() {
  // @@protoc_insertion_point(destructor:mathtest.Mathhasil)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Mathhasil::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.result_float_.~RepeatedField();
  _impl_.header_.Destroy();
}

void Mathhasil::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Mathhasil::Clear() {
// @@protoc_insertion_point(message_clear_start:mathtest.Mathhasil)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_float_.Clear();
  _impl_.header_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Mathhasil::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_header();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "mathtest.Mathhasil.header"));
        } else
          goto handle_unusual;
        continue;
      // repeated float result_float = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_result_float(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 21) {
          _internal_add_result_float(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Mathhasil::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mathtest.Mathhasil)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string header = 1;
  if (!this->_internal_header().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_header().data(), static_cast<int>(this->_internal_header().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mathtest.Mathhasil.header");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_header(), target);
  }

  // repeated float result_float = 2;
  if (this->_internal_result_float_size() > 0) {
    target = stream->WriteFixedPacked(2, _internal_result_float(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mathtest.Mathhasil)
  return target;
}

size_t Mathhasil::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mathtest.Mathhasil)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float result_float = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_result_float_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  // string header = 1;
  if (!this->_internal_header().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_header());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Mathhasil::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Mathhasil::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Mathhasil::GetClassData() const { return &_class_data_; }


void Mathhasil::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Mathhasil*>(&to_msg);
  auto& from = static_cast<const Mathhasil&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mathtest.Mathhasil)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.result_float_.MergeFrom(from._impl_.result_float_);
  if (!from._internal_header().empty()) {
    _this->_internal_set_header(from._internal_header());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Mathhasil::CopyFrom(const Mathhasil& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mathtest.Mathhasil)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Mathhasil::IsInitialized() const {
  return true;
}

void Mathhasil::InternalSwap(Mathhasil* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.result_float_.InternalSwap(&other->_impl_.result_float_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.header_, lhs_arena,
      &other->_impl_.header_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Mathhasil::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_tes_5farray_2eproto_getter, &descriptor_table_tes_5farray_2eproto_once,
      file_level_metadata_tes_5farray_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mathtest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mathtest::MathRequest*
Arena::CreateMaybeMessage< ::mathtest::MathRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mathtest::MathRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::mathtest::MathReply*
Arena::CreateMaybeMessage< ::mathtest::MathReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mathtest::MathReply >(arena);
}
template<> PROTOBUF_NOINLINE ::mathtest::Mathhasil*
Arena::CreateMaybeMessage< ::mathtest::Mathhasil >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mathtest::Mathhasil >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
