// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_parsian_simurosot_data_wrapper.proto

#include "messages_parsian_simurosot_data_wrapper.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdebugs_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Draws_messages_5fparsian_5fsimurosot_5fdebugs_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdetection_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fdebugs_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Logs_messages_5fparsian_5fsimurosot_5fdebugs_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_WorldModel_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto;
class HeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Header> _instance;
} _Header_default_instance_;
class DataWrapperDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DataWrapper> _instance;
} _DataWrapper_default_instance_;
static void InitDefaultsscc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_DataWrapper_default_instance_;
    new (ptr) ::DataWrapper();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DataWrapper::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 5, 0, InitDefaultsscc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto}, {
      &scc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base,
      &scc_info_Draws_messages_5fparsian_5fsimurosot_5fdebugs_2eproto.base,
      &scc_info_Logs_messages_5fparsian_5fsimurosot_5fdebugs_2eproto.base,
      &scc_info_Frame_messages_5fparsian_5fsimurosot_5fdetection_2eproto.base,
      &scc_info_WorldModel_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto.base,}};

static void InitDefaultsscc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Header_default_instance_;
    new (ptr) ::Header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Header::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Header, seq_),
  PROTOBUF_FIELD_OFFSET(::Header, stamp_second_),
  PROTOBUF_FIELD_OFFSET(::Header, stamp_nsecond_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::DataWrapper, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::DataWrapper, header_),
  PROTOBUF_FIELD_OFFSET(::DataWrapper, draws_),
  PROTOBUF_FIELD_OFFSET(::DataWrapper, debugs_),
  PROTOBUF_FIELD_OFFSET(::DataWrapper, detection_),
  PROTOBUF_FIELD_OFFSET(::DataWrapper, worldmodel_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Header)},
  { 8, -1, sizeof(::DataWrapper)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Header_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_DataWrapper_default_instance_),
};

const char descriptor_table_protodef_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-messages_parsian_simurosot_data_wrappe"
  "r.proto\032*messages_parsian_simurosot_dete"
  "ction.proto\032+messages_parsian_simurosot_"
  "worldmodel.proto\032\'messages_parsian_simur"
  "osot_debugs.proto\"B\n\006Header\022\013\n\003seq\030\001 \001(\r"
  "\022\024\n\014stamp_second\030\002 \001(\r\022\025\n\rstamp_nsecond\030"
  "\003 \001(\r\"\220\001\n\013DataWrapper\022\027\n\006header\030\001 \001(\0132\007."
  "Header\022\025\n\005draws\030\002 \001(\0132\006.Draws\022\025\n\006debugs\030"
  "\003 \001(\0132\005.Logs\022\031\n\tdetection\030\004 \001(\0132\006.Frame\022"
  "\037\n\nworldmodel\030\005 \001(\0132\013.WorldModelb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_deps[3] = {
  &::descriptor_table_messages_5fparsian_5fsimurosot_5fdebugs_2eproto,
  &::descriptor_table_messages_5fparsian_5fsimurosot_5fdetection_2eproto,
  &::descriptor_table_messages_5fparsian_5fsimurosot_5fworldmodel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_sccs[2] = {
  &scc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base,
  &scc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_once;
static bool descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto = {
  &descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_initialized, descriptor_table_protodef_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto, "messages_parsian_simurosot_data_wrapper.proto", 400,
  &descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_once, descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_sccs, descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto::offsets,
  file_level_metadata_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto, 2, file_level_enum_descriptors_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto, file_level_service_descriptors_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto), true);

// ===================================================================

void Header::InitAsDefaultInstance() {
}
class Header::_Internal {
 public:
};

Header::Header()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Header)
}
Header::Header(const Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&seq_, &from.seq_,
    static_cast<size_t>(reinterpret_cast<char*>(&stamp_nsecond_) -
    reinterpret_cast<char*>(&seq_)) + sizeof(stamp_nsecond_));
  // @@protoc_insertion_point(copy_constructor:Header)
}

void Header::SharedCtor() {
  ::memset(&seq_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&stamp_nsecond_) -
      reinterpret_cast<char*>(&seq_)) + sizeof(stamp_nsecond_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:Header)
  SharedDtor();
}

void Header::SharedDtor() {
}

void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Header& Header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Header_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&seq_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&stamp_nsecond_) -
      reinterpret_cast<char*>(&seq_)) + sizeof(stamp_nsecond_));
  _internal_metadata_.Clear();
}

