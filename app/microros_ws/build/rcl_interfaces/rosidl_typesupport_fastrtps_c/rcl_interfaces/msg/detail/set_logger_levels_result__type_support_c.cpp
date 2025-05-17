// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/SetLoggerLevelsResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/set_logger_levels_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/set_logger_levels_result__struct.h"
#include "rcl_interfaces/msg/detail/set_logger_levels_result__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reason
#include "rosidl_runtime_c/string_functions.h"  // reason

// forward declare type support functions


using _SetLoggerLevelsResult__ros_msg_type = rcl_interfaces__msg__SetLoggerLevelsResult;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_rcl_interfaces__msg__SetLoggerLevelsResult(
  const rcl_interfaces__msg__SetLoggerLevelsResult * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: successful
  {
    cdr << (ros_message->successful ? true : false);
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_deserialize_rcl_interfaces__msg__SetLoggerLevelsResult(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces__msg__SetLoggerLevelsResult * ros_message)
{
  // Field name: successful
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->successful = tmp ? true : false;
  }

  // Field name: reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reason.data) {
      rosidl_runtime_c__String__init(&ros_message->reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reason'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLoggerLevelsResult__ros_msg_type * ros_message = static_cast<const _SetLoggerLevelsResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: successful
  {
    size_t item_size = sizeof(ros_message->successful);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
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

  // Field name: successful
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reason
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__msg__SetLoggerLevelsResult;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_key_rcl_interfaces__msg__SetLoggerLevelsResult(
  const rcl_interfaces__msg__SetLoggerLevelsResult * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: successful
  {
    cdr << (ros_message->successful ? true : false);
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_key_rcl_interfaces__msg__SetLoggerLevelsResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLoggerLevelsResult__ros_msg_type * ros_message = static_cast<const _SetLoggerLevelsResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: successful
  {
    size_t item_size = sizeof(ros_message->successful);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_key_rcl_interfaces__msg__SetLoggerLevelsResult(
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
  // Field name: successful
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reason
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__msg__SetLoggerLevelsResult;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetLoggerLevelsResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rcl_interfaces__msg__SetLoggerLevelsResult * ros_message = static_cast<const rcl_interfaces__msg__SetLoggerLevelsResult *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rcl_interfaces__msg__SetLoggerLevelsResult(ros_message, cdr);
}

static bool _SetLoggerLevelsResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rcl_interfaces__msg__SetLoggerLevelsResult * ros_message = static_cast<rcl_interfaces__msg__SetLoggerLevelsResult *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rcl_interfaces__msg__SetLoggerLevelsResult(cdr, ros_message);
}

static uint32_t _SetLoggerLevelsResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
      untyped_ros_message, 0));
}

static size_t _SetLoggerLevelsResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLoggerLevelsResult = {
  "rcl_interfaces::msg",
  "SetLoggerLevelsResult",
  _SetLoggerLevelsResult__cdr_serialize,
  _SetLoggerLevelsResult__cdr_deserialize,
  _SetLoggerLevelsResult__get_serialized_size,
  _SetLoggerLevelsResult__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetLoggerLevelsResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLoggerLevelsResult,
  get_message_typesupport_handle_function,
  &rcl_interfaces__msg__SetLoggerLevelsResult__get_type_hash,
  &rcl_interfaces__msg__SetLoggerLevelsResult__get_type_description,
  &rcl_interfaces__msg__SetLoggerLevelsResult__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, SetLoggerLevelsResult)() {
  return &_SetLoggerLevelsResult__type_support;
}

#if defined(__cplusplus)
}
#endif
