// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/marker__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "visualization_msgs/msg/detail/marker__struct.h"
#include "visualization_msgs/msg/detail/marker__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // lifetime
#include "geometry_msgs/msg/detail/point__functions.h"  // points
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "geometry_msgs/msg/detail/vector3__functions.h"  // scale
#include "rosidl_runtime_c/string.h"  // mesh_resource, ns, text, texture_resource
#include "rosidl_runtime_c/string_functions.h"  // mesh_resource, ns, text, texture_resource
#include "sensor_msgs/msg/detail/compressed_image__functions.h"  // texture
#include "std_msgs/msg/detail/color_rgba__functions.h"  // color, colors
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "visualization_msgs/msg/detail/mesh_file__functions.h"  // mesh_file
#include "visualization_msgs/msg/detail/uv_coordinate__functions.h"  // uv_coordinates

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_builtin_interfaces__msg__Duration(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Duration * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_sensor_msgs__msg__CompressedImage(
  const sensor_msgs__msg__CompressedImage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_sensor_msgs__msg__CompressedImage(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__CompressedImage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_sensor_msgs__msg__CompressedImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_sensor_msgs__msg__CompressedImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_sensor_msgs__msg__CompressedImage(
  const sensor_msgs__msg__CompressedImage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_sensor_msgs__msg__CompressedImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_sensor_msgs__msg__CompressedImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CompressedImage)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_std_msgs__msg__ColorRGBA(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__ColorRGBA * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_std_msgs__msg__ColorRGBA(
  const std_msgs__msg__ColorRGBA * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_visualization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

bool cdr_serialize_visualization_msgs__msg__MeshFile(
  const visualization_msgs__msg__MeshFile * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_visualization_msgs__msg__MeshFile(
  eprosima::fastcdr::Cdr & cdr,
  visualization_msgs__msg__MeshFile * ros_message);

size_t get_serialized_size_visualization_msgs__msg__MeshFile(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__MeshFile(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_visualization_msgs__msg__MeshFile(
  const visualization_msgs__msg__MeshFile * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_visualization_msgs__msg__MeshFile(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_visualization_msgs__msg__MeshFile(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MeshFile)();

bool cdr_serialize_visualization_msgs__msg__UVCoordinate(
  const visualization_msgs__msg__UVCoordinate * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_visualization_msgs__msg__UVCoordinate(
  eprosima::fastcdr::Cdr & cdr,
  visualization_msgs__msg__UVCoordinate * ros_message);

size_t get_serialized_size_visualization_msgs__msg__UVCoordinate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__UVCoordinate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_visualization_msgs__msg__UVCoordinate(
  const visualization_msgs__msg__UVCoordinate * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_visualization_msgs__msg__UVCoordinate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_visualization_msgs__msg__UVCoordinate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, UVCoordinate)();


using _Marker__ros_msg_type = visualization_msgs__msg__Marker;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
bool cdr_serialize_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: ns
  {
    const rosidl_runtime_c__String * str = &ros_message->ns;
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

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: action
  {
    cdr << ros_message->action;
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: scale
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->scale, cdr);
  }

  // Field name: color
  {
    cdr_serialize_std_msgs__msg__ColorRGBA(
      &ros_message->color, cdr);
  }

  // Field name: lifetime
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->lifetime, cdr);
  }

  // Field name: frame_locked
  {
    cdr << (ros_message->frame_locked ? true : false);
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: colors
  {
    size_t size = ros_message->colors.size;
    auto array_ptr = ros_message->colors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_std_msgs__msg__ColorRGBA(
        &array_ptr[i], cdr);
    }
  }

  // Field name: texture_resource
  {
    const rosidl_runtime_c__String * str = &ros_message->texture_resource;
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

  // Field name: texture
  {
    cdr_serialize_sensor_msgs__msg__CompressedImage(
      &ros_message->texture, cdr);
  }

  // Field name: uv_coordinates
  {
    size_t size = ros_message->uv_coordinates.size;
    auto array_ptr = ros_message->uv_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_visualization_msgs__msg__UVCoordinate(
        &array_ptr[i], cdr);
    }
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

  // Field name: mesh_resource
  {
    const rosidl_runtime_c__String * str = &ros_message->mesh_resource;
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

  // Field name: mesh_file
  {
    cdr_serialize_visualization_msgs__msg__MeshFile(
      &ros_message->mesh_file, cdr);
  }

  // Field name: mesh_use_embedded_materials
  {
    cdr << (ros_message->mesh_use_embedded_materials ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
bool cdr_deserialize_visualization_msgs__msg__Marker(
  eprosima::fastcdr::Cdr & cdr,
  visualization_msgs__msg__Marker * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: ns
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ns.data) {
      rosidl_runtime_c__String__init(&ros_message->ns);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ns,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ns'\n");
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: action
  {
    cdr >> ros_message->action;
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: scale
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->scale);
  }

  // Field name: color
  {
    cdr_deserialize_std_msgs__msg__ColorRGBA(cdr, &ros_message->color);
  }

  // Field name: lifetime
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->lifetime);
  }

  // Field name: frame_locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->frame_locked = tmp ? true : false;
  }

  // Field name: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->points.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->points);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: colors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->colors.data) {
      std_msgs__msg__ColorRGBA__Sequence__fini(&ros_message->colors);
    }
    if (!std_msgs__msg__ColorRGBA__Sequence__init(&ros_message->colors, size)) {
      fprintf(stderr, "failed to create array for field 'colors'");
      return false;
    }
    auto array_ptr = ros_message->colors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_std_msgs__msg__ColorRGBA(cdr, &array_ptr[i]);
    }
  }

  // Field name: texture_resource
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->texture_resource.data) {
      rosidl_runtime_c__String__init(&ros_message->texture_resource);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->texture_resource,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'texture_resource'\n");
      return false;
    }
  }

  // Field name: texture
  {
    cdr_deserialize_sensor_msgs__msg__CompressedImage(cdr, &ros_message->texture);
  }

  // Field name: uv_coordinates
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uv_coordinates.data) {
      visualization_msgs__msg__UVCoordinate__Sequence__fini(&ros_message->uv_coordinates);
    }
    if (!visualization_msgs__msg__UVCoordinate__Sequence__init(&ros_message->uv_coordinates, size)) {
      fprintf(stderr, "failed to create array for field 'uv_coordinates'");
      return false;
    }
    auto array_ptr = ros_message->uv_coordinates.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_visualization_msgs__msg__UVCoordinate(cdr, &array_ptr[i]);
    }
  }

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  // Field name: mesh_resource
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mesh_resource.data) {
      rosidl_runtime_c__String__init(&ros_message->mesh_resource);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mesh_resource,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mesh_resource'\n");
      return false;
    }
  }

  // Field name: mesh_file
  {
    cdr_deserialize_visualization_msgs__msg__MeshFile(cdr, &ros_message->mesh_file);
  }

  // Field name: mesh_use_embedded_materials
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mesh_use_embedded_materials = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Marker__ros_msg_type * ros_message = static_cast<const _Marker__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: ns
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ns.size + 1);

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: scale
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->scale), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);

  // Field name: lifetime
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->lifetime), current_alignment);

  // Field name: frame_locked
  {
    size_t item_size = sizeof(ros_message->frame_locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: colors
  {
    size_t array_size = ros_message->colors.size;
    auto array_ptr = ros_message->colors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: texture_resource
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->texture_resource.size + 1);

  // Field name: texture
  current_alignment += get_serialized_size_sensor_msgs__msg__CompressedImage(
    &(ros_message->texture), current_alignment);

  // Field name: uv_coordinates
  {
    size_t array_size = ros_message->uv_coordinates.size;
    auto array_ptr = ros_message->uv_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_visualization_msgs__msg__UVCoordinate(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  // Field name: mesh_resource
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mesh_resource.size + 1);

  // Field name: mesh_file
  current_alignment += get_serialized_size_visualization_msgs__msg__MeshFile(
    &(ros_message->mesh_file), current_alignment);

  // Field name: mesh_use_embedded_materials
  {
    size_t item_size = sizeof(ros_message->mesh_use_embedded_materials);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__Marker(
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

  // Field name: ns
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: action
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scale
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: lifetime
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

  // Field name: frame_locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: points
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
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: colors
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
        max_serialized_size_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: texture_resource
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

  // Field name: texture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__CompressedImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uv_coordinates
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
        max_serialized_size_visualization_msgs__msg__UVCoordinate(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: text
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

  // Field name: mesh_resource
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

  // Field name: mesh_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__MeshFile(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mesh_use_embedded_materials
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
    using DataType = visualization_msgs__msg__Marker;
    is_plain =
      (
      offsetof(DataType, mesh_use_embedded_materials) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
bool cdr_serialize_key_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: ns
  {
    const rosidl_runtime_c__String * str = &ros_message->ns;
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

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: action
  {
    cdr << ros_message->action;
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: scale
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->scale, cdr);
  }

  // Field name: color
  {
    cdr_serialize_key_std_msgs__msg__ColorRGBA(
      &ros_message->color, cdr);
  }

  // Field name: lifetime
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->lifetime, cdr);
  }

  // Field name: frame_locked
  {
    cdr << (ros_message->frame_locked ? true : false);
  }

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: colors
  {
    size_t size = ros_message->colors.size;
    auto array_ptr = ros_message->colors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_std_msgs__msg__ColorRGBA(
        &array_ptr[i], cdr);
    }
  }

  // Field name: texture_resource
  {
    const rosidl_runtime_c__String * str = &ros_message->texture_resource;
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

  // Field name: texture
  {
    cdr_serialize_key_sensor_msgs__msg__CompressedImage(
      &ros_message->texture, cdr);
  }

  // Field name: uv_coordinates
  {
    size_t size = ros_message->uv_coordinates.size;
    auto array_ptr = ros_message->uv_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_visualization_msgs__msg__UVCoordinate(
        &array_ptr[i], cdr);
    }
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

  // Field name: mesh_resource
  {
    const rosidl_runtime_c__String * str = &ros_message->mesh_resource;
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

  // Field name: mesh_file
  {
    cdr_serialize_key_visualization_msgs__msg__MeshFile(
      &ros_message->mesh_file, cdr);
  }

  // Field name: mesh_use_embedded_materials
  {
    cdr << (ros_message->mesh_use_embedded_materials ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_key_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Marker__ros_msg_type * ros_message = static_cast<const _Marker__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: ns
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ns.size + 1);

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: action
  {
    size_t item_size = sizeof(ros_message->action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: scale
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->scale), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_key_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);

  // Field name: lifetime
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->lifetime), current_alignment);

  // Field name: frame_locked
  {
    size_t item_size = sizeof(ros_message->frame_locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: colors
  {
    size_t array_size = ros_message->colors.size;
    auto array_ptr = ros_message->colors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_std_msgs__msg__ColorRGBA(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: texture_resource
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->texture_resource.size + 1);

  // Field name: texture
  current_alignment += get_serialized_size_key_sensor_msgs__msg__CompressedImage(
    &(ros_message->texture), current_alignment);

  // Field name: uv_coordinates
  {
    size_t array_size = ros_message->uv_coordinates.size;
    auto array_ptr = ros_message->uv_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_visualization_msgs__msg__UVCoordinate(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  // Field name: mesh_resource
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mesh_resource.size + 1);

  // Field name: mesh_file
  current_alignment += get_serialized_size_key_visualization_msgs__msg__MeshFile(
    &(ros_message->mesh_file), current_alignment);

  // Field name: mesh_use_embedded_materials
  {
    size_t item_size = sizeof(ros_message->mesh_use_embedded_materials);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_key_visualization_msgs__msg__Marker(
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

  // Field name: ns
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: action
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scale
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: lifetime
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

  // Field name: frame_locked
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: points
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
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: colors
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
        max_serialized_size_key_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: texture_resource
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

  // Field name: texture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__CompressedImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uv_coordinates
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
        max_serialized_size_key_visualization_msgs__msg__UVCoordinate(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: text
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

  // Field name: mesh_resource
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

  // Field name: mesh_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_visualization_msgs__msg__MeshFile(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mesh_use_embedded_materials
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
    using DataType = visualization_msgs__msg__Marker;
    is_plain =
      (
      offsetof(DataType, mesh_use_embedded_materials) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Marker__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const visualization_msgs__msg__Marker * ros_message = static_cast<const visualization_msgs__msg__Marker *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_visualization_msgs__msg__Marker(ros_message, cdr);
}

static bool _Marker__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  visualization_msgs__msg__Marker * ros_message = static_cast<visualization_msgs__msg__Marker *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_visualization_msgs__msg__Marker(cdr, ros_message);
}

static uint32_t _Marker__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_visualization_msgs__msg__Marker(
      untyped_ros_message, 0));
}

static size_t _Marker__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_visualization_msgs__msg__Marker(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Marker = {
  "visualization_msgs::msg",
  "Marker",
  _Marker__cdr_serialize,
  _Marker__cdr_deserialize,
  _Marker__get_serialized_size,
  _Marker__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Marker__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Marker,
  get_message_typesupport_handle_function,
  &visualization_msgs__msg__Marker__get_type_hash,
  &visualization_msgs__msg__Marker__get_type_description,
  &visualization_msgs__msg__Marker__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, Marker)() {
  return &_Marker__type_support;
}

#if defined(__cplusplus)
}
#endif
