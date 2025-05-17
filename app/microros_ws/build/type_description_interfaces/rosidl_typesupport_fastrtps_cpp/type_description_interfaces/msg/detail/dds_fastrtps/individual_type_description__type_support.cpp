// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:msg/IndividualTypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/individual_type_description__rosidl_typesupport_fastrtps_cpp.hpp"
#include "type_description_interfaces/msg/detail/individual_type_description__functions.h"
#include "type_description_interfaces/msg/detail/individual_type_description__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace type_description_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const type_description_interfaces::msg::Field &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  type_description_interfaces::msg::Field &);
size_t get_serialized_size(
  const type_description_interfaces::msg::Field &,
  size_t current_alignment);
size_t
max_serialized_size_Field(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const type_description_interfaces::msg::Field &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const type_description_interfaces::msg::Field &,
  size_t current_alignment);
size_t
max_serialized_size_key_Field(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace type_description_interfaces


namespace type_description_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::msg::IndividualTypeDescription & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type_name
  cdr << ros_message.type_name;

  // Member: fields
  {
    size_t size = ros_message.fields.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      type_description_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.fields[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces::msg::IndividualTypeDescription & ros_message)
{
  // Member: type_name
  cdr >> ros_message.type_name;

  // Member: fields
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.fields.resize(size);
    for (size_t i = 0; i < size; i++) {
      type_description_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.fields[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::IndividualTypeDescription & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type_name.size() + 1);

  // Member: fields
  {
    size_t array_size = ros_message.fields.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        type_description_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.fields[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_IndividualTypeDescription(
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

  // Member: type_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        255 +
        1;
    }
  }
  // Member: fields
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
      size_t inner_size =
        type_description_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Field(
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
    using DataType = type_description_interfaces::msg::IndividualTypeDescription;
    is_plain =
      (
      offsetof(DataType, fields) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_serialize_key(
  const type_description_interfaces::msg::IndividualTypeDescription & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type_name
  cdr << ros_message.type_name;

  // Member: fields
  {
    size_t size = ros_message.fields.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      type_description_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.fields[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
get_serialized_size_key(
  const type_description_interfaces::msg::IndividualTypeDescription & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type_name.size() + 1);

  // Member: fields
  {
    size_t array_size = ros_message.fields.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        type_description_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.fields[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_key_IndividualTypeDescription(
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

  // Member: type_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        255 +
        1;
    }
  }

  // Member: fields
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
      size_t inner_size =
        type_description_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Field(
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
    using DataType = type_description_interfaces::msg::IndividualTypeDescription;
    is_plain =
      (
      offsetof(DataType, fields) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _IndividualTypeDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::IndividualTypeDescription *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IndividualTypeDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::msg::IndividualTypeDescription *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IndividualTypeDescription__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::IndividualTypeDescription *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IndividualTypeDescription__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IndividualTypeDescription(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IndividualTypeDescription__callbacks = {
  "type_description_interfaces::msg",
  "IndividualTypeDescription",
  _IndividualTypeDescription__cdr_serialize,
  _IndividualTypeDescription__cdr_deserialize,
  _IndividualTypeDescription__get_serialized_size,
  _IndividualTypeDescription__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _IndividualTypeDescription__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IndividualTypeDescription__callbacks,
  get_message_typesupport_handle_function,
  &type_description_interfaces__msg__IndividualTypeDescription__get_type_hash,
  &type_description_interfaces__msg__IndividualTypeDescription__get_type_description,
  &type_description_interfaces__msg__IndividualTypeDescription__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace type_description_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::msg::IndividualTypeDescription>()
{
  return &type_description_interfaces::msg::typesupport_fastrtps_cpp::_IndividualTypeDescription__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, msg, IndividualTypeDescription)() {
  return &type_description_interfaces::msg::typesupport_fastrtps_cpp::_IndividualTypeDescription__handle;
}

#ifdef __cplusplus
}
#endif
