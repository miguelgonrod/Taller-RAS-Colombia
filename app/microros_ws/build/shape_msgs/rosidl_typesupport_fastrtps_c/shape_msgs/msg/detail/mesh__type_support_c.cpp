// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shape_msgs/msg/detail/mesh__struct.h"
#include "shape_msgs/msg/detail/mesh__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // vertices
#include "shape_msgs/msg/detail/mesh_triangle__functions.h"  // triangles

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_shape_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

bool cdr_serialize_shape_msgs__msg__MeshTriangle(
  const shape_msgs__msg__MeshTriangle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_shape_msgs__msg__MeshTriangle(
  eprosima::fastcdr::Cdr & cdr,
  shape_msgs__msg__MeshTriangle * ros_message);

size_t get_serialized_size_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_shape_msgs__msg__MeshTriangle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_shape_msgs__msg__MeshTriangle(
  const shape_msgs__msg__MeshTriangle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_shape_msgs__msg__MeshTriangle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_shape_msgs__msg__MeshTriangle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, MeshTriangle)();


using _Mesh__ros_msg_type = shape_msgs__msg__Mesh;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
bool cdr_serialize_shape_msgs__msg__Mesh(
  const shape_msgs__msg__Mesh * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: triangles
  {
    size_t size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_shape_msgs__msg__MeshTriangle(
        &array_ptr[i], cdr);
    }
  }

  // Field name: vertices
  {
    size_t size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
bool cdr_deserialize_shape_msgs__msg__Mesh(
  eprosima::fastcdr::Cdr & cdr,
  shape_msgs__msg__Mesh * ros_message)
{
  // Field name: triangles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->triangles.data) {
      shape_msgs__msg__MeshTriangle__Sequence__fini(&ros_message->triangles);
    }
    if (!shape_msgs__msg__MeshTriangle__Sequence__init(&ros_message->triangles, size)) {
      fprintf(stderr, "failed to create array for field 'triangles'");
      return false;
    }
    auto array_ptr = ros_message->triangles.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_shape_msgs__msg__MeshTriangle(cdr, &array_ptr[i]);
    }
  }

  // Field name: vertices
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vertices.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->vertices);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->vertices, size)) {
      fprintf(stderr, "failed to create array for field 'vertices'");
      return false;
    }
    auto array_ptr = ros_message->vertices.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__Mesh(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mesh__ros_msg_type * ros_message = static_cast<const _Mesh__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: triangles
  {
    size_t array_size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_shape_msgs__msg__MeshTriangle(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: vertices
  {
    size_t array_size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__Mesh(
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

  // Field name: triangles
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
        max_serialized_size_shape_msgs__msg__MeshTriangle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertices
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shape_msgs__msg__Mesh;
    is_plain =
      (
      offsetof(DataType, vertices) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
bool cdr_serialize_key_shape_msgs__msg__Mesh(
  const shape_msgs__msg__Mesh * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: triangles
  {
    size_t size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_shape_msgs__msg__MeshTriangle(
        &array_ptr[i], cdr);
    }
  }

  // Field name: vertices
  {
    size_t size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t get_serialized_size_key_shape_msgs__msg__Mesh(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mesh__ros_msg_type * ros_message = static_cast<const _Mesh__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: triangles
  {
    size_t array_size = ros_message->triangles.size;
    auto array_ptr = ros_message->triangles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_shape_msgs__msg__MeshTriangle(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: vertices
  {
    size_t array_size = ros_message->vertices.size;
    auto array_ptr = ros_message->vertices.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t max_serialized_size_key_shape_msgs__msg__Mesh(
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
  // Field name: triangles
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
        max_serialized_size_key_shape_msgs__msg__MeshTriangle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vertices
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shape_msgs__msg__Mesh;
    is_plain =
      (
      offsetof(DataType, vertices) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Mesh__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const shape_msgs__msg__Mesh * ros_message = static_cast<const shape_msgs__msg__Mesh *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_shape_msgs__msg__Mesh(ros_message, cdr);
}

static bool _Mesh__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  shape_msgs__msg__Mesh * ros_message = static_cast<shape_msgs__msg__Mesh *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_shape_msgs__msg__Mesh(cdr, ros_message);
}

static uint32_t _Mesh__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shape_msgs__msg__Mesh(
      untyped_ros_message, 0));
}

static size_t _Mesh__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shape_msgs__msg__Mesh(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Mesh = {
  "shape_msgs::msg",
  "Mesh",
  _Mesh__cdr_serialize,
  _Mesh__cdr_deserialize,
  _Mesh__get_serialized_size,
  _Mesh__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Mesh__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mesh,
  get_message_typesupport_handle_function,
  &shape_msgs__msg__Mesh__get_type_hash,
  &shape_msgs__msg__Mesh__get_type_description,
  &shape_msgs__msg__Mesh__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, Mesh)() {
  return &_Mesh__type_support;
}

#if defined(__cplusplus)
}
#endif
