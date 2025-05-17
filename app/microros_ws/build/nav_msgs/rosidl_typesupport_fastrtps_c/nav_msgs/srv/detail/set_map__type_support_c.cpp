// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav_msgs:srv/SetMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/set_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav_msgs/srv/detail/set_map__struct.h"
#include "nav_msgs/srv/detail/set_map__functions.h"
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

#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"  // initial_pose
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"  // map

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_geometry_msgs__msg__PoseWithCovarianceStamped(
  const geometry_msgs__msg__PoseWithCovarianceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_deserialize_geometry_msgs__msg__PoseWithCovarianceStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__PoseWithCovarianceStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  const geometry_msgs__msg__PoseWithCovarianceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped)();

bool cdr_serialize_nav_msgs__msg__OccupancyGrid(
  const nav_msgs__msg__OccupancyGrid * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_nav_msgs__msg__OccupancyGrid(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__msg__OccupancyGrid * ros_message);

size_t get_serialized_size_nav_msgs__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__msg__OccupancyGrid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_nav_msgs__msg__OccupancyGrid(
  const nav_msgs__msg__OccupancyGrid * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_nav_msgs__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_nav_msgs__msg__OccupancyGrid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid)();


using _SetMap_Request__ros_msg_type = nav_msgs__srv__SetMap_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_nav_msgs__srv__SetMap_Request(
  const nav_msgs__srv__SetMap_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: map
  {
    cdr_serialize_nav_msgs__msg__OccupancyGrid(
      &ros_message->map, cdr);
  }

  // Field name: initial_pose
  {
    cdr_serialize_geometry_msgs__msg__PoseWithCovarianceStamped(
      &ros_message->initial_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_deserialize_nav_msgs__srv__SetMap_Request(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__srv__SetMap_Request * ros_message)
{
  // Field name: map
  {
    cdr_deserialize_nav_msgs__msg__OccupancyGrid(cdr, &ros_message->map);
  }

  // Field name: initial_pose
  {
    cdr_deserialize_geometry_msgs__msg__PoseWithCovarianceStamped(cdr, &ros_message->initial_pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__SetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Request__ros_msg_type * ros_message = static_cast<const _SetMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: map
  current_alignment += get_serialized_size_nav_msgs__msg__OccupancyGrid(
    &(ros_message->map), current_alignment);

  // Field name: initial_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->initial_pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__SetMap_Request(
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

  // Field name: map
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__OccupancyGrid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: initial_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
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
    using DataType = nav_msgs__srv__SetMap_Request;
    is_plain =
      (
      offsetof(DataType, initial_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_key_nav_msgs__srv__SetMap_Request(
  const nav_msgs__srv__SetMap_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: map
  {
    cdr_serialize_key_nav_msgs__msg__OccupancyGrid(
      &ros_message->map, cdr);
  }

  // Field name: initial_pose
  {
    cdr_serialize_key_geometry_msgs__msg__PoseWithCovarianceStamped(
      &ros_message->initial_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_key_nav_msgs__srv__SetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Request__ros_msg_type * ros_message = static_cast<const _SetMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: map
  current_alignment += get_serialized_size_key_nav_msgs__msg__OccupancyGrid(
    &(ros_message->map), current_alignment);

  // Field name: initial_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->initial_pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_key_nav_msgs__srv__SetMap_Request(
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
  // Field name: map
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_msgs__msg__OccupancyGrid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: initial_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
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
    using DataType = nav_msgs__srv__SetMap_Request;
    is_plain =
      (
      offsetof(DataType, initial_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const nav_msgs__srv__SetMap_Request * ros_message = static_cast<const nav_msgs__srv__SetMap_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_nav_msgs__srv__SetMap_Request(ros_message, cdr);
}

static bool _SetMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  nav_msgs__srv__SetMap_Request * ros_message = static_cast<nav_msgs__srv__SetMap_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_nav_msgs__srv__SetMap_Request(cdr, ros_message);
}

static uint32_t _SetMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav_msgs__srv__SetMap_Request(
      untyped_ros_message, 0));
}

static size_t _SetMap_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav_msgs__srv__SetMap_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMap_Request = {
  "nav_msgs::srv",
  "SetMap_Request",
  _SetMap_Request__cdr_serialize,
  _SetMap_Request__cdr_deserialize,
  _SetMap_Request__get_serialized_size,
  _SetMap_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMap_Request,
  get_message_typesupport_handle_function,
  &nav_msgs__srv__SetMap_Request__get_type_hash,
  &nav_msgs__srv__SetMap_Request__get_type_description,
  &nav_msgs__srv__SetMap_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Request)() {
  return &_SetMap_Request__type_support;
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
// #include "nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__functions.h"
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


// forward declare type support functions


using _SetMap_Response__ros_msg_type = nav_msgs__srv__SetMap_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_nav_msgs__srv__SetMap_Response(
  const nav_msgs__srv__SetMap_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_deserialize_nav_msgs__srv__SetMap_Response(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__srv__SetMap_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__SetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Response__ros_msg_type * ros_message = static_cast<const _SetMap_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__SetMap_Response(
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav_msgs__srv__SetMap_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_key_nav_msgs__srv__SetMap_Response(
  const nav_msgs__srv__SetMap_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_key_nav_msgs__srv__SetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Response__ros_msg_type * ros_message = static_cast<const _SetMap_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_key_nav_msgs__srv__SetMap_Response(
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav_msgs__srv__SetMap_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const nav_msgs__srv__SetMap_Response * ros_message = static_cast<const nav_msgs__srv__SetMap_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_nav_msgs__srv__SetMap_Response(ros_message, cdr);
}

static bool _SetMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  nav_msgs__srv__SetMap_Response * ros_message = static_cast<nav_msgs__srv__SetMap_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_nav_msgs__srv__SetMap_Response(cdr, ros_message);
}

static uint32_t _SetMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav_msgs__srv__SetMap_Response(
      untyped_ros_message, 0));
}

static size_t _SetMap_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav_msgs__srv__SetMap_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMap_Response = {
  "nav_msgs::srv",
  "SetMap_Response",
  _SetMap_Response__cdr_serialize,
  _SetMap_Response__cdr_deserialize,
  _SetMap_Response__get_serialized_size,
  _SetMap_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMap_Response,
  get_message_typesupport_handle_function,
  &nav_msgs__srv__SetMap_Response__get_type_hash,
  &nav_msgs__srv__SetMap_Response__get_type_description,
  &nav_msgs__srv__SetMap_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Response)() {
  return &_SetMap_Response__type_support;
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
// #include "nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__functions.h"
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

bool cdr_serialize_nav_msgs__srv__SetMap_Request(
  const nav_msgs__srv__SetMap_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_nav_msgs__srv__SetMap_Request(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__srv__SetMap_Request * ros_message);

size_t get_serialized_size_nav_msgs__srv__SetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__SetMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_nav_msgs__srv__SetMap_Request(
  const nav_msgs__srv__SetMap_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_nav_msgs__srv__SetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_nav_msgs__srv__SetMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Request)();

bool cdr_serialize_nav_msgs__srv__SetMap_Response(
  const nav_msgs__srv__SetMap_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_nav_msgs__srv__SetMap_Response(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__srv__SetMap_Response * ros_message);

size_t get_serialized_size_nav_msgs__srv__SetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__SetMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_nav_msgs__srv__SetMap_Response(
  const nav_msgs__srv__SetMap_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_nav_msgs__srv__SetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_nav_msgs__srv__SetMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SetMap_Event__ros_msg_type = nav_msgs__srv__SetMap_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_nav_msgs__srv__SetMap_Event(
  const nav_msgs__srv__SetMap_Event * ros_message,
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
      cdr_serialize_nav_msgs__srv__SetMap_Request(
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
      cdr_serialize_nav_msgs__srv__SetMap_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_deserialize_nav_msgs__srv__SetMap_Event(
  eprosima::fastcdr::Cdr & cdr,
  nav_msgs__srv__SetMap_Event * ros_message)
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
      nav_msgs__srv__SetMap_Request__Sequence__fini(&ros_message->request);
    }
    if (!nav_msgs__srv__SetMap_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_nav_msgs__srv__SetMap_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      nav_msgs__srv__SetMap_Response__Sequence__fini(&ros_message->response);
    }
    if (!nav_msgs__srv__SetMap_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_nav_msgs__srv__SetMap_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__SetMap_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Event__ros_msg_type * ros_message = static_cast<const _SetMap_Event__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_nav_msgs__srv__SetMap_Request(
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
      current_alignment += get_serialized_size_nav_msgs__srv__SetMap_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__SetMap_Event(
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
        max_serialized_size_nav_msgs__srv__SetMap_Request(
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
        max_serialized_size_nav_msgs__srv__SetMap_Response(
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
    using DataType = nav_msgs__srv__SetMap_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
bool cdr_serialize_key_nav_msgs__srv__SetMap_Event(
  const nav_msgs__srv__SetMap_Event * ros_message,
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
      cdr_serialize_key_nav_msgs__srv__SetMap_Request(
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
      cdr_serialize_key_nav_msgs__srv__SetMap_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t get_serialized_size_key_nav_msgs__srv__SetMap_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMap_Event__ros_msg_type * ros_message = static_cast<const _SetMap_Event__ros_msg_type *>(untyped_ros_message);
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
      current_alignment += get_serialized_size_key_nav_msgs__srv__SetMap_Request(
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
      current_alignment += get_serialized_size_key_nav_msgs__srv__SetMap_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav_msgs
size_t max_serialized_size_key_nav_msgs__srv__SetMap_Event(
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
        max_serialized_size_key_nav_msgs__srv__SetMap_Request(
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
        max_serialized_size_key_nav_msgs__srv__SetMap_Response(
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
    using DataType = nav_msgs__srv__SetMap_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetMap_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const nav_msgs__srv__SetMap_Event * ros_message = static_cast<const nav_msgs__srv__SetMap_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_nav_msgs__srv__SetMap_Event(ros_message, cdr);
}

static bool _SetMap_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  nav_msgs__srv__SetMap_Event * ros_message = static_cast<nav_msgs__srv__SetMap_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_nav_msgs__srv__SetMap_Event(cdr, ros_message);
}

static uint32_t _SetMap_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav_msgs__srv__SetMap_Event(
      untyped_ros_message, 0));
}

static size_t _SetMap_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav_msgs__srv__SetMap_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMap_Event = {
  "nav_msgs::srv",
  "SetMap_Event",
  _SetMap_Event__cdr_serialize,
  _SetMap_Event__cdr_deserialize,
  _SetMap_Event__get_serialized_size,
  _SetMap_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMap_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMap_Event,
  get_message_typesupport_handle_function,
  &nav_msgs__srv__SetMap_Event__get_type_hash,
  &nav_msgs__srv__SetMap_Event__get_type_description,
  &nav_msgs__srv__SetMap_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Event)() {
  return &_SetMap_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav_msgs/srv/set_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMap__callbacks = {
  "nav_msgs::srv",
  "SetMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap_Response)(),
};

static rosidl_service_type_support_t SetMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMap__callbacks,
  get_service_typesupport_handle_function,
  &_SetMap_Request__type_support,
  &_SetMap_Response__type_support,
  &_SetMap_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    SetMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    SetMap
  ),
  &nav_msgs__srv__SetMap__get_type_hash,
  &nav_msgs__srv__SetMap__get_type_description,
  &nav_msgs__srv__SetMap__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, srv, SetMap)() {
  return &SetMap__handle;
}

#if defined(__cplusplus)
}
#endif
