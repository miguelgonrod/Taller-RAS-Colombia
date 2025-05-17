// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:msg/Field.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/field__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "type_description_interfaces/msg/detail/field__struct.hpp"

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
bool cdr_serialize(
  const type_description_interfaces::msg::FieldType &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::FieldType &);

size_t get_serialized_size(
  const type_description_interfaces::msg::FieldType &,
  size_t current_alignment);

size_t
max_serialized_size_FieldType(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace type_description_interfaces


namespace type_description_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::msg::Field & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: name
  rv = ucdr_serialize_string(cdr, ros_message.name.c_str());
  // Member: type
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.type,
    cdr);
  // Member: default_value
  rv = ucdr_serialize_string(cdr, ros_message.default_value.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  type_description_interfaces::msg::Field & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: name
  ros_message.name.resize(ros_message.name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.name[0], ros_message.name.capacity());
  if (rv) {
    ros_message.name.resize(std::strlen(&ros_message.name[0]));
  }
  // Member: type
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.type);
  // Member: default_value
  ros_message.default_value.resize(ros_message.default_value.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.default_value[0], ros_message.default_value.capacity());
  if (rv) {
    ros_message.default_value.resize(std::strlen(&ros_message.default_value[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::Field & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.name.size() + 1;
  // Member: type
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.type,
    current_alignment);
  // Member: default_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.default_value.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_Field(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: name
  *full_bounded = false;
  // Member: type
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_FieldType(
    full_bounded,
    current_alignment);
  // Member: default_value
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _Field__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::Field *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Field__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::msg::Field *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Field__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::Field *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Field__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::Field *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Field__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Field(&full_bounded, 0);
}

static message_type_support_callbacks_t _Field__callbacks = {
  "type_description_interfaces::msg",
  "Field",
  _Field__cdr_serialize,
  _Field__cdr_deserialize,
  _Field__get_serialized_size,
  _Field__get_serialized_size_with_initial_alignment,
  _Field__max_serialized_size
};

static rosidl_message_type_support_t _Field__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Field__callbacks,
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
get_message_type_support_handle<type_description_interfaces::msg::Field>()
{
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_Field__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, msg, Field)() {
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_Field__handle;
}

#ifdef __cplusplus
}
#endif
