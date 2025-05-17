// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from type_description_interfaces:srv/GetTypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/srv/detail/get_type_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "type_description_interfaces/srv/detail/get_type_description__struct.h"
#include "type_description_interfaces/srv/detail/get_type_description__functions.h"
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

#include "rosidl_runtime_c/string.h"  // type_hash, type_name
#include "rosidl_runtime_c/string_functions.h"  // type_hash, type_name

// forward declare type support functions


using _GetTypeDescription_Request__ros_msg_type = type_description_interfaces__srv__GetTypeDescription_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Request(
  const type_description_interfaces__srv__GetTypeDescription_Request * ros_message,
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

  // Field name: type_hash
  {
    const rosidl_runtime_c__String * str = &ros_message->type_hash;
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

  // Field name: include_type_sources
  {
    cdr << (ros_message->include_type_sources ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Request(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__srv__GetTypeDescription_Request * ros_message)
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

  // Field name: type_hash
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_hash.data) {
      rosidl_runtime_c__String__init(&ros_message->type_hash);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_hash,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_hash'\n");
      return false;
    }
  }

  // Field name: include_type_sources
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->include_type_sources = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Request__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: type_hash
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_hash.size + 1);

  // Field name: include_type_sources
  {
    size_t item_size = sizeof(ros_message->include_type_sources);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
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

  // Field name: type_hash
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

  // Field name: include_type_sources
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces__srv__GetTypeDescription_Request;
    is_plain =
      (
      offsetof(DataType, include_type_sources) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Request(
  const type_description_interfaces__srv__GetTypeDescription_Request * ros_message,
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

  // Field name: type_hash
  {
    const rosidl_runtime_c__String * str = &ros_message->type_hash;
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

  // Field name: include_type_sources
  {
    cdr << (ros_message->include_type_sources ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Request__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: type_hash
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_hash.size + 1);

  // Field name: include_type_sources
  {
    size_t item_size = sizeof(ros_message->include_type_sources);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
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

  // Field name: type_hash
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

  // Field name: include_type_sources
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces__srv__GetTypeDescription_Request;
    is_plain =
      (
      offsetof(DataType, include_type_sources) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetTypeDescription_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__srv__GetTypeDescription_Request * ros_message = static_cast<const type_description_interfaces__srv__GetTypeDescription_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Request(ros_message, cdr);
}

static bool _GetTypeDescription_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__srv__GetTypeDescription_Request * ros_message = static_cast<type_description_interfaces__srv__GetTypeDescription_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Request(cdr, ros_message);
}

static uint32_t _GetTypeDescription_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
      untyped_ros_message, 0));
}

static size_t _GetTypeDescription_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetTypeDescription_Request = {
  "type_description_interfaces::srv",
  "GetTypeDescription_Request",
  _GetTypeDescription_Request__cdr_serialize,
  _GetTypeDescription_Request__cdr_deserialize,
  _GetTypeDescription_Request__get_serialized_size,
  _GetTypeDescription_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetTypeDescription_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTypeDescription_Request,
  get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Request)() {
  return &_GetTypeDescription_Request__type_support;
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
// #include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // failure_reason
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // failure_reason
#include "type_description_interfaces/msg/detail/key_value__functions.h"  // extra_information
#include "type_description_interfaces/msg/detail/type_description__functions.h"  // type_description
#include "type_description_interfaces/msg/detail/type_source__functions.h"  // type_sources

// forward declare type support functions

bool cdr_serialize_type_description_interfaces__msg__KeyValue(
  const type_description_interfaces__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__msg__KeyValue(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__KeyValue * ros_message);

size_t get_serialized_size_type_description_interfaces__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__msg__KeyValue(
  const type_description_interfaces__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, KeyValue)();

bool cdr_serialize_type_description_interfaces__msg__TypeDescription(
  const type_description_interfaces__msg__TypeDescription * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__msg__TypeDescription(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__TypeDescription * ros_message);

size_t get_serialized_size_type_description_interfaces__msg__TypeDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__TypeDescription(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__msg__TypeDescription(
  const type_description_interfaces__msg__TypeDescription * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__msg__TypeDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__msg__TypeDescription(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, TypeDescription)();

bool cdr_serialize_type_description_interfaces__msg__TypeSource(
  const type_description_interfaces__msg__TypeSource * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__msg__TypeSource(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__msg__TypeSource * ros_message);

size_t get_serialized_size_type_description_interfaces__msg__TypeSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__TypeSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__msg__TypeSource(
  const type_description_interfaces__msg__TypeSource * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__msg__TypeSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__msg__TypeSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, msg, TypeSource)();


using _GetTypeDescription_Response__ros_msg_type = type_description_interfaces__srv__GetTypeDescription_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Response(
  const type_description_interfaces__srv__GetTypeDescription_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: successful
  {
    cdr << (ros_message->successful ? true : false);
  }

  // Field name: failure_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->failure_reason;
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

  // Field name: type_description
  {
    cdr_serialize_type_description_interfaces__msg__TypeDescription(
      &ros_message->type_description, cdr);
  }

  // Field name: type_sources
  {
    size_t size = ros_message->type_sources.size;
    auto array_ptr = ros_message->type_sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_type_description_interfaces__msg__TypeSource(
        &array_ptr[i], cdr);
    }
  }

  // Field name: extra_information
  {
    size_t size = ros_message->extra_information.size;
    auto array_ptr = ros_message->extra_information.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_type_description_interfaces__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Response(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__srv__GetTypeDescription_Response * ros_message)
{
  // Field name: successful
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->successful = tmp ? true : false;
  }

  // Field name: failure_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->failure_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->failure_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->failure_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'failure_reason'\n");
      return false;
    }
  }

  // Field name: type_description
  {
    cdr_deserialize_type_description_interfaces__msg__TypeDescription(cdr, &ros_message->type_description);
  }

  // Field name: type_sources
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->type_sources.data) {
      type_description_interfaces__msg__TypeSource__Sequence__fini(&ros_message->type_sources);
    }
    if (!type_description_interfaces__msg__TypeSource__Sequence__init(&ros_message->type_sources, size)) {
      fprintf(stderr, "failed to create array for field 'type_sources'");
      return false;
    }
    auto array_ptr = ros_message->type_sources.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_type_description_interfaces__msg__TypeSource(cdr, &array_ptr[i]);
    }
  }

  // Field name: extra_information
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extra_information.data) {
      type_description_interfaces__msg__KeyValue__Sequence__fini(&ros_message->extra_information);
    }
    if (!type_description_interfaces__msg__KeyValue__Sequence__init(&ros_message->extra_information, size)) {
      fprintf(stderr, "failed to create array for field 'extra_information'");
      return false;
    }
    auto array_ptr = ros_message->extra_information.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_type_description_interfaces__msg__KeyValue(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Response__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: failure_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->failure_reason.size + 1);

  // Field name: type_description
  current_alignment += get_serialized_size_type_description_interfaces__msg__TypeDescription(
    &(ros_message->type_description), current_alignment);

  // Field name: type_sources
  {
    size_t array_size = ros_message->type_sources.size;
    auto array_ptr = ros_message->type_sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_type_description_interfaces__msg__TypeSource(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: extra_information
  {
    size_t array_size = ros_message->extra_information.size;
    auto array_ptr = ros_message->extra_information.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_type_description_interfaces__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
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

  // Field name: failure_reason
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

  // Field name: type_description
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_type_description_interfaces__msg__TypeDescription(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: type_sources
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
        max_serialized_size_type_description_interfaces__msg__TypeSource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: extra_information
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
        max_serialized_size_type_description_interfaces__msg__KeyValue(
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
    using DataType = type_description_interfaces__srv__GetTypeDescription_Response;
    is_plain =
      (
      offsetof(DataType, extra_information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Response(
  const type_description_interfaces__srv__GetTypeDescription_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: successful
  {
    cdr << (ros_message->successful ? true : false);
  }

  // Field name: failure_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->failure_reason;
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

  // Field name: type_description
  {
    cdr_serialize_key_type_description_interfaces__msg__TypeDescription(
      &ros_message->type_description, cdr);
  }

  // Field name: type_sources
  {
    size_t size = ros_message->type_sources.size;
    auto array_ptr = ros_message->type_sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_type_description_interfaces__msg__TypeSource(
        &array_ptr[i], cdr);
    }
  }

  // Field name: extra_information
  {
    size_t size = ros_message->extra_information.size;
    auto array_ptr = ros_message->extra_information.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_type_description_interfaces__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Response__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: failure_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->failure_reason.size + 1);

  // Field name: type_description
  current_alignment += get_serialized_size_key_type_description_interfaces__msg__TypeDescription(
    &(ros_message->type_description), current_alignment);

  // Field name: type_sources
  {
    size_t array_size = ros_message->type_sources.size;
    auto array_ptr = ros_message->type_sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_type_description_interfaces__msg__TypeSource(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: extra_information
  {
    size_t array_size = ros_message->extra_information.size;
    auto array_ptr = ros_message->extra_information.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_type_description_interfaces__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
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

  // Field name: failure_reason
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

  // Field name: type_description
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_type_description_interfaces__msg__TypeDescription(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: type_sources
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
        max_serialized_size_key_type_description_interfaces__msg__TypeSource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: extra_information
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
        max_serialized_size_key_type_description_interfaces__msg__KeyValue(
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
    using DataType = type_description_interfaces__srv__GetTypeDescription_Response;
    is_plain =
      (
      offsetof(DataType, extra_information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetTypeDescription_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__srv__GetTypeDescription_Response * ros_message = static_cast<const type_description_interfaces__srv__GetTypeDescription_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Response(ros_message, cdr);
}

static bool _GetTypeDescription_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__srv__GetTypeDescription_Response * ros_message = static_cast<type_description_interfaces__srv__GetTypeDescription_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Response(cdr, ros_message);
}

static uint32_t _GetTypeDescription_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
      untyped_ros_message, 0));
}

static size_t _GetTypeDescription_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetTypeDescription_Response = {
  "type_description_interfaces::srv",
  "GetTypeDescription_Response",
  _GetTypeDescription_Response__cdr_serialize,
  _GetTypeDescription_Response__cdr_deserialize,
  _GetTypeDescription_Response__get_serialized_size,
  _GetTypeDescription_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetTypeDescription_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTypeDescription_Response,
  get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Response)() {
  return &_GetTypeDescription_Response__type_support;
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
// #include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_type_description_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Request(
  const type_description_interfaces__srv__GetTypeDescription_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Request(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__srv__GetTypeDescription_Request * ros_message);

size_t get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Request(
  const type_description_interfaces__srv__GetTypeDescription_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Request)();

bool cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Response(
  const type_description_interfaces__srv__GetTypeDescription_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Response(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__srv__GetTypeDescription_Response * ros_message);

size_t get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Response(
  const type_description_interfaces__srv__GetTypeDescription_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Response)();


using _GetTypeDescription_Event__ros_msg_type = type_description_interfaces__srv__GetTypeDescription_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Event(
  const type_description_interfaces__srv__GetTypeDescription_Event * ros_message,
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
      cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Request(
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
      cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Event(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces__srv__GetTypeDescription_Event * ros_message)
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
      type_description_interfaces__srv__GetTypeDescription_Request__Sequence__fini(&ros_message->request);
    }
    if (!type_description_interfaces__srv__GetTypeDescription_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      type_description_interfaces__srv__GetTypeDescription_Response__Sequence__fini(&ros_message->response);
    }
    if (!type_description_interfaces__srv__GetTypeDescription_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Event__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Event__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
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
      current_alignment += get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Event(
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
        max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Request(
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
        max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Response(
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
    using DataType = type_description_interfaces__srv__GetTypeDescription_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
bool cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Event(
  const type_description_interfaces__srv__GetTypeDescription_Event * ros_message,
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
      cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Request(
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
      cdr_serialize_key_type_description_interfaces__srv__GetTypeDescription_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTypeDescription_Event__ros_msg_type * ros_message = static_cast<const _GetTypeDescription_Event__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
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
      current_alignment += get_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Event(
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
        max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Request(
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
        max_serialized_size_key_type_description_interfaces__srv__GetTypeDescription_Response(
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
    using DataType = type_description_interfaces__srv__GetTypeDescription_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetTypeDescription_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const type_description_interfaces__srv__GetTypeDescription_Event * ros_message = static_cast<const type_description_interfaces__srv__GetTypeDescription_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_type_description_interfaces__srv__GetTypeDescription_Event(ros_message, cdr);
}

static bool _GetTypeDescription_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  type_description_interfaces__srv__GetTypeDescription_Event * ros_message = static_cast<type_description_interfaces__srv__GetTypeDescription_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_type_description_interfaces__srv__GetTypeDescription_Event(cdr, ros_message);
}

static uint32_t _GetTypeDescription_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_type_description_interfaces__srv__GetTypeDescription_Event(
      untyped_ros_message, 0));
}

static size_t _GetTypeDescription_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_type_description_interfaces__srv__GetTypeDescription_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetTypeDescription_Event = {
  "type_description_interfaces::srv",
  "GetTypeDescription_Event",
  _GetTypeDescription_Event__cdr_serialize,
  _GetTypeDescription_Event__cdr_deserialize,
  _GetTypeDescription_Event__get_serialized_size,
  _GetTypeDescription_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetTypeDescription_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTypeDescription_Event,
  get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Event)() {
  return &_GetTypeDescription_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "type_description_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "type_description_interfaces/srv/get_type_description.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetTypeDescription__callbacks = {
  "type_description_interfaces::srv",
  "GetTypeDescription",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription_Response)(),
};

static rosidl_service_type_support_t GetTypeDescription__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetTypeDescription__callbacks,
  get_service_typesupport_handle_function,
  &_GetTypeDescription_Request__type_support,
  &_GetTypeDescription_Response__type_support,
  &_GetTypeDescription_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    type_description_interfaces,
    srv,
    GetTypeDescription
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    type_description_interfaces,
    srv,
    GetTypeDescription
  ),
  &type_description_interfaces__srv__GetTypeDescription__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, type_description_interfaces, srv, GetTypeDescription)() {
  return &GetTypeDescription__handle;
}

#if defined(__cplusplus)
}
#endif
