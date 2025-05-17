// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from service_msgs:msg/ServiceEventInfo.idl
// generated code does not contain a copyright notice
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace service_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
cdr_serialize(
  const service_msgs::msg::ServiceEventInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: event_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.event_type);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: client_gid
  {
    size_t size = ros_message.client_gid.size();
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message.client_gid.data(), size);
  }
  // Member: sequence_number
  rv = ucdr_serialize_int64_t(cdr, ros_message.sequence_number);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  service_msgs::msg::ServiceEventInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: event_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.event_type);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);
  // Member: client_gid
  {
    const size_t size = ros_message.client_gid.size();
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message.client_gid.data(), size);
  }
  // Member: sequence_number
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.sequence_number);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
get_serialized_size(
  const service_msgs::msg::ServiceEventInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: event_type
  {
    const size_t item_size = sizeof(ros_message.event_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);
  // Member: client_gid
  {
    const size_t array_size = 16;
    const size_t item_size = sizeof(ros_message.client_gid[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: sequence_number
  {
    const size_t item_size = sizeof(ros_message.sequence_number);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
max_serialized_size_ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: event_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: client_gid
  {
    const size_t array_size = 16;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: sequence_number
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static bool _ServiceEventInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const service_msgs::msg::ServiceEventInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServiceEventInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<service_msgs::msg::ServiceEventInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServiceEventInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const service_msgs::msg::ServiceEventInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServiceEventInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const service_msgs::msg::ServiceEventInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ServiceEventInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ServiceEventInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _ServiceEventInfo__callbacks = {
  "service_msgs::msg",
  "ServiceEventInfo",
  _ServiceEventInfo__cdr_serialize,
  _ServiceEventInfo__cdr_deserialize,
  _ServiceEventInfo__get_serialized_size,
  _ServiceEventInfo__get_serialized_size_with_initial_alignment,
  _ServiceEventInfo__max_serialized_size
};

static rosidl_message_type_support_t _ServiceEventInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ServiceEventInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace service_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_service_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>()
{
  return &service_msgs::msg::typesupport_microxrcedds_cpp::_ServiceEventInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, service_msgs, msg, ServiceEventInfo)() {
  return &service_msgs::msg::typesupport_microxrcedds_cpp::_ServiceEventInfo__handle;
}

#ifdef __cplusplus
}
#endif
