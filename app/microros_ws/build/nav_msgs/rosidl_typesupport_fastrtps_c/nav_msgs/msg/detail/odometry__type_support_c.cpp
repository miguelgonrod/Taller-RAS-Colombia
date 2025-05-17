// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav_msgs/msg/detail/odometry__struct.h"
#include "nav_msgs/msg/detail/odometry__functions.h"
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

#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"  // pose
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"  // twist
#include "rosidl_runtime_c/string.h"  // child_frame_id
#include "rosidl_runtime_c/string_functions.h"  // child_frame_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_geometry_msgs__msg__PoseWithCovariance(
  const geometry_msgs__msg__PoseWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_deserialize_geometry_msgs__msg__PoseWithCovariance(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__PoseWithCovariance * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_key_geometry_msgs__msg__PoseWithCovariance(
  const geometry_msgs__msg__PoseWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_geometry_msgs__msg__TwistWithCovariance(
  const geometry_msgs__msg__TwistWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_deserialize_geometry_msgs__msg__TwistWithCovariance(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TwistWithCovariance * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_key_geometry_msgs__msg__TwistWithCovariance(
  const geometry_msgs__msg__TwistWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Odometry__ros_msg_type = nav_msgs__msg__Odometry;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_nav_msgs__msg__Odometry(
  const nav_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: child_frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->child_frame_id;
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

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__PoseWithCovariance(
      &ros_message->pose, cdr);
  }

  // Field name: twist
  {
    cdr_serialize_geometry_msgs__msg__TwistWithCovariance(
      &ros_message->twist, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_deserialize_nav_msgs__msg__Odometry(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__msg__Odometry * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: child_frame_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->child_frame_id.data) {
      rosidl_runtime_c__String__init(&ros_message->child_frame_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->child_frame_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'child_frame_id'\n");
      return false;
    }
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__PoseWithCovariance(cdr, &ros_message->pose);
  }

  // Field name: twist
  {
    cdr_deserialize_geometry_msgs__msg__TwistWithCovariance(cdr, &ros_message->twist);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odometry__ros_msg_type * ros_message = static_cast<const _Odometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: child_frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->child_frame_id.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->pose), current_alignment);

  // Field name: twist
  current_alignment += get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->twist), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__msg__Odometry(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: child_frame_id
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

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
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
    using DataType = nav_msgs__msg__Odometry;
    is_plain =
      (
      offsetof(DataType, twist) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_key_nav_msgs__msg__Odometry(
  const nav_msgs__msg__Odometry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: child_frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->child_frame_id;
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

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__PoseWithCovariance(
      &ros_message->pose, cdr);
  }

  // Field name: twist
  {
    cdr_serialize_key_geometry_msgs__msg__TwistWithCovariance(
      &ros_message->twist, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_key_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odometry__ros_msg_type * ros_message = static_cast<const _Odometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: child_frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->child_frame_id.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->pose), current_alignment);

  // Field name: twist
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->twist), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_key_nav_msgs__msg__Odometry(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: child_frame_id
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

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TwistWithCovariance(
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
    using DataType = nav_msgs__msg__Odometry;
    is_plain =
      (
      offsetof(DataType, twist) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Odometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const nav_msgs__msg__Odometry * ros_message = static_cast<const nav_msgs__msg__Odometry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_nav_msgs__msg__Odometry(ros_message, cdr);
}

static bool _Odometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  nav_msgs__msg__Odometry * ros_message = static_cast<nav_msgs__msg__Odometry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_nav_msgs__msg__Odometry(cdr, ros_message);
}

static uint32_t _Odometry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav_msgs__msg__Odometry(
      untyped_ros_message, 0));
}

static size_t _Odometry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav_msgs__msg__Odometry(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Odometry = {
  "nav_msgs::msg",
  "Odometry",
  _Odometry__cdr_serialize,
  _Odometry__cdr_deserialize,
  _Odometry__get_serialized_size,
  _Odometry__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Odometry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Odometry,
  get_message_typesupport_handle_function,
  &nav_msgs__msg__Odometry__get_type_hash,
  &nav_msgs__msg__Odometry__get_type_description,
  &nav_msgs__msg__Odometry__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)() {
  return &_Odometry__type_support;
}

#if defined(__cplusplus)
}
#endif
