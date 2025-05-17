// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "complex_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "complex_msgs/msg/detail/multi_string_test__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_serialize_complex_msgs__msg__MultiStringTest(
  const complex_msgs__msg__MultiStringTest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_deserialize_complex_msgs__msg__MultiStringTest(
  eprosima::fastcdr::Cdr &,
  complex_msgs__msg__MultiStringTest * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_serialize_key_complex_msgs__msg__MultiStringTest(
  const complex_msgs__msg__MultiStringTest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_key_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_key_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest)();

#ifdef __cplusplus
}
#endif

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
