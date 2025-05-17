// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"
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

#include "diagnostic_msgs/msg/detail/key_value__functions.h"  // values
#include "rosidl_runtime_c/string.h"  // hardware_id, message, name
#include "rosidl_runtime_c/string_functions.h"  // hardware_id, message, name

// forward declare type support functions

bool cdr_serialize_diagnostic_msgs__msg__KeyValue(
  const diagnostic_msgs__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_diagnostic_msgs__msg__KeyValue(
  eprosima::fastcdr::Cdr & cdr,
  diagnostic_msgs__msg__KeyValue * ros_message);

size_t get_serialized_size_diagnostic_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_diagnostic_msgs__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_diagnostic_msgs__msg__KeyValue(
  const diagnostic_msgs__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_diagnostic_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_diagnostic_msgs__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, KeyValue)();


using _DiagnosticStatus__ros_msg_type = diagnostic_msgs__msg__DiagnosticStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
bool cdr_serialize_diagnostic_msgs__msg__DiagnosticStatus(
  const diagnostic_msgs__msg__DiagnosticStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: level
  {
    cdr << ros_message->level;
  }

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

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: hardware_id
  {
    const rosidl_runtime_c__String * str = &ros_message->hardware_id;
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

  // Field name: values
  {
    size_t size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_diagnostic_msgs__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
bool cdr_deserialize_diagnostic_msgs__msg__DiagnosticStatus(
  eprosima::fastcdr::Cdr & cdr,
  diagnostic_msgs__msg__DiagnosticStatus * ros_message)
{
  // Field name: level
  {
    cdr >> ros_message->level;
  }

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

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: hardware_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hardware_id.data) {
      rosidl_runtime_c__String__init(&ros_message->hardware_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hardware_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hardware_id'\n");
      return false;
    }
  }

  // Field name: values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->values.data) {
      diagnostic_msgs__msg__KeyValue__Sequence__fini(&ros_message->values);
    }
    if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&ros_message->values, size)) {
      fprintf(stderr, "failed to create array for field 'values'");
      return false;
    }
    auto array_ptr = ros_message->values.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_diagnostic_msgs__msg__KeyValue(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagnosticStatus__ros_msg_type * ros_message = static_cast<const _DiagnosticStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: level
  {
    size_t item_size = sizeof(ros_message->level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: hardware_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hardware_id.size + 1);

  // Field name: values
  {
    size_t array_size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
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

  // Field name: level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

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

  // Field name: message
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

  // Field name: hardware_id
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

  // Field name: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_diagnostic_msgs__msg__KeyValue(
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
    using DataType = diagnostic_msgs__msg__DiagnosticStatus;
    is_plain =
      (
      offsetof(DataType, values) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
bool cdr_serialize_key_diagnostic_msgs__msg__DiagnosticStatus(
  const diagnostic_msgs__msg__DiagnosticStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: level
  {
    cdr << ros_message->level;
  }

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

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: hardware_id
  {
    const rosidl_runtime_c__String * str = &ros_message->hardware_id;
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

  // Field name: values
  {
    size_t size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_diagnostic_msgs__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
size_t get_serialized_size_key_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagnosticStatus__ros_msg_type * ros_message = static_cast<const _DiagnosticStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: level
  {
    size_t item_size = sizeof(ros_message->level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: hardware_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hardware_id.size + 1);

  // Field name: values
  {
    size_t array_size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_diagnostic_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_diagnostic_msgs
size_t max_serialized_size_key_diagnostic_msgs__msg__DiagnosticStatus(
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
  // Field name: level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

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

  // Field name: message
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

  // Field name: hardware_id
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

  // Field name: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_diagnostic_msgs__msg__KeyValue(
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
    using DataType = diagnostic_msgs__msg__DiagnosticStatus;
    is_plain =
      (
      offsetof(DataType, values) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DiagnosticStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const diagnostic_msgs__msg__DiagnosticStatus * ros_message = static_cast<const diagnostic_msgs__msg__DiagnosticStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_diagnostic_msgs__msg__DiagnosticStatus(ros_message, cdr);
}

static bool _DiagnosticStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  diagnostic_msgs__msg__DiagnosticStatus * ros_message = static_cast<diagnostic_msgs__msg__DiagnosticStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_diagnostic_msgs__msg__DiagnosticStatus(cdr, ros_message);
}

static uint32_t _DiagnosticStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
      untyped_ros_message, 0));
}

static size_t _DiagnosticStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiagnosticStatus = {
  "diagnostic_msgs::msg",
  "DiagnosticStatus",
  _DiagnosticStatus__cdr_serialize,
  _DiagnosticStatus__cdr_deserialize,
  _DiagnosticStatus__get_serialized_size,
  _DiagnosticStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DiagnosticStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiagnosticStatus,
  get_message_typesupport_handle_function,
  &diagnostic_msgs__msg__DiagnosticStatus__get_type_hash,
  &diagnostic_msgs__msg__DiagnosticStatus__get_type_description,
  &diagnostic_msgs__msg__DiagnosticStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus)() {
  return &_DiagnosticStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
