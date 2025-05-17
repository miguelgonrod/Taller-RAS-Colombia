// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:msg/TypeSource.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/type_source__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "type_description_interfaces/msg/detail/type_source__struct.hpp"

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

namespace type_description_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::msg::TypeSource & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type_name
  rv = ucdr_serialize_string(cdr, ros_message.type_name.c_str());
  // Member: encoding
  rv = ucdr_serialize_string(cdr, ros_message.encoding.c_str());
  // Member: raw_file_contents
  rv = ucdr_serialize_string(cdr, ros_message.raw_file_contents.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  type_description_interfaces::msg::TypeSource & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type_name
  ros_message.type_name.resize(ros_message.type_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.type_name[0], ros_message.type_name.capacity());
  if (rv) {
    ros_message.type_name.resize(std::strlen(&ros_message.type_name[0]));
  }
  // Member: encoding
  ros_message.encoding.resize(ros_message.encoding.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.encoding[0], ros_message.encoding.capacity());
  if (rv) {
    ros_message.encoding.resize(std::strlen(&ros_message.encoding[0]));
  }
  // Member: raw_file_contents
  ros_message.raw_file_contents.resize(ros_message.raw_file_contents.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.raw_file_contents[0], ros_message.raw_file_contents.capacity());
  if (rv) {
    ros_message.raw_file_contents.resize(std::strlen(&ros_message.raw_file_contents[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::TypeSource & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.type_name.size() + 1;
  // Member: encoding
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.encoding.size() + 1;
  // Member: raw_file_contents
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.raw_file_contents.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_TypeSource(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  *full_bounded = false;
  // Member: encoding
  *full_bounded = false;
  // Member: raw_file_contents
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _TypeSource__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeSource *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TypeSource__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::msg::TypeSource *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TypeSource__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeSource *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TypeSource__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeSource *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TypeSource__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TypeSource(&full_bounded, 0);
}

static message_type_support_callbacks_t _TypeSource__callbacks = {
  "type_description_interfaces::msg",
  "TypeSource",
  _TypeSource__cdr_serialize,
  _TypeSource__cdr_deserialize,
  _TypeSource__get_serialized_size,
  _TypeSource__get_serialized_size_with_initial_alignment,
  _TypeSource__max_serialized_size
};

static rosidl_message_type_support_t _TypeSource__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TypeSource__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace type_description_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::msg::TypeSource>()
{
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_TypeSource__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, msg, TypeSource)() {
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_TypeSource__handle;
}

#ifdef __cplusplus
}
#endif
