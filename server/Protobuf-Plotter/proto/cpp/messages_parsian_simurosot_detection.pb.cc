// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_parsian_simurosot_detection.proto

#include "messages_parsian_simurosot_detection.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdetection_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdetection_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto;
class RBallDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RBall> _instance;
} _RBall_default_instance_;
class RRobotDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RRobot> _instance;
} _RRobot_default_instance_;
class FrameDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Frame> _instance;
} _Frame_default_instance_;
static void InitDefaultsscc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Frame_default_instance_;
    new (ptr) ::Frame();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Frame::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto}, {
      &scc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,
      &scc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,}};

static void InitDefaultsscc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_RBall_default_instance_;
    new (ptr) ::RBall();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RBall::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto}, {}};

static void InitDefaultsscc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_RRobot_default_instance_;
    new (ptr) ::RRobot();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RRobot::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_5fparsian_5fsimurosot_5fdetection_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_5fparsian_5fsimurosot_5fdetection_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_5fparsian_5fsimurosot_5fdetection_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_5fparsian_5fsimurosot_5fdetection_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RBall, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RBall, x_),
  PROTOBUF_FIELD_OFFSET(::RBall, y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RRobot, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RRobot, id_),
  PROTOBUF_FIELD_OFFSET(::RRobot, x_),
  PROTOBUF_FIELD_OFFSET(::RRobot, y_),
  PROTOBUF_FIELD_OFFSET(::RRobot, ang_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Frame, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Frame, frame_number_),
  PROTOBUF_FIELD_OFFSET(::Frame, ball_),
  PROTOBUF_FIELD_OFFSET(::Frame, robots_yellow_),
  PROTOBUF_FIELD_OFFSET(::Frame, robots_blue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::RBall)},
  { 7, -1, sizeof(::RRobot)},
  { 16, -1, sizeof(::Frame)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RBall_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RRobot_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Frame_default_instance_),
};

const char descriptor_table_protodef_messages_5fparsian_5fsimurosot_5fdetection_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*messages_parsian_simurosot_detection.p"
  "roto\"\035\n\005RBall\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\"7\n\006R"
  "Robot\022\n\n\002id\030\001 \001(\r\022\t\n\001x\030\002 \001(\002\022\t\n\001y\030\003 \001(\002\022"
  "\013\n\003ang\030\004 \001(\002\"q\n\005Frame\022\024\n\014frame_number\030\001 "
  "\001(\r\022\024\n\004ball\030\002 \001(\0132\006.RBall\022\036\n\rrobots_yell"
  "ow\030\003 \003(\0132\007.RRobot\022\034\n\013robots_blue\030\004 \003(\0132\007"
  ".RRobotb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_sccs[3] = {
  &scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,
  &scc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,
  &scc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_once;
static bool descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto = {
  &descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_initialized, descriptor_table_protodef_messages_5fparsian_5fsimurosot_5fdetection_2eproto, "messages_parsian_simurosot_detection.proto", 255,
  &descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_once, descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_sccs, descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_messages_5fparsian_5fsimurosot_5fdetection_2eproto::offsets,
  file_level_metadata_messages_5fparsian_5fsimurosot_5fdetection_2eproto, 3, file_level_enum_descriptors_messages_5fparsian_5fsimurosot_5fdetection_2eproto, file_level_service_descriptors_messages_5fparsian_5fsimurosot_5fdetection_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_5fparsian_5fsimurosot_5fdetection_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto), true);

// ===================================================================

void RBall::InitAsDefaultInstance() {
}
class RBall::_Internal {
 public:
};

RBall::RBall()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:RBall)
}
RBall::RBall(const RBall& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:RBall)
}

void RBall::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

RBall::~RBall() {
  // @@protoc_insertion_point(destructor:RBall)
  SharedDtor();
}

void RBall::SharedDtor() {
}

void RBall::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RBall& RBall::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RBall_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base);
  return *internal_default_instance();
}


void RBall::Clear() {
// @@protoc_insertion_point(message_clear_start:RBall)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

const char* RBall::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RBall::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RBall)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RBall)
  return target;
}

size_t RBall::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RBall)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RBall::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RBall)
  GOOGLE_DCHECK_NE(&from, this);
  const RBall* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RBall>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RBall)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RBall)
    MergeFrom(*source);
  }
}

void RBall::MergeFrom(const RBall& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RBall)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
}

void RBall::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RBall)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RBall::CopyFrom(const RBall& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RBall)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RBall::IsInitialized() const {
  return true;
}

void RBall::InternalSwap(RBall* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RBall::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void RRobot::InitAsDefaultInstance() {
}
class RRobot::_Internal {
 public:
};

RRobot::RRobot()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:RRobot)
}
RRobot::RRobot(const RRobot& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&ang_) -
    reinterpret_cast<char*>(&id_)) + sizeof(ang_));
  // @@protoc_insertion_point(copy_constructor:RRobot)
}

void RRobot::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ang_) -
      reinterpret_cast<char*>(&id_)) + sizeof(ang_));
}

RRobot::~RRobot() {
  // @@protoc_insertion_point(destructor:RRobot)
  SharedDtor();
}

void RRobot::SharedDtor() {
}

void RRobot::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RRobot& RRobot::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RRobot_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base);
  return *internal_default_instance();
}


void RRobot::Clear() {
// @@protoc_insertion_point(message_clear_start:RRobot)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ang_) -
      reinterpret_cast<char*>(&id_)) + sizeof(ang_));
  _internal_metadata_.Clear();
}

