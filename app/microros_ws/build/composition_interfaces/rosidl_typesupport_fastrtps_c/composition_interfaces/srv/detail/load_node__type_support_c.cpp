// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/load_node__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "composition_interfaces/srv/detail/load_node__struct.h"
#include "composition_interfaces/srv/detail/load_node__functions.h"
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

#include "rcl_interfaces/msg/detail/parameter__functions.h"  // extra_arguments, parameters
#include "rosidl_runtime_c/string.h"  // node_name, node_namespace, package_name, plugin_name, remap_rules
#include "rosidl_runtime_c/string_functions.h"  // node_name, node_namespace, package_name, plugin_name, remap_rules

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_serialize_rcl_interfaces__msg__Parameter(
  const rcl_interfaces__msg__Parameter * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_deserialize_rcl_interfaces__msg__Parameter(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces__msg__Parameter * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t get_serialized_size_rcl_interfaces__msg__Parameter(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t max_serialized_size_rcl_interfaces__msg__Parameter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_serialize_key_rcl_interfaces__msg__Parameter(
  const rcl_interfaces__msg__Parameter * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t get_serialized_size_key_rcl_interfaces__msg__Parameter(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t max_serialized_size_key_rcl_interfaces__msg__Parameter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, Parameter)();


using _LoadNode_Request__ros_msg_type = composition_interfaces__srv__LoadNode_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_composition_interfaces__srv__LoadNode_Request(
  const composition_interfaces__srv__LoadNode_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: package_name
  {
    const rosidl_runtime_c__String * str = &ros_message->package_name;
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

  // Field name: plugin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->plugin_name;
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

  // Field name: node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->node_name;
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

  // Field name: node_namespace
  {
    const rosidl_runtime_c__String * str = &ros_message->node_namespace;
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

  // Field name: log_level
  {
    cdr << ros_message->log_level;
  }

  // Field name: remap_rules
  {
    size_t size = ros_message->remap_rules.size;
    auto array_ptr = ros_message->remap_rules.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: parameters
  {
    size_t size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rcl_interfaces__msg__Parameter(
        &array_ptr[i], cdr);
    }
  }

  // Field name: extra_arguments
  {
    size_t size = ros_message->extra_arguments.size;
    auto array_ptr = ros_message->extra_arguments.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rcl_interfaces__msg__Parameter(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_deserialize_composition_interfaces__srv__LoadNode_Request(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces__srv__LoadNode_Request * ros_message)
{
  // Field name: package_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->package_name.data) {
      rosidl_runtime_c__String__init(&ros_message->package_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->package_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'package_name'\n");
      return false;
    }
  }

  // Field name: plugin_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plugin_name.data) {
      rosidl_runtime_c__String__init(&ros_message->plugin_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plugin_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plugin_name'\n");
      return false;
    }
  }

  // Field name: node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_name'\n");
      return false;
    }
  }

  // Field name: node_namespace
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_namespace.data) {
      rosidl_runtime_c__String__init(&ros_message->node_namespace);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_namespace,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_namespace'\n");
      return false;
    }
  }

  // Field name: log_level
  {
    cdr >> ros_message->log_level;
  }

  // Field name: remap_rules
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->remap_rules.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->remap_rules);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->remap_rules, size)) {
      fprintf(stderr, "failed to create array for field 'remap_rules'");
      return false;
    }
    auto array_ptr = ros_message->remap_rules.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'remap_rules'\n");
        return false;
      }
    }
  }

  // Field name: parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parameters.data) {
      rcl_interfaces__msg__Parameter__Sequence__fini(&ros_message->parameters);
    }
    if (!rcl_interfaces__msg__Parameter__Sequence__init(&ros_message->parameters, size)) {
      fprintf(stderr, "failed to create array for field 'parameters'");
      return false;
    }
    auto array_ptr = ros_message->parameters.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rcl_interfaces__msg__Parameter(cdr, &array_ptr[i]);
    }
  }

  // Field name: extra_arguments
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extra_arguments.data) {
      rcl_interfaces__msg__Parameter__Sequence__fini(&ros_message->extra_arguments);
    }
    if (!rcl_interfaces__msg__Parameter__Sequence__init(&ros_message->extra_arguments, size)) {
      fprintf(stderr, "failed to create array for field 'extra_arguments'");
      return false;
    }
    auto array_ptr = ros_message->extra_arguments.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rcl_interfaces__msg__Parameter(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__LoadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Request__ros_msg_type * ros_message = static_cast<const _LoadNode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: package_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->package_name.size + 1);

  // Field name: plugin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plugin_name.size + 1);

  // Field name: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_name.size + 1);

  // Field name: node_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_namespace.size + 1);

  // Field name: log_level
  {
    size_t item_size = sizeof(ros_message->log_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remap_rules
  {
    size_t array_size = ros_message->remap_rules.size;
    auto array_ptr = ros_message->remap_rules.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: parameters
  {
    size_t array_size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__Parameter(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: extra_arguments
  {
    size_t array_size = ros_message->extra_arguments.size;
    auto array_ptr = ros_message->extra_arguments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__Parameter(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__LoadNode_Request(
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

  // Field name: package_name
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

  // Field name: plugin_name
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

  // Field name: node_name
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

  // Field name: node_namespace
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

  // Field name: log_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: remap_rules
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: parameters
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
        max_serialized_size_rcl_interfaces__msg__Parameter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: extra_arguments
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
        max_serialized_size_rcl_interfaces__msg__Parameter(
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
    using DataType = composition_interfaces__srv__LoadNode_Request;
    is_plain =
      (
      offsetof(DataType, extra_arguments) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_key_composition_interfaces__srv__LoadNode_Request(
  const composition_interfaces__srv__LoadNode_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: package_name
  {
    const rosidl_runtime_c__String * str = &ros_message->package_name;
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

  // Field name: plugin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->plugin_name;
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

  // Field name: node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->node_name;
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

  // Field name: node_namespace
  {
    const rosidl_runtime_c__String * str = &ros_message->node_namespace;
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

  // Field name: log_level
  {
    cdr << ros_message->log_level;
  }

  // Field name: remap_rules
  {
    size_t size = ros_message->remap_rules.size;
    auto array_ptr = ros_message->remap_rules.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: parameters
  {
    size_t size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rcl_interfaces__msg__Parameter(
        &array_ptr[i], cdr);
    }
  }

  // Field name: extra_arguments
  {
    size_t size = ros_message->extra_arguments.size;
    auto array_ptr = ros_message->extra_arguments.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rcl_interfaces__msg__Parameter(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Request__ros_msg_type * ros_message = static_cast<const _LoadNode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: package_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->package_name.size + 1);

  // Field name: plugin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plugin_name.size + 1);

  // Field name: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_name.size + 1);

  // Field name: node_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_namespace.size + 1);

  // Field name: log_level
  {
    size_t item_size = sizeof(ros_message->log_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remap_rules
  {
    size_t array_size = ros_message->remap_rules.size;
    auto array_ptr = ros_message->remap_rules.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: parameters
  {
    size_t array_size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rcl_interfaces__msg__Parameter(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: extra_arguments
  {
    size_t array_size = ros_message->extra_arguments.size;
    auto array_ptr = ros_message->extra_arguments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rcl_interfaces__msg__Parameter(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
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
  // Field name: package_name
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

  // Field name: plugin_name
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

  // Field name: node_name
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

  // Field name: node_namespace
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

  // Field name: log_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: remap_rules
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: parameters
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
        max_serialized_size_key_rcl_interfaces__msg__Parameter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: extra_arguments
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
        max_serialized_size_key_rcl_interfaces__msg__Parameter(
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
    using DataType = composition_interfaces__srv__LoadNode_Request;
    is_plain =
      (
      offsetof(DataType, extra_arguments) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const composition_interfaces__srv__LoadNode_Request * ros_message = static_cast<const composition_interfaces__srv__LoadNode_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_composition_interfaces__srv__LoadNode_Request(ros_message, cdr);
}

static bool _LoadNode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  composition_interfaces__srv__LoadNode_Request * ros_message = static_cast<composition_interfaces__srv__LoadNode_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_composition_interfaces__srv__LoadNode_Request(cdr, ros_message);
}

static uint32_t _LoadNode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_composition_interfaces__srv__LoadNode_Request(
      untyped_ros_message, 0));
}

static size_t _LoadNode_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_composition_interfaces__srv__LoadNode_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadNode_Request = {
  "composition_interfaces::srv",
  "LoadNode_Request",
  _LoadNode_Request__cdr_serialize,
  _LoadNode_Request__cdr_deserialize,
  _LoadNode_Request__get_serialized_size,
  _LoadNode_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadNode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadNode_Request,
  get_message_typesupport_handle_function,
  &composition_interfaces__srv__LoadNode_Request__get_type_hash,
  &composition_interfaces__srv__LoadNode_Request__get_type_description,
  &composition_interfaces__srv__LoadNode_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Request)() {
  return &_LoadNode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // error_message, full_node_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_message, full_node_name

// forward declare type support functions


using _LoadNode_Response__ros_msg_type = composition_interfaces__srv__LoadNode_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_composition_interfaces__srv__LoadNode_Response(
  const composition_interfaces__srv__LoadNode_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
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

  // Field name: full_node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->full_node_name;
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

  // Field name: unique_id
  {
    cdr << ros_message->unique_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_deserialize_composition_interfaces__srv__LoadNode_Response(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces__srv__LoadNode_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_message.data) {
      rosidl_runtime_c__String__init(&ros_message->error_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_message'\n");
      return false;
    }
  }

  // Field name: full_node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->full_node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->full_node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->full_node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'full_node_name'\n");
      return false;
    }
  }

  // Field name: unique_id
  {
    cdr >> ros_message->unique_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__LoadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Response__ros_msg_type * ros_message = static_cast<const _LoadNode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  // Field name: full_node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_node_name.size + 1);

  // Field name: unique_id
  {
    size_t item_size = sizeof(ros_message->unique_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__LoadNode_Response(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error_message
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

  // Field name: full_node_name
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

  // Field name: unique_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = composition_interfaces__srv__LoadNode_Response;
    is_plain =
      (
      offsetof(DataType, unique_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_key_composition_interfaces__srv__LoadNode_Response(
  const composition_interfaces__srv__LoadNode_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
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

  // Field name: full_node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->full_node_name;
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

  // Field name: unique_id
  {
    cdr << ros_message->unique_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Response__ros_msg_type * ros_message = static_cast<const _LoadNode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  // Field name: full_node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_node_name.size + 1);

  // Field name: unique_id
  {
    size_t item_size = sizeof(ros_message->unique_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: error_message
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

  // Field name: full_node_name
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

  // Field name: unique_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = composition_interfaces__srv__LoadNode_Response;
    is_plain =
      (
      offsetof(DataType, unique_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const composition_interfaces__srv__LoadNode_Response * ros_message = static_cast<const composition_interfaces__srv__LoadNode_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_composition_interfaces__srv__LoadNode_Response(ros_message, cdr);
}

static bool _LoadNode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  composition_interfaces__srv__LoadNode_Response * ros_message = static_cast<composition_interfaces__srv__LoadNode_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_composition_interfaces__srv__LoadNode_Response(cdr, ros_message);
}

static uint32_t _LoadNode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_composition_interfaces__srv__LoadNode_Response(
      untyped_ros_message, 0));
}

static size_t _LoadNode_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_composition_interfaces__srv__LoadNode_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadNode_Response = {
  "composition_interfaces::srv",
  "LoadNode_Response",
  _LoadNode_Response__cdr_serialize,
  _LoadNode_Response__cdr_deserialize,
  _LoadNode_Response__get_serialized_size,
  _LoadNode_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadNode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadNode_Response,
  get_message_typesupport_handle_function,
  &composition_interfaces__srv__LoadNode_Response__get_type_hash,
  &composition_interfaces__srv__LoadNode_Response__get_type_description,
  &composition_interfaces__srv__LoadNode_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Response)() {
  return &_LoadNode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/load_node__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_composition_interfaces__srv__LoadNode_Request(
  const composition_interfaces__srv__LoadNode_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_composition_interfaces__srv__LoadNode_Request(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces__srv__LoadNode_Request * ros_message);

size_t get_serialized_size_composition_interfaces__srv__LoadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_composition_interfaces__srv__LoadNode_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_composition_interfaces__srv__LoadNode_Request(
  const composition_interfaces__srv__LoadNode_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Request)();

bool cdr_serialize_composition_interfaces__srv__LoadNode_Response(
  const composition_interfaces__srv__LoadNode_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_composition_interfaces__srv__LoadNode_Response(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces__srv__LoadNode_Response * ros_message);

size_t get_serialized_size_composition_interfaces__srv__LoadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_composition_interfaces__srv__LoadNode_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_composition_interfaces__srv__LoadNode_Response(
  const composition_interfaces__srv__LoadNode_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_composition_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _LoadNode_Event__ros_msg_type = composition_interfaces__srv__LoadNode_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_composition_interfaces__srv__LoadNode_Event(
  const composition_interfaces__srv__LoadNode_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_composition_interfaces__srv__LoadNode_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_composition_interfaces__srv__LoadNode_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_deserialize_composition_interfaces__srv__LoadNode_Event(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces__srv__LoadNode_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      composition_interfaces__srv__LoadNode_Request__Sequence__fini(&ros_message->request);
    }
    if (!composition_interfaces__srv__LoadNode_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_composition_interfaces__srv__LoadNode_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      composition_interfaces__srv__LoadNode_Response__Sequence__fini(&ros_message->response);
    }
    if (!composition_interfaces__srv__LoadNode_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_composition_interfaces__srv__LoadNode_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__LoadNode_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Event__ros_msg_type * ros_message = static_cast<const _LoadNode_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_composition_interfaces__srv__LoadNode_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_composition_interfaces__srv__LoadNode_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__LoadNode_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_composition_interfaces__srv__LoadNode_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_composition_interfaces__srv__LoadNode_Response(
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
    using DataType = composition_interfaces__srv__LoadNode_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
bool cdr_serialize_key_composition_interfaces__srv__LoadNode_Event(
  const composition_interfaces__srv__LoadNode_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_composition_interfaces__srv__LoadNode_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_composition_interfaces__srv__LoadNode_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_key_composition_interfaces__srv__LoadNode_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadNode_Event__ros_msg_type * ros_message = static_cast<const _LoadNode_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_key_composition_interfaces__srv__LoadNode_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_composition_interfaces__srv__LoadNode_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_composition_interfaces__srv__LoadNode_Response(
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
    using DataType = composition_interfaces__srv__LoadNode_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LoadNode_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const composition_interfaces__srv__LoadNode_Event * ros_message = static_cast<const composition_interfaces__srv__LoadNode_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_composition_interfaces__srv__LoadNode_Event(ros_message, cdr);
}

static bool _LoadNode_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  composition_interfaces__srv__LoadNode_Event * ros_message = static_cast<composition_interfaces__srv__LoadNode_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_composition_interfaces__srv__LoadNode_Event(cdr, ros_message);
}

static uint32_t _LoadNode_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_composition_interfaces__srv__LoadNode_Event(
      untyped_ros_message, 0));
}

static size_t _LoadNode_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_composition_interfaces__srv__LoadNode_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadNode_Event = {
  "composition_interfaces::srv",
  "LoadNode_Event",
  _LoadNode_Event__cdr_serialize,
  _LoadNode_Event__cdr_deserialize,
  _LoadNode_Event__get_serialized_size,
  _LoadNode_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LoadNode_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadNode_Event,
  get_message_typesupport_handle_function,
  &composition_interfaces__srv__LoadNode_Event__get_type_hash,
  &composition_interfaces__srv__LoadNode_Event__get_type_description,
  &composition_interfaces__srv__LoadNode_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Event)() {
  return &_LoadNode_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "composition_interfaces/srv/load_node.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadNode__callbacks = {
  "composition_interfaces::srv",
  "LoadNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode_Response)(),
};

static rosidl_service_type_support_t LoadNode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LoadNode__callbacks,
  get_service_typesupport_handle_function,
  &_LoadNode_Request__type_support,
  &_LoadNode_Response__type_support,
  &_LoadNode_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    composition_interfaces,
    srv,
    LoadNode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    composition_interfaces,
    srv,
    LoadNode
  ),
  &composition_interfaces__srv__LoadNode__get_type_hash,
  &composition_interfaces__srv__LoadNode__get_type_description,
  &composition_interfaces__srv__LoadNode__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, LoadNode)() {
  return &LoadNode__handle;
}

#if defined(__cplusplus)
}
#endif
