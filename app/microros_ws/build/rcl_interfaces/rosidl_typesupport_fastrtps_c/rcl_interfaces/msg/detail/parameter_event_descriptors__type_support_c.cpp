// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__struct.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__functions.h"
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

#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"  // changed_parameters, deleted_parameters, new_parameters

// forward declare type support functions

bool cdr_serialize_rcl_interfaces__msg__ParameterDescriptor(
  const rcl_interfaces__msg__ParameterDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rcl_interfaces__msg__ParameterDescriptor(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces__msg__ParameterDescriptor * ros_message);

size_t get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rcl_interfaces__msg__ParameterDescriptor(
  const rcl_interfaces__msg__ParameterDescriptor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, ParameterDescriptor)();


using _ParameterEventDescriptors__ros_msg_type = rcl_interfaces__msg__ParameterEventDescriptors;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_rcl_interfaces__msg__ParameterEventDescriptors(
  const rcl_interfaces__msg__ParameterEventDescriptors * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: new_parameters
  {
    size_t size = ros_message->new_parameters.size;
    auto array_ptr = ros_message->new_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: changed_parameters
  {
    size_t size = ros_message->changed_parameters.size;
    auto array_ptr = ros_message->changed_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: deleted_parameters
  {
    size_t size = ros_message->deleted_parameters.size;
    auto array_ptr = ros_message->deleted_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_deserialize_rcl_interfaces__msg__ParameterEventDescriptors(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces__msg__ParameterEventDescriptors * ros_message)
{
  // Field name: new_parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->new_parameters.data) {
      rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(&ros_message->new_parameters);
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&ros_message->new_parameters, size)) {
      fprintf(stderr, "failed to create array for field 'new_parameters'");
      return false;
    }
    auto array_ptr = ros_message->new_parameters.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rcl_interfaces__msg__ParameterDescriptor(cdr, &array_ptr[i]);
    }
  }

  // Field name: changed_parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->changed_parameters.data) {
      rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(&ros_message->changed_parameters);
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&ros_message->changed_parameters, size)) {
      fprintf(stderr, "failed to create array for field 'changed_parameters'");
      return false;
    }
    auto array_ptr = ros_message->changed_parameters.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rcl_interfaces__msg__ParameterDescriptor(cdr, &array_ptr[i]);
    }
  }

  // Field name: deleted_parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->deleted_parameters.data) {
      rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(&ros_message->deleted_parameters);
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&ros_message->deleted_parameters, size)) {
      fprintf(stderr, "failed to create array for field 'deleted_parameters'");
      return false;
    }
    auto array_ptr = ros_message->deleted_parameters.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rcl_interfaces__msg__ParameterDescriptor(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterEventDescriptors__ros_msg_type * ros_message = static_cast<const _ParameterEventDescriptors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: new_parameters
  {
    size_t array_size = ros_message->new_parameters.size;
    auto array_ptr = ros_message->new_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: changed_parameters
  {
    size_t array_size = ros_message->changed_parameters.size;
    auto array_ptr = ros_message->changed_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: deleted_parameters
  {
    size_t array_size = ros_message->deleted_parameters.size;
    auto array_ptr = ros_message->deleted_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
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

  // Field name: new_parameters
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
        max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: changed_parameters
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
        max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: deleted_parameters
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
        max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
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
    using DataType = rcl_interfaces__msg__ParameterEventDescriptors;
    is_plain =
      (
      offsetof(DataType, deleted_parameters) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_key_rcl_interfaces__msg__ParameterEventDescriptors(
  const rcl_interfaces__msg__ParameterEventDescriptors * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: new_parameters
  {
    size_t size = ros_message->new_parameters.size;
    auto array_ptr = ros_message->new_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: changed_parameters
  {
    size_t size = ros_message->changed_parameters.size;
    auto array_ptr = ros_message->changed_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  // Field name: deleted_parameters
  {
    size_t size = ros_message->deleted_parameters.size;
    auto array_ptr = ros_message->deleted_parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_key_rcl_interfaces__msg__ParameterEventDescriptors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterEventDescriptors__ros_msg_type * ros_message = static_cast<const _ParameterEventDescriptors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: new_parameters
  {
    size_t array_size = ros_message->new_parameters.size;
    auto array_ptr = ros_message->new_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: changed_parameters
  {
    size_t array_size = ros_message->changed_parameters.size;
    auto array_ptr = ros_message->changed_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: deleted_parameters
  {
    size_t array_size = ros_message->deleted_parameters.size;
    auto array_ptr = ros_message->deleted_parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_key_rcl_interfaces__msg__ParameterEventDescriptors(
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
  // Field name: new_parameters
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
        max_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: changed_parameters
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
        max_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: deleted_parameters
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
        max_serialized_size_key_rcl_interfaces__msg__ParameterDescriptor(
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
    using DataType = rcl_interfaces__msg__ParameterEventDescriptors;
    is_plain =
      (
      offsetof(DataType, deleted_parameters) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ParameterEventDescriptors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rcl_interfaces__msg__ParameterEventDescriptors * ros_message = static_cast<const rcl_interfaces__msg__ParameterEventDescriptors *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rcl_interfaces__msg__ParameterEventDescriptors(ros_message, cdr);
}

static bool _ParameterEventDescriptors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rcl_interfaces__msg__ParameterEventDescriptors * ros_message = static_cast<rcl_interfaces__msg__ParameterEventDescriptors *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rcl_interfaces__msg__ParameterEventDescriptors(cdr, ros_message);
}

static uint32_t _ParameterEventDescriptors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
      untyped_ros_message, 0));
}

static size_t _ParameterEventDescriptors__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__msg__ParameterEventDescriptors(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParameterEventDescriptors = {
  "rcl_interfaces::msg",
  "ParameterEventDescriptors",
  _ParameterEventDescriptors__cdr_serialize,
  _ParameterEventDescriptors__cdr_deserialize,
  _ParameterEventDescriptors__get_serialized_size,
  _ParameterEventDescriptors__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ParameterEventDescriptors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterEventDescriptors,
  get_message_typesupport_handle_function,
  &rcl_interfaces__msg__ParameterEventDescriptors__get_type_hash,
  &rcl_interfaces__msg__ParameterEventDescriptors__get_type_description,
  &rcl_interfaces__msg__ParameterEventDescriptors__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, ParameterEventDescriptors)() {
  return &_ParameterEventDescriptors__type_support;
}

#if defined(__cplusplus)
}
#endif
