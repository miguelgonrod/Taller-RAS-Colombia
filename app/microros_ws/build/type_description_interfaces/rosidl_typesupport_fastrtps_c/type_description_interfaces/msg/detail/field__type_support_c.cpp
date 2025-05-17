// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from type_description_interfaces:msg/Field.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/field__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/field__struct.h"
#include "type_description_interfaces/msg/detail/field__functions.h"
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

#include "rosidl_runtime_c/string.h"  // default_value, name
#include "rosidl_runtime_c/string_functions.h"  // default_value, name
#include "type_description_interfaces/msg/detail/field_type__functions.h"  // type

// forward declare type support functions

bool cdr_serialize_type_description_interfaces__msg__FieldType(
  const type_description_interfaces__msg__FieldType * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__msg__FieldType(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__FieldType * ros_message);

size_t get_serialized_size_type_description_interfaces__msg__FieldType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__FieldType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__msg__FieldType(
  const type_description_interfaces__msg__FieldType * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__msg__FieldType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__msg__FieldType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, FieldType)();


using _Field__ros_msg_type = type_description_interfaces__msg__Field;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__msg__Field(
  const type_description_interfaces__msg__Field * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: type
  {
    cdr_serialize_type_description_interfaces__msg__FieldType(
      &ros_message->type, cdr);
  }

  // Field name: default_value
  {
    const rosidl_runtime_c__String * str = &ros_message->default_value;
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
bool cdr_deserialize_type_description_interfaces__msg__Field(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__Field * ros_message)
{
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: type
  {
    cdr_deserialize_type_description_interfaces__msg__FieldType(cdr, &ros_message->type);
  }

  // Field name: default_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->default_value.data) {
      rosidl_runtime_c__String__init(&ros_message->default_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->default_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'default_value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__Field(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Field__ros_msg_type * ros_message = static_cast<const _Field__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: type
  current_alignment += get_serialized_size_type_description_interfaces__msg__FieldType(
    &(ros_message->type), current_alignment);

  // Field name: default_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->default_value.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__Field(
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

  // Field name: name
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

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_type_description_interfaces__msg__FieldType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: default_value
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
    using DataType = type_description_interfaces__msg__Field;
    is_plain =
      (
      offsetof(DataType, default_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__msg__Field(
  const type_description_interfaces__msg__Field * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: type
  {
    cdr_serialize_key_type_description_interfaces__msg__FieldType(
      &ros_message->type, cdr);
  }

  // Field name: default_value
  {
    const rosidl_runtime_c__String * str = &ros_message->default_value;
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
size_t get_serialized_size_key_type_description_interfaces__msg__Field(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Field__ros_msg_type * ros_message = static_cast<const _Field__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: type
  current_alignment += get_serialized_size_key_type_description_interfaces__msg__FieldType(
    &(ros_message->type), current_alignment);

  // Field name: default_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->default_value.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__msg__Field(
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
  // Field name: name
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

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_type_description_interfaces__msg__FieldType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: default_value
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
    using DataType = type_description_interfaces__msg__Field;
    is_plain =
      (
      offsetof(DataType, default_value) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Field__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__msg__Field * ros_message = static_cast<const type_description_interfaces__msg__Field *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__msg__Field(ros_message, cdr);
}

static bool _Field__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__msg__Field * ros_message = static_cast<type_description_interfaces__msg__Field *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__msg__Field(cdr, ros_message);
}

static uint32_t _Field__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__msg__Field(
      untyped_ros_message, 0));
}

static size_t _Field__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__msg__Field(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Field = {
  "type_description_interfaces::msg",
  "Field",
  _Field__cdr_serialize,
  _Field__cdr_deserialize,
  _Field__get_serialized_size,
  _Field__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Field__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Field,
  get_message_typesupport_handle_function,
  &type_description_interfaces__msg__Field__get_type_hash,
  &type_description_interfaces__msg__Field__get_type_description,
  &type_description_interfaces__msg__Field__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, Field)() {
  return &_Field__type_support;
}

#if defined(__cplusplus)
}
#endif