const char* Header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 seq = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          seq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 stamp_second = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          stamp_second_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 stamp_nsecond = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          stamp_nsecond_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Header::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 seq = 1;
  if (this->seq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_seq(), target);
  }

  // uint32 stamp_second = 2;
  if (this->stamp_second() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_stamp_second(), target);
  }

  // uint32 stamp_nsecond = 3;
  if (this->stamp_nsecond() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_stamp_nsecond(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Header)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 seq = 1;
  if (this->seq() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_seq());
  }

  // uint32 stamp_second = 2;
  if (this->stamp_second() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_stamp_second());
  }

  // uint32 stamp_nsecond = 3;
  if (this->stamp_nsecond() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_stamp_nsecond());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.seq() != 0) {
    _internal_set_seq(from._internal_seq());
  }
  if (from.stamp_second() != 0) {
    _internal_set_stamp_second(from._internal_stamp_second());
  }
  if (from.stamp_nsecond() != 0) {
    _internal_set_stamp_nsecond(from._internal_stamp_nsecond());
  }
}

void Header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::InternalSwap(Header* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(seq_, other->seq_);
  swap(stamp_second_, other->stamp_second_);
  swap(stamp_nsecond_, other->stamp_nsecond_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Header::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void DataWrapper::InitAsDefaultInstance() {
  ::_DataWrapper_default_instance_._instance.get_mutable()->header_ = const_cast< ::Header*>(
      ::Header::internal_default_instance());
  ::_DataWrapper_default_instance_._instance.get_mutable()->draws_ = const_cast< ::Draws*>(
      ::Draws::internal_default_instance());
  ::_DataWrapper_default_instance_._instance.get_mutable()->debugs_ = const_cast< ::Logs*>(
      ::Logs::internal_default_instance());
  ::_DataWrapper_default_instance_._instance.get_mutable()->detection_ = const_cast< ::Frame*>(
      ::Frame::internal_default_instance());
  ::_DataWrapper_default_instance_._instance.get_mutable()->worldmodel_ = const_cast< ::WorldModel*>(
      ::WorldModel::internal_default_instance());
}
class DataWrapper::_Internal {
 public:
  static const ::Header& header(const DataWrapper* msg);
  static const ::Draws& draws(const DataWrapper* msg);
  static const ::Logs& debugs(const DataWrapper* msg);
  static const ::Frame& detection(const DataWrapper* msg);
  static const ::WorldModel& worldmodel(const DataWrapper* msg);
};

const ::Header&
DataWrapper::_Internal::header(const DataWrapper* msg) {
  return *msg->header_;
}
const ::Draws&
DataWrapper::_Internal::draws(const DataWrapper* msg) {
  return *msg->draws_;
}
const ::Logs&
DataWrapper::_Internal::debugs(const DataWrapper* msg) {
  return *msg->debugs_;
}
const ::Frame&
DataWrapper::_Internal::detection(const DataWrapper* msg) {
  return *msg->detection_;
}
const ::WorldModel&
DataWrapper::_Internal::worldmodel(const DataWrapper* msg) {
  return *msg->worldmodel_;
}
void DataWrapper::clear_draws() {
  if (GetArenaNoVirtual() == nullptr && draws_ != nullptr) {
    delete draws_;
  }
  draws_ = nullptr;
}
void DataWrapper::clear_debugs() {
  if (GetArenaNoVirtual() == nullptr && debugs_ != nullptr) {
    delete debugs_;
  }
  debugs_ = nullptr;
}
void DataWrapper::clear_detection() {
  if (GetArenaNoVirtual() == nullptr && detection_ != nullptr) {
    delete detection_;
  }
  detection_ = nullptr;
}
void DataWrapper::clear_worldmodel() {
  if (GetArenaNoVirtual() == nullptr && worldmodel_ != nullptr) {
    delete worldmodel_;
  }
  worldmodel_ = nullptr;
}
DataWrapper::DataWrapper()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DataWrapper)
}
DataWrapper::DataWrapper(const DataWrapper& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from._internal_has_draws()) {
    draws_ = new ::Draws(*from.draws_);
  } else {
    draws_ = nullptr;
  }
  if (from._internal_has_debugs()) {
    debugs_ = new ::Logs(*from.debugs_);
  } else {
    debugs_ = nullptr;
  }
  if (from._internal_has_detection()) {
    detection_ = new ::Frame(*from.detection_);
  } else {
    detection_ = nullptr;
  }
  if (from._internal_has_worldmodel()) {
    worldmodel_ = new ::WorldModel(*from.worldmodel_);
  } else {
    worldmodel_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:DataWrapper)
}

