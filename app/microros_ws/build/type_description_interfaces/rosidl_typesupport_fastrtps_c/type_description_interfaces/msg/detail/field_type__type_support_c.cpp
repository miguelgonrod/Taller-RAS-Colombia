// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from type_description_interfaces:msg/FieldType.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/field_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/field_type__struct.h"
#include "type_description_interfaces/msg/detail/field_type__functions.h"
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

#include "rosidl_runtime_c/string.h"  // nested_type_name
#include "rosidl_runtime_c/string_functions.h"  // nested_type_name

// forward declare type support functions


using _FieldType__ros_msg_type = type_description_interfaces__msg__FieldType;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__msg__FieldType(
  const type_description_interfaces__msg__FieldType * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type_id
  {
    cdr << ros_message->type_id;
  }

  // Field name: capacity
  {
    cdr << ros_message->capacity;
  }

  // Field name: string_capacity
  {
    cdr << ros_message->string_capacity;
  }

  // Field name: nested_type_name
  {
    const rosidl_runtime_c__String * str = &ros_message->nested_type_name;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_deserialize_type_description_interfaces__msg__FieldType(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__FieldType * ros_message)
{
  // Field name: type_id
  {
    cdr >> ros_message->type_id;
  }

  // Field name: capacity
  {
    cdr >> ros_message->capacity;
  }

  // Field name: string_capacity
  {
    cdr >> ros_message->string_capacity;
  }

  // Field name: nested_type_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nested_type_name.data) {
      rosidl_runtime_c__String__init(&ros_message->nested_type_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nested_type_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nested_type_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__FieldType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldType__ros_msg_type * ros_message = static_cast<const _FieldType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type_id
  {
    size_t item_size = sizeof(ros_message->type_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: capacity
  {
    size_t item_size = sizeof(ros_message->capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_capacity
  {
    size_t item_size = sizeof(ros_message->string_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nested_type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nested_type_name.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__FieldType(
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

  // Field name: type_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: nested_type_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        255 +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces__msg__FieldType;
    is_plain =
      (
      offsetof(DataType, nested_type_name) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__msg__FieldType(
  const type_description_interfaces__msg__FieldType * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type_id
  {
    cdr << ros_message->type_id;
  }

  // Field name: capacity
  {
    cdr << ros_message->capacity;
  }

  // Field name: string_capacity
  {
    cdr << ros_message->string_capacity;
  }

  // Field name: nested_type_name
  {
    const rosidl_runtime_c__String * str = &ros_message->nested_type_name;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_key_type_description_interfaces__msg__FieldType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldType__ros_msg_type * ros_message = static_cast<const _FieldType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type_id
  {
    size_t item_size = sizeof(ros_message->type_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: capacity
  {
    size_t item_size = sizeof(ros_message->capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_capacity
  {
    size_t item_size = sizeof(ros_message->string_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nested_type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nested_type_name.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__msg__FieldType(
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
  // Field name: type_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: nested_type_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        255 +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces__msg__FieldType;
    is_plain =
      (
      offsetof(DataType, nested_type_name) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FieldType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__msg__FieldType * ros_message = static_cast<const type_description_interfaces__msg__FieldType *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__msg__FieldType(ros_message, cdr);
}

static bool _FieldType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__msg__FieldType * ros_message = static_cast<type_description_interfaces__msg__FieldType *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__msg__FieldType(cdr, ros_message);
}

static uint32_t _FieldType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__msg__FieldType(
      untyped_ros_message, 0));
}

static size_t _FieldType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__msg__FieldType(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FieldType = {
  "type_description_interfaces::msg",
  "FieldType",
  _FieldType__cdr_serialize,
  _FieldType__cdr_deserialize,
  _FieldType__get_serialized_size,
  _FieldType__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FieldType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldType,
  get_message_typesupport_handle_function,
  &type_description_interfaces__msg__FieldType__get_type_hash,
  &type_description_interfaces__msg__FieldType__get_type_description,
  &type_description_interfaces__msg__FieldType__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, FieldType)() {
  return &_FieldType__type_support;
}

#if defined(__cplusplus)
}
#endif
