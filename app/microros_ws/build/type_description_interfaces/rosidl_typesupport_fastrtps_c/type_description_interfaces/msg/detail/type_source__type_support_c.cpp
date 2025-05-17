// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from type_description_interfaces:msg/TypeSource.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/type_source__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/type_source__struct.h"
#include "type_description_interfaces/msg/detail/type_source__functions.h"
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

#include "rosidl_runtime_c/string.h"  // encoding, raw_file_contents, type_name
#include "rosidl_runtime_c/string_functions.h"  // encoding, raw_file_contents, type_name

// forward declare type support functions


using _TypeSource__ros_msg_type = type_description_interfaces__msg__TypeSource;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__msg__TypeSource(
  const type_description_interfaces__msg__TypeSource * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type_name
  {
    const rosidl_runtime_c__String * str = &ros_message->type_name;
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

  // Field name: encoding
  {
    const rosidl_runtime_c__String * str = &ros_message->encoding;
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

  // Field name: raw_file_contents
  {
    const rosidl_runtime_c__String * str = &ros_message->raw_file_contents;
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
bool cdr_deserialize_type_description_interfaces__msg__TypeSource(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__TypeSource * ros_message)
{
  // Field name: type_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_name.data) {
      rosidl_runtime_c__String__init(&ros_message->type_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_name'\n");
      return false;
    }
  }

  // Field name: encoding
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->encoding.data) {
      rosidl_runtime_c__String__init(&ros_message->encoding);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->encoding,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'encoding'\n");
      return false;
    }
  }

  // Field name: raw_file_contents
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->raw_file_contents.data) {
      rosidl_runtime_c__String__init(&ros_message->raw_file_contents);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->raw_file_contents,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'raw_file_contents'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__TypeSource(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TypeSource__ros_msg_type * ros_message = static_cast<const _TypeSource__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_name.size + 1);

  // Field name: encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->encoding.size + 1);

  // Field name: raw_file_contents
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw_file_contents.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__TypeSource(
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

  // Field name: type_name
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

  // Field name: encoding
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

  // Field name: raw_file_contents
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
    using DataType = type_description_interfaces__msg__TypeSource;
    is_plain =
      (
      offsetof(DataType, raw_file_contents) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__msg__TypeSource(
  const type_description_interfaces__msg__TypeSource * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type_name
  {
    const rosidl_runtime_c__String * str = &ros_message->type_name;
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

  // Field name: encoding
  {
    const rosidl_runtime_c__String * str = &ros_message->encoding;
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

  // Field name: raw_file_contents
  {
    const rosidl_runtime_c__String * str = &ros_message->raw_file_contents;
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
size_t get_serialized_size_key_type_description_interfaces__msg__TypeSource(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TypeSource__ros_msg_type * ros_message = static_cast<const _TypeSource__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_name.size + 1);

  // Field name: encoding
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->encoding.size + 1);

  // Field name: raw_file_contents
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw_file_contents.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__msg__TypeSource(
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
  // Field name: type_name
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

  // Field name: encoding
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

  // Field name: raw_file_contents
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
    using DataType = type_description_interfaces__msg__TypeSource;
    is_plain =
      (
      offsetof(DataType, raw_file_contents) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TypeSource__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__msg__TypeSource * ros_message = static_cast<const type_description_interfaces__msg__TypeSource *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__msg__TypeSource(ros_message, cdr);
}

static bool _TypeSource__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__msg__TypeSource * ros_message = static_cast<type_description_interfaces__msg__TypeSource *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__msg__TypeSource(cdr, ros_message);
}

static uint32_t _TypeSource__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__msg__TypeSource(
      untyped_ros_message, 0));
}

static size_t _TypeSource__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__msg__TypeSource(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TypeSource = {
  "type_description_interfaces::msg",
  "TypeSource",
  _TypeSource__cdr_serialize,
  _TypeSource__cdr_deserialize,
  _TypeSource__get_serialized_size,
  _TypeSource__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TypeSource__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TypeSource,
  get_message_typesupport_handle_function,
  &type_description_interfaces__msg__TypeSource__get_type_hash,
  &type_description_interfaces__msg__TypeSource__get_type_description,
  &type_description_interfaces__msg__TypeSource__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, TypeSource)() {
  return &_TypeSource__type_support;
}

#if defined(__cplusplus)
}
#endif
