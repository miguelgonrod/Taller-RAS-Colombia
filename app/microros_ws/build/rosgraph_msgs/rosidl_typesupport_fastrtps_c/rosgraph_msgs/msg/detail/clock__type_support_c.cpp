// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice
#include "rosgraph_msgs/msg/detail/clock__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosgraph_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosgraph_msgs/msg/detail/clock__struct.h"
#include "rosgraph_msgs/msg/detail/clock__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // clock

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rosgraph_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _Clock__ros_msg_type = rosgraph_msgs__msg__Clock;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
bool cdr_serialize_rosgraph_msgs__msg__Clock(
  const rosgraph_msgs__msg__Clock * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: clock
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->clock, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
bool cdr_deserialize_rosgraph_msgs__msg__Clock(
  eprosima::fastcdr::Cdr & cdr,
  rosgraph_msgs__msg__Clock * ros_message)
{
  // Field name: clock
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->clock);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
size_t get_serialized_size_rosgraph_msgs__msg__Clock(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Clock__ros_msg_type * ros_message = static_cast<const _Clock__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: clock
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->clock), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
size_t max_serialized_size_rosgraph_msgs__msg__Clock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: clock
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosgraph_msgs__msg__Clock;
    is_plain =
      (
      offsetof(DataType, clock) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
bool cdr_serialize_key_rosgraph_msgs__msg__Clock(
  const rosgraph_msgs__msg__Clock * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: clock
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->clock, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
size_t get_serialized_size_key_rosgraph_msgs__msg__Clock(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Clock__ros_msg_type * ros_message = static_cast<const _Clock__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: clock
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->clock), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosgraph_msgs
size_t max_serialized_size_key_rosgraph_msgs__msg__Clock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: clock
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosgraph_msgs__msg__Clock;
    is_plain =
      (
      offsetof(DataType, clock) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Clock__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rosgraph_msgs__msg__Clock * ros_message = static_cast<const rosgraph_msgs__msg__Clock *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rosgraph_msgs__msg__Clock(ros_message, cdr);
}

static bool _Clock__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rosgraph_msgs__msg__Clock * ros_message = static_cast<rosgraph_msgs__msg__Clock *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rosgraph_msgs__msg__Clock(cdr, ros_message);
}

static uint32_t _Clock__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosgraph_msgs__msg__Clock(
      untyped_ros_message, 0));
}

static size_t _Clock__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosgraph_msgs__msg__Clock(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Clock = {
  "rosgraph_msgs::msg",
  "Clock",
  _Clock__cdr_serialize,
  _Clock__cdr_deserialize,
  _Clock__get_serialized_size,
  _Clock__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Clock__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Clock,
  get_message_typesupport_handle_function,
  &rosgraph_msgs__msg__Clock__get_type_hash,
  &rosgraph_msgs__msg__Clock__get_type_description,
  &rosgraph_msgs__msg__Clock__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosgraph_msgs, msg, Clock)() {
  return &_Clock__type_support;
}

#if defined(__cplusplus)
}
#endif
