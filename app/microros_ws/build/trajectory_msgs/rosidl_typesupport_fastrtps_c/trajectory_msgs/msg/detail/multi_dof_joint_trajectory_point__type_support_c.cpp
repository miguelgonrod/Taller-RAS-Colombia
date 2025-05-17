// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // time_from_start
#include "geometry_msgs/msg/detail/transform__functions.h"  // transforms
#include "geometry_msgs/msg/detail/twist__functions.h"  // accelerations, velocities

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_deserialize_builtin_interfaces__msg__Duration(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Duration * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_deserialize_geometry_msgs__msg__Transform(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Transform * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_key_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();


using _MultiDOFJointTrajectoryPoint__ros_msg_type = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
bool cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: transforms
  {
    size_t size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Transform(
        &array_ptr[i], cdr);
    }
  }

  // Field name: velocities
  {
    size_t size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Twist(
        &array_ptr[i], cdr);
    }
  }

  // Field name: accelerations
  {
    size_t size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Twist(
        &array_ptr[i], cdr);
    }
  }

  // Field name: time_from_start
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->time_from_start, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
bool cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  eprosima::fastcdr::Cdr & cdr,
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message)
{
  // Field name: transforms
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->transforms.data) {
      geometry_msgs__msg__Transform__Sequence__fini(&ros_message->transforms);
    }
    if (!geometry_msgs__msg__Transform__Sequence__init(&ros_message->transforms, size)) {
      fprintf(stderr, "failed to create array for field 'transforms'");
      return false;
    }
    auto array_ptr = ros_message->transforms.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Transform(cdr, &array_ptr[i]);
    }
  }

  // Field name: velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocities.data) {
      geometry_msgs__msg__Twist__Sequence__fini(&ros_message->velocities);
    }
    if (!geometry_msgs__msg__Twist__Sequence__init(&ros_message->velocities, size)) {
      fprintf(stderr, "failed to create array for field 'velocities'");
      return false;
    }
    auto array_ptr = ros_message->velocities.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Twist(cdr, &array_ptr[i]);
    }
  }

  // Field name: accelerations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->accelerations.data) {
      geometry_msgs__msg__Twist__Sequence__fini(&ros_message->accelerations);
    }
    if (!geometry_msgs__msg__Twist__Sequence__init(&ros_message->accelerations, size)) {
      fprintf(stderr, "failed to create array for field 'accelerations'");
      return false;
    }
    auto array_ptr = ros_message->accelerations.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Twist(cdr, &array_ptr[i]);
    }
  }

  // Field name: time_from_start
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->time_from_start);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiDOFJointTrajectoryPoint__ros_msg_type * ros_message = static_cast<const _MultiDOFJointTrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: transforms
  {
    size_t array_size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: velocities
  {
    size_t array_size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: accelerations
  {
    size_t array_size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: time_from_start
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->time_from_start), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
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

  // Field name: transforms
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
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocities
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
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: accelerations
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
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_from_start
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
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
    using DataType = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;
    is_plain =
      (
      offsetof(DataType, time_from_start) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
bool cdr_serialize_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: transforms
  {
    size_t size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Transform(
        &array_ptr[i], cdr);
    }
  }

  // Field name: velocities
  {
    size_t size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Twist(
        &array_ptr[i], cdr);
    }
  }

  // Field name: accelerations
  {
    size_t size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Twist(
        &array_ptr[i], cdr);
    }
  }

  // Field name: time_from_start
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->time_from_start, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
size_t get_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiDOFJointTrajectoryPoint__ros_msg_type * ros_message = static_cast<const _MultiDOFJointTrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: transforms
  {
    size_t array_size = ros_message->transforms.size;
    auto array_ptr = ros_message->transforms.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: velocities
  {
    size_t array_size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: accelerations
  {
    size_t array_size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: time_from_start
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->time_from_start), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_msgs
size_t max_serialized_size_key_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
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
  // Field name: transforms
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
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocities
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
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: accelerations
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
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_from_start
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
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
    using DataType = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;
    is_plain =
      (
      offsetof(DataType, time_from_start) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MultiDOFJointTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message = static_cast<const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(ros_message, cdr);
}

static bool _MultiDOFJointTrajectoryPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * ros_message = static_cast<trajectory_msgs__msg__MultiDOFJointTrajectoryPoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(cdr, ros_message);
}

static uint32_t _MultiDOFJointTrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      untyped_ros_message, 0));
}

static size_t _MultiDOFJointTrajectoryPoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiDOFJointTrajectoryPoint = {
  "trajectory_msgs::msg",
  "MultiDOFJointTrajectoryPoint",
  _MultiDOFJointTrajectoryPoint__cdr_serialize,
  _MultiDOFJointTrajectoryPoint__cdr_deserialize,
  _MultiDOFJointTrajectoryPoint__get_serialized_size,
  _MultiDOFJointTrajectoryPoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MultiDOFJointTrajectoryPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiDOFJointTrajectoryPoint,
  get_message_typesupport_handle_function,
  &trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_type_hash,
  &trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_type_description,
  &trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)() {
  return &_MultiDOFJointTrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
