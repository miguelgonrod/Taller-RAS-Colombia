// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/int32_multi_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "std_msgs/msg/detail/int32_multi_array__struct.h"
#include "std_msgs/msg/detail/int32_multi_array__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data
#include "std_msgs/msg/detail/multi_array_layout__functions.h"  // layout

// forward declare type support functions

bool cdr_serialize_std_msgs__msg__MultiArrayLayout(
  const std_msgs__msg__MultiArrayLayout * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_std_msgs__msg__MultiArrayLayout(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__MultiArrayLayout * ros_message);

size_t get_serialized_size_std_msgs__msg__MultiArrayLayout(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_std_msgs__msg__MultiArrayLayout(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_std_msgs__msg__MultiArrayLayout(
  const std_msgs__msg__MultiArrayLayout * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_std_msgs__msg__MultiArrayLayout(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_std_msgs__msg__MultiArrayLayout(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, MultiArrayLayout)();


using _Int32MultiArray__ros_msg_type = std_msgs__msg__Int32MultiArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
bool cdr_serialize_std_msgs__msg__Int32MultiArray(
  const std_msgs__msg__Int32MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: layout
  {
    cdr_serialize_std_msgs__msg__MultiArrayLayout(
      &ros_message->layout, cdr);
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
bool cdr_deserialize_std_msgs__msg__Int32MultiArray(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Int32MultiArray * ros_message)
{
  // Field name: layout
  {
    cdr_deserialize_std_msgs__msg__MultiArrayLayout(cdr, &ros_message->layout);
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__Int32MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Int32MultiArray__ros_msg_type * ros_message = static_cast<const _Int32MultiArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: layout
  current_alignment += get_serialized_size_std_msgs__msg__MultiArrayLayout(
    &(ros_message->layout), current_alignment);

  // Field name: data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__Int32MultiArray(
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

  // Field name: layout
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__MultiArrayLayout(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = std_msgs__msg__Int32MultiArray;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
bool cdr_serialize_key_std_msgs__msg__Int32MultiArray(
  const std_msgs__msg__Int32MultiArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: layout
  {
    cdr_serialize_key_std_msgs__msg__MultiArrayLayout(
      &ros_message->layout, cdr);
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
size_t get_serialized_size_key_std_msgs__msg__Int32MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Int32MultiArray__ros_msg_type * ros_message = static_cast<const _Int32MultiArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: layout
  current_alignment += get_serialized_size_key_std_msgs__msg__MultiArrayLayout(
    &(ros_message->layout), current_alignment);

  // Field name: data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_std_msgs
size_t max_serialized_size_key_std_msgs__msg__Int32MultiArray(
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
  // Field name: layout
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__MultiArrayLayout(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = std_msgs__msg__Int32MultiArray;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Int32MultiArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const std_msgs__msg__Int32MultiArray * ros_message = static_cast<const std_msgs__msg__Int32MultiArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_std_msgs__msg__Int32MultiArray(ros_message, cdr);
}

static bool _Int32MultiArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  std_msgs__msg__Int32MultiArray * ros_message = static_cast<std_msgs__msg__Int32MultiArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_std_msgs__msg__Int32MultiArray(cdr, ros_message);
}

static uint32_t _Int32MultiArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_std_msgs__msg__Int32MultiArray(
      untyped_ros_message, 0));
}

static size_t _Int32MultiArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_std_msgs__msg__Int32MultiArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Int32MultiArray = {
  "std_msgs::msg",
  "Int32MultiArray",
  _Int32MultiArray__cdr_serialize,
  _Int32MultiArray__cdr_deserialize,
  _Int32MultiArray__get_serialized_size,
  _Int32MultiArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Int32MultiArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Int32MultiArray,
  get_message_typesupport_handle_function,
  &std_msgs__msg__Int32MultiArray__get_type_hash,
  &std_msgs__msg__Int32MultiArray__get_type_description,
  &std_msgs__msg__Int32MultiArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32MultiArray)() {
  return &_Int32MultiArray__type_support;
}

#if defined(__cplusplus)
}
#endif
