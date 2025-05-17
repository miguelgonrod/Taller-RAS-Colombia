// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from service_msgs:msg/ServiceEventInfo.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__MSG__SERVICE_EVENT_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define SERVICE_MSGS__MSG__SERVICE_EVENT_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

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
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  service_msgs::msg::ServiceEventInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
get_serialized_size(
  const service_msgs::msg::ServiceEventInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
max_serialized_size_ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace service_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_service_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, service_msgs, msg, ServiceEventInfo)();

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_MSGS__MSG__SERVICE_EVENT_INFO__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