const char* RRobot::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float x = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float ang = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          ang_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RRobot::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RRobot)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // float x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_x(), target);
  }

  // float y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_y(), target);
  }

  // float ang = 4;
  if (!(this->ang() <= 0 && this->ang() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_ang(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RRobot)
  return target;
}

size_t RRobot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RRobot)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  // float x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  // float ang = 4;
  if (!(this->ang() <= 0 && this->ang() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RRobot::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RRobot)
  GOOGLE_DCHECK_NE(&from, this);
  const RRobot* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RRobot>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RRobot)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RRobot)
    MergeFrom(*source);
  }
}

void RRobot::MergeFrom(const RRobot& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RRobot)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from.ang() <= 0 && from.ang() >= 0)) {
    _internal_set_ang(from._internal_ang());
  }
}

void RRobot::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RRobot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RRobot::CopyFrom(const RRobot& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RRobot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RRobot::IsInitialized() const {
  return true;
}

void RRobot::InternalSwap(RRobot* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(id_, other->id_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(ang_, other->ang_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RRobot::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Frame::InitAsDefaultInstance() {
  ::_Frame_default_instance_._instance.get_mutable()->ball_ = const_cast< ::RBall*>(
      ::RBall::internal_default_instance());
}
class Frame::_Internal {
 public:
  static const ::RBall& ball(const Frame* msg);
};

const ::RBall&
Frame::_Internal::ball(const Frame* msg) {
  return *msg->ball_;
}
Frame::Frame()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Frame)
}
Frame::Frame(const Frame& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      robots_yellow_(from.robots_yellow_),
      robots_blue_(from.robots_blue_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_ball()) {
    ball_ = new ::RBall(*from.ball_);
  } else {
    ball_ = nullptr;
  }
  frame_number_ = from.frame_number_;
  // @@protoc_insertion_point(copy_constructor:Frame)
}

void Frame::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base);
  ::memset(&ball_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&frame_number_) -
      reinterpret_cast<char*>(&ball_)) + sizeof(frame_number_));
}

Frame::~Frame() {
  // @@protoc_insertion_point(destructor:Frame)
  SharedDtor();
}

void Frame::SharedDtor() {
  if (this != internal_default_instance()) delete ball_;
}

void Frame::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Frame& Frame::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base);
  return *internal_default_instance();
}


void Frame::Clear() {
// @@protoc_insertion_point(message_clear_start:Frame)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robots_yellow_.Clear();
  robots_blue_.Clear();
  if (GetArenaNoVirtual() == nullptr && ball_ != nullptr) {
    delete ball_;
  }
  ball_ = nullptr;
  frame_number_ = 0u;
  _internal_metadata_.Clear();
}

const char* Frame::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 frame_number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          frame_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .RBall ball = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_ball(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .RRobot robots_yellow = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robots_yellow(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .RRobot robots_blue = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robots_blue(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Frame::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Frame)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 frame_number = 1;
  if (this->frame_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_frame_number(), target);
  }

  // .RBall ball = 2;
  if (this->has_ball()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::ball(this), target, stream);
  }

  // repeated .RRobot robots_yellow = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_robots_yellow_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_robots_yellow(i), target, stream);
  }

  // repeated .RRobot robots_blue = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_robots_blue_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_robots_blue(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Frame)
  return target;
}

size_t Frame::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Frame)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .RRobot robots_yellow = 3;
  total_size += 1UL * this->_internal_robots_yellow_size();
  for (const auto& msg : this->robots_yellow_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .RRobot robots_blue = 4;
  total_size += 1UL * this->_internal_robots_blue_size();
  for (const auto& msg : this->robots_blue_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .RBall ball = 2;
  if (this->has_ball()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ball_);
  }

  // uint32 frame_number = 1;
  if (this->frame_number() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_frame_number());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Frame::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Frame)
  GOOGLE_DCHECK_NE(&from, this);
  const Frame* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Frame>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Frame)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Frame)
    MergeFrom(*source);
  }
}

void Frame::MergeFrom(const Frame& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Frame)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  robots_yellow_.MergeFrom(from.robots_yellow_);
  robots_blue_.MergeFrom(from.robots_blue_);
  if (from.has_ball()) {
    _internal_mutable_ball()->::RBall::MergeFrom(from._internal_ball());
  }
  if (from.frame_number() != 0) {
    _internal_set_frame_number(from._internal_frame_number());
  }
}

void Frame::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Frame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Frame::CopyFrom(const Frame& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Frame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Frame::IsInitialized() const {
  return true;
}

void Frame::InternalSwap(Frame* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  robots_yellow_.InternalSwap(&other->robots_yellow_);
  robots_blue_.InternalSwap(&other->robots_blue_);
  swap(ball_, other->ball_);
  swap(frame_number_, other->frame_number_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Frame::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RBall* Arena::CreateMaybeMessage< ::RBall >(Arena* arena) {
  return Arena::CreateInternal< ::RBall >(arena);
}
template<> PROTOBUF_NOINLINE ::RRobot* Arena::CreateMaybeMessage< ::RRobot >(Arena* arena) {
  return Arena::CreateInternal< ::RRobot >(arena);
}
template<> PROTOBUF_NOINLINE ::Frame* Arena::CreateMaybeMessage< ::Frame >(Arena* arena) {
  return Arena::CreateInternal< ::Frame >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>