// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "actionlib_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "actionlib_msgs/msg/detail/goal_status__struct.h"
#include "actionlib_msgs/msg/detail/goal_status__functions.h"
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

#include "actionlib_msgs/msg/detail/goal_id__functions.h"  // goal_id
#include "rosidl_runtime_c/string.h"  // text
#include "rosidl_runtime_c/string_functions.h"  // text

// forward declare type support functions

bool cdr_serialize_actionlib_msgs__msg__GoalID(
  const actionlib_msgs__msg__GoalID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_actionlib_msgs__msg__GoalID(
  eprosima::fastcdr::Cdr & cdr,
  actionlib_msgs__msg__GoalID * ros_message);

size_t get_serialized_size_actionlib_msgs__msg__GoalID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_actionlib_msgs__msg__GoalID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_actionlib_msgs__msg__GoalID(
  const actionlib_msgs__msg__GoalID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_actionlib_msgs__msg__GoalID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_actionlib_msgs__msg__GoalID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actionlib_msgs, msg, GoalID)();


using _GoalStatus__ros_msg_type = actionlib_msgs__msg__GoalStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_serialize_actionlib_msgs__msg__GoalStatus(
  const actionlib_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_actionlib_msgs__msg__GoalID(
      &ros_message->goal_id, cdr);
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_deserialize_actionlib_msgs__msg__GoalStatus(
  eprosima::fastcdr::Cdr & cdr,
  actionlib_msgs__msg__GoalStatus * ros_message)
{
  // Field name: goal_id
  {
    cdr_deserialize_actionlib_msgs__msg__GoalID(cdr, &ros_message->goal_id);
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_actionlib_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalStatus__ros_msg_type * ros_message = static_cast<const _GoalStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_actionlib_msgs__msg__GoalID(
    &(ros_message->goal_id), current_alignment);

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_actionlib_msgs__msg__GoalStatus(
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

  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_actionlib_msgs__msg__GoalID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: text
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
    using DataType = actionlib_msgs__msg__GoalStatus;
    is_plain =
      (
      offsetof(DataType, text) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
bool cdr_serialize_key_actionlib_msgs__msg__GoalStatus(
  const actionlib_msgs__msg__GoalStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: goal_id
  {
    cdr_serialize_key_actionlib_msgs__msg__GoalID(
      &ros_message->goal_id, cdr);
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_key_actionlib_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalStatus__ros_msg_type * ros_message = static_cast<const _GoalStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: goal_id
  current_alignment += get_serialized_size_key_actionlib_msgs__msg__GoalID(
    &(ros_message->goal_id), current_alignment);

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_key_actionlib_msgs__msg__GoalStatus(
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
  // Field name: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_actionlib_msgs__msg__GoalID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: text
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
    using DataType = actionlib_msgs__msg__GoalStatus;
    is_plain =
      (
      offsetof(DataType, text) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GoalStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const actionlib_msgs__msg__GoalStatus * ros_message = static_cast<const actionlib_msgs__msg__GoalStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_actionlib_msgs__msg__GoalStatus(ros_message, cdr);
}

static bool _GoalStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  actionlib_msgs__msg__GoalStatus * ros_message = static_cast<actionlib_msgs__msg__GoalStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_actionlib_msgs__msg__GoalStatus(cdr, ros_message);
}

static uint32_t _GoalStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_actionlib_msgs__msg__GoalStatus(
      untyped_ros_message, 0));
}

static size_t _GoalStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_actionlib_msgs__msg__GoalStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GoalStatus = {
  "actionlib_msgs::msg",
  "GoalStatus",
  _GoalStatus__cdr_serialize,
  _GoalStatus__cdr_deserialize,
  _GoalStatus__get_serialized_size,
  _GoalStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GoalStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalStatus,
  get_message_typesupport_handle_function,
  &actionlib_msgs__msg__GoalStatus__get_type_hash,
  &actionlib_msgs__msg__GoalStatus__get_type_description,
  &actionlib_msgs__msg__GoalStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, actionlib_msgs, msg, GoalStatus)() {
  return &_GoalStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
