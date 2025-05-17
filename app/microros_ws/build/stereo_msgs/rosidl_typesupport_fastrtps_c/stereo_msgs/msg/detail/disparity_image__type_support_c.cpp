// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice
#include "stereo_msgs/msg/detail/disparity_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stereo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stereo_msgs/msg/detail/disparity_image__struct.h"
#include "stereo_msgs/msg/detail/disparity_image__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // image
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // valid_window
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_sensor_msgs__msg__RegionOfInterest(
  const sensor_msgs__msg__RegionOfInterest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_deserialize_sensor_msgs__msg__RegionOfInterest(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__RegionOfInterest * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_key_sensor_msgs__msg__RegionOfInterest(
  const sensor_msgs__msg__RegionOfInterest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_key_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_key_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DisparityImage__ros_msg_type = stereo_msgs__msg__DisparityImage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
bool cdr_serialize_stereo_msgs__msg__DisparityImage(
  const stereo_msgs__msg__DisparityImage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: image
  {
    cdr_serialize_sensor_msgs__msg__Image(
      &ros_message->image, cdr);
  }

  // Field name: f
  {
    cdr << ros_message->f;
  }

  // Field name: t
  {
    cdr << ros_message->t;
  }

  // Field name: valid_window
  {
    cdr_serialize_sensor_msgs__msg__RegionOfInterest(
      &ros_message->valid_window, cdr);
  }

  // Field name: min_disparity
  {
    cdr << ros_message->min_disparity;
  }

  // Field name: max_disparity
  {
    cdr << ros_message->max_disparity;
  }

  // Field name: delta_d
  {
    cdr << ros_message->delta_d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
bool cdr_deserialize_stereo_msgs__msg__DisparityImage(
  eprosima::fastcdr::Cdr & cdr,
  stereo_msgs__msg__DisparityImage * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: image
  {
    cdr_deserialize_sensor_msgs__msg__Image(cdr, &ros_message->image);
  }

  // Field name: f
  {
    cdr >> ros_message->f;
  }

  // Field name: t
  {
    cdr >> ros_message->t;
  }

  // Field name: valid_window
  {
    cdr_deserialize_sensor_msgs__msg__RegionOfInterest(cdr, &ros_message->valid_window);
  }

  // Field name: min_disparity
  {
    cdr >> ros_message->min_disparity;
  }

  // Field name: max_disparity
  {
    cdr >> ros_message->max_disparity;
  }

  // Field name: delta_d
  {
    cdr >> ros_message->delta_d;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t get_serialized_size_stereo_msgs__msg__DisparityImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisparityImage__ros_msg_type * ros_message = static_cast<const _DisparityImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: image
  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  // Field name: f
  {
    size_t item_size = sizeof(ros_message->f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: t
  {
    size_t item_size = sizeof(ros_message->t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: valid_window
  current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->valid_window), current_alignment);

  // Field name: min_disparity
  {
    size_t item_size = sizeof(ros_message->min_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_disparity
  {
    size_t item_size = sizeof(ros_message->max_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: delta_d
  {
    size_t item_size = sizeof(ros_message->delta_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t max_serialized_size_stereo_msgs__msg__DisparityImage(
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

  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: f
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: t
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: valid_window
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: min_disparity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_disparity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: delta_d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stereo_msgs__msg__DisparityImage;
    is_plain =
      (
      offsetof(DataType, delta_d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
bool cdr_serialize_key_stereo_msgs__msg__DisparityImage(
  const stereo_msgs__msg__DisparityImage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: image
  {
    cdr_serialize_key_sensor_msgs__msg__Image(
      &ros_message->image, cdr);
  }

  // Field name: f
  {
    cdr << ros_message->f;
  }

  // Field name: t
  {
    cdr << ros_message->t;
  }

  // Field name: valid_window
  {
    cdr_serialize_key_sensor_msgs__msg__RegionOfInterest(
      &ros_message->valid_window, cdr);
  }

  // Field name: min_disparity
  {
    cdr << ros_message->min_disparity;
  }

  // Field name: max_disparity
  {
    cdr << ros_message->max_disparity;
  }

  // Field name: delta_d
  {
    cdr << ros_message->delta_d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t get_serialized_size_key_stereo_msgs__msg__DisparityImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisparityImage__ros_msg_type * ros_message = static_cast<const _DisparityImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: image
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  // Field name: f
  {
    size_t item_size = sizeof(ros_message->f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: t
  {
    size_t item_size = sizeof(ros_message->t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: valid_window
  current_alignment += get_serialized_size_key_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->valid_window), current_alignment);

  // Field name: min_disparity
  {
    size_t item_size = sizeof(ros_message->min_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_disparity
  {
    size_t item_size = sizeof(ros_message->max_disparity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: delta_d
  {
    size_t item_size = sizeof(ros_message->delta_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stereo_msgs
size_t max_serialized_size_key_stereo_msgs__msg__DisparityImage(
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

  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: f
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: t
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: valid_window
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: min_disparity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: max_disparity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: delta_d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stereo_msgs__msg__DisparityImage;
    is_plain =
      (
      offsetof(DataType, delta_d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DisparityImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const stereo_msgs__msg__DisparityImage * ros_message = static_cast<const stereo_msgs__msg__DisparityImage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_stereo_msgs__msg__DisparityImage(ros_message, cdr);
}

static bool _DisparityImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  stereo_msgs__msg__DisparityImage * ros_message = static_cast<stereo_msgs__msg__DisparityImage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_stereo_msgs__msg__DisparityImage(cdr, ros_message);
}

static uint32_t _DisparityImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stereo_msgs__msg__DisparityImage(
      untyped_ros_message, 0));
}

static size_t _DisparityImage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stereo_msgs__msg__DisparityImage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DisparityImage = {
  "stereo_msgs::msg",
  "DisparityImage",
  _DisparityImage__cdr_serialize,
  _DisparityImage__cdr_deserialize,
  _DisparityImage__get_serialized_size,
  _DisparityImage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DisparityImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DisparityImage,
  get_message_typesupport_handle_function,
  &stereo_msgs__msg__DisparityImage__get_type_hash,
  &stereo_msgs__msg__DisparityImage__get_type_description,
  &stereo_msgs__msg__DisparityImage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stereo_msgs, msg, DisparityImage)() {
  return &_DisparityImage__type_support;
}

#if defined(__cplusplus)
}
#endif
