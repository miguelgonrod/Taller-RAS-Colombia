// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/builtins__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/builtins__struct.h"
#include "test_msgs/msg/detail/builtins__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // duration_value
#include "builtin_interfaces/msg/detail/time__functions.h"  // time_value

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_deserialize_builtin_interfaces__msg__Duration(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Duration * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _Builtins__ros_msg_type = test_msgs__msg__Builtins;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__msg__Builtins(
  const test_msgs__msg__Builtins * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: duration_value
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->duration_value, cdr);
  }

  // Field name: time_value
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->time_value, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__msg__Builtins(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Builtins * ros_message)
{
  // Field name: duration_value
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->duration_value);
  }

  // Field name: time_value
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->time_value);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Builtins__ros_msg_type * ros_message = static_cast<const _Builtins__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: duration_value
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->duration_value), current_alignment);

  // Field name: time_value
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->time_value), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Builtins(
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

  // Field name: duration_value
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_value
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
    using DataType = test_msgs__msg__Builtins;
    is_plain =
      (
      offsetof(DataType, time_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__msg__Builtins(
  const test_msgs__msg__Builtins * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: duration_value
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->duration_value, cdr);
  }

  // Field name: time_value
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->time_value, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Builtins__ros_msg_type * ros_message = static_cast<const _Builtins__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: duration_value
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->duration_value), current_alignment);

  // Field name: time_value
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->time_value), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__msg__Builtins(
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
  // Field name: duration_value
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_value
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
    using DataType = test_msgs__msg__Builtins;
    is_plain =
      (
      offsetof(DataType, time_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Builtins__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__msg__Builtins * ros_message = static_cast<const test_msgs__msg__Builtins *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__msg__Builtins(ros_message, cdr);
}

static bool _Builtins__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__msg__Builtins * ros_message = static_cast<test_msgs__msg__Builtins *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__msg__Builtins(cdr, ros_message);
}

static uint32_t _Builtins__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__Builtins(
      untyped_ros_message, 0));
}

static size_t _Builtins__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__msg__Builtins(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Builtins = {
  "test_msgs::msg",
  "Builtins",
  _Builtins__cdr_serialize,
  _Builtins__cdr_deserialize,
  _Builtins__get_serialized_size,
  _Builtins__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Builtins__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Builtins,
  get_message_typesupport_handle_function,
  &test_msgs__msg__Builtins__get_type_hash,
  &test_msgs__msg__Builtins__get_type_description,
  &test_msgs__msg__Builtins__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Builtins)() {
  return &_Builtins__type_support;
}

#if defined(__cplusplus)
}
#endif