void DataWrapper::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&worldmodel_) -
      reinterpret_cast<char*>(&header_)) + sizeof(worldmodel_));
}

DataWrapper::~DataWrapper() {
  // @@protoc_insertion_point(destructor:DataWrapper)
  SharedDtor();
}

void DataWrapper::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete draws_;
  if (this != internal_default_instance()) delete debugs_;
  if (this != internal_default_instance()) delete detection_;
  if (this != internal_default_instance()) delete worldmodel_;
}

void DataWrapper::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataWrapper& DataWrapper::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DataWrapper_messages_5fparsian_5fsimurosot_5fdata_5fwrapper_2eproto.base);
  return *internal_default_instance();
}


void DataWrapper::Clear() {
// @@protoc_insertion_point(message_clear_start:DataWrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && draws_ != nullptr) {
    delete draws_;
  }
  draws_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && debugs_ != nullptr) {
    delete debugs_;
  }
  debugs_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && detection_ != nullptr) {
    delete detection_;
  }
  detection_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && worldmodel_ != nullptr) {
    delete worldmodel_;
  }
  worldmodel_ = nullptr;
  _internal_metadata_.Clear();
}

const char* DataWrapper::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Draws draws = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_draws(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Logs debugs = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_debugs(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Frame detection = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_detection(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .WorldModel worldmodel = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_worldmodel(), ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* DataWrapper::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:DataWrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // .Draws draws = 2;
  if (this->has_draws()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::draws(this), target, stream);
  }

  // .Logs debugs = 3;
  if (this->has_debugs()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::debugs(this), target, stream);
  }

  // .Frame detection = 4;
  if (this->has_detection()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::detection(this), target, stream);
  }

  // .WorldModel worldmodel = 5;
  if (this->has_worldmodel()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::worldmodel(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DataWrapper)
  return target;
}

size_t DataWrapper::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DataWrapper)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .Draws draws = 2;
  if (this->has_draws()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *draws_);
  }

  // .Logs debugs = 3;
  if (this->has_debugs()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *debugs_);
  }

  // .Frame detection = 4;
  if (this->has_detection()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *detection_);
  }

  // .WorldModel worldmodel = 5;
  if (this->has_worldmodel()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *worldmodel_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataWrapper::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DataWrapper)
  GOOGLE_DCHECK_NE(&from, this);
  const DataWrapper* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DataWrapper>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DataWrapper)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DataWrapper)
    MergeFrom(*source);
  }
}

void DataWrapper::MergeFrom(const DataWrapper& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DataWrapper)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    _internal_mutable_header()->::Header::MergeFrom(from._internal_header());
  }
  if (from.has_draws()) {
    _internal_mutable_draws()->::Draws::MergeFrom(from._internal_draws());
  }
  if (from.has_debugs()) {
    _internal_mutable_debugs()->::Logs::MergeFrom(from._internal_debugs());
  }
  if (from.has_detection()) {
    _internal_mutable_detection()->::Frame::MergeFrom(from._internal_detection());
  }
  if (from.has_worldmodel()) {
    _internal_mutable_worldmodel()->::WorldModel::MergeFrom(from._internal_worldmodel());
  }
}

void DataWrapper::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DataWrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataWrapper::CopyFrom(const DataWrapper& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DataWrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataWrapper::IsInitialized() const {
  return true;
}

void DataWrapper::InternalSwap(DataWrapper* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(header_, other->header_);
  swap(draws_, other->draws_);
  swap(debugs_, other->debugs_);
  swap(detection_, other->detection_);
  swap(worldmodel_, other->worldmodel_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DataWrapper::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Header* Arena::CreateMaybeMessage< ::Header >(Arena* arena) {
  return Arena::CreateInternal< ::Header >(arena);
}
template<> PROTOBUF_NOINLINE ::DataWrapper* Arena::CreateMaybeMessage< ::DataWrapper >(Arena* arena) {
  return Arena::CreateInternal< ::DataWrapper >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>