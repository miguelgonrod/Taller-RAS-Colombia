// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from type_description_interfaces:msg/TypeSource.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__MSG__TYPE_SOURCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TYPE_DESCRIPTION_INTERFACES__MSG__TYPE_SOURCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "type_description_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "type_description_interfaces/msg/detail/type_source__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

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
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  type_description_interfaces::msg::TypeSource & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::TypeSource & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_TypeSource(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace type_description_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, msg, TypeSource)();

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__MSG__TYPE_SOURCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
