// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:msg/TypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/type_description__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "type_description_interfaces/msg/detail/type_description__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace type_description_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const type_description_interfaces::msg::IndividualTypeDescription &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::IndividualTypeDescription &);

size_t get_serialized_size(
  const type_description_interfaces::msg::IndividualTypeDescription &,
  size_t current_alignment);

size_t
max_serialized_size_IndividualTypeDescription(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace type_description_interfaces

namespace type_description_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const type_description_interfaces::msg::IndividualTypeDescription &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::IndividualTypeDescription &);

size_t get_serialized_size(
  const type_description_interfaces::msg::IndividualTypeDescription &,
  size_t current_alignment);

size_t
max_serialized_size_IndividualTypeDescription(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace type_description_interfaces


namespace type_description_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::msg::TypeDescription & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type_description
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.type_description,
    cdr);
  // Member: referenced_type_descriptions
  {
    size_t size = ros_message.referenced_type_descriptions.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.referenced_type_descriptions[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  type_description_interfaces::msg::TypeDescription & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type_description
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.type_description);
  // Member: referenced_type_descriptions
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.referenced_type_descriptions.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.referenced_type_descriptions[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::TypeDescription & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_description
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.type_description,
    current_alignment);
  // Member: referenced_type_descriptions
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.referenced_type_descriptions.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.referenced_type_descriptions[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_TypeDescription(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_description
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_IndividualTypeDescription(
    full_bounded,
    current_alignment);
  // Member: referenced_type_descriptions
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _TypeDescription__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeDescription *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TypeDescription__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::msg::TypeDescription *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TypeDescription__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeDescription *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TypeDescription__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::TypeDescription *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TypeDescription__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TypeDescription(&full_bounded, 0);
}

static message_type_support_callbacks_t _TypeDescription__callbacks = {
  "type_description_interfaces::msg",
  "TypeDescription",
  _TypeDescription__cdr_serialize,
  _TypeDescription__cdr_deserialize,
  _TypeDescription__get_serialized_size,
  _TypeDescription__get_serialized_size_with_initial_alignment,
  _TypeDescription__max_serialized_size
};

static rosidl_message_type_support_t _TypeDescription__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TypeDescription__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace type_description_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::msg::TypeDescription>()
{
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_TypeDescription__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, msg, TypeDescription)() {
  return &type_description_interfaces::msg::typesupport_microxrcedds_cpp::_TypeDescription__handle;
}

#ifdef __cplusplus
}
#endif
