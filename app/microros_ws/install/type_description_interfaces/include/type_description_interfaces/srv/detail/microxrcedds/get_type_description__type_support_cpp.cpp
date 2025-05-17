// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:srv/GetTypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/srv/detail/get_type_description__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "type_description_interfaces/srv/detail/get_type_description__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::srv::GetTypeDescription_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type_name
  rv = ucdr_serialize_string(cdr, ros_message.type_name.c_str());
  // Member: type_hash
  rv = ucdr_serialize_string(cdr, ros_message.type_hash.c_str());
  // Member: include_type_sources
  rv = ucdr_serialize_bool(cdr, ros_message.include_type_sources);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  type_description_interfaces::srv::GetTypeDescription_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type_name
  ros_message.type_name.resize(ros_message.type_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.type_name[0], ros_message.type_name.capacity());
  if (rv) {
    ros_message.type_name.resize(std::strlen(&ros_message.type_name[0]));
  }
  // Member: type_hash
  ros_message.type_hash.resize(ros_message.type_hash.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.type_hash[0], ros_message.type_hash.capacity());
  if (rv) {
    ros_message.type_hash.resize(std::strlen(&ros_message.type_hash[0]));
  }
  // Member: include_type_sources
  rv = ucdr_deserialize_bool(cdr, &ros_message.include_type_sources);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::srv::GetTypeDescription_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.type_name.size() + 1;
  // Member: type_hash
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.type_hash.size() + 1;
  // Member: include_type_sources
  {
    const size_t item_size = sizeof(ros_message.include_type_sources);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_GetTypeDescription_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  *full_bounded = false;
  // Member: type_hash
  *full_bounded = false;
  // Member: include_type_sources
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _GetTypeDescription_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetTypeDescription_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::srv::GetTypeDescription_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetTypeDescription_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetTypeDescription_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetTypeDescription_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetTypeDescription_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetTypeDescription_Request__callbacks = {
  "type_description_interfaces::srv",
  "GetTypeDescription_Request",
  _GetTypeDescription_Request__cdr_serialize,
  _GetTypeDescription_Request__cdr_deserialize,
  _GetTypeDescription_Request__get_serialized_size,
  _GetTypeDescription_Request__get_serialized_size_with_initial_alignment,
  _GetTypeDescription_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetTypeDescription_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetTypeDescription_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Request>()
{
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Request)() {
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace type_description_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const type_description_interfaces::msg::TypeDescription &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::TypeDescription &);

size_t get_serialized_size(
  const type_description_interfaces::msg::TypeDescription &,
  size_t current_alignment);

size_t
max_serialized_size_TypeDescription(
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
  const type_description_interfaces::msg::TypeSource &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::TypeSource &);

size_t get_serialized_size(
  const type_description_interfaces::msg::TypeSource &,
  size_t current_alignment);

size_t
max_serialized_size_TypeSource(
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
  const type_description_interfaces::msg::KeyValue &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  type_description_interfaces::msg::KeyValue &);

size_t get_serialized_size(
  const type_description_interfaces::msg::KeyValue &,
  size_t current_alignment);

size_t
max_serialized_size_KeyValue(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace type_description_interfaces


namespace type_description_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::srv::GetTypeDescription_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: successful
  rv = ucdr_serialize_bool(cdr, ros_message.successful);
  // Member: failure_reason
  rv = ucdr_serialize_string(cdr, ros_message.failure_reason.c_str());
  // Member: type_description
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.type_description,
    cdr);
  // Member: type_sources
  {
    size_t size = ros_message.type_sources.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.type_sources[i],
        cdr);
      i++;
    }
  }
  // Member: extra_information
  {
    size_t size = ros_message.extra_information.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.extra_information[i],
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
  type_description_interfaces::srv::GetTypeDescription_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: successful
  rv = ucdr_deserialize_bool(cdr, &ros_message.successful);
  // Member: failure_reason
  ros_message.failure_reason.resize(ros_message.failure_reason.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.failure_reason[0], ros_message.failure_reason.capacity());
  if (rv) {
    ros_message.failure_reason.resize(std::strlen(&ros_message.failure_reason[0]));
  }
  // Member: type_description
  rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.type_description);
  // Member: type_sources
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.type_sources.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.type_sources[i]);
      i++;
    }
  }
  // Member: extra_information
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.extra_information.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = type_description_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.extra_information[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::srv::GetTypeDescription_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  {
    const size_t item_size = sizeof(ros_message.successful);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: failure_reason
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.failure_reason.size() + 1;
  // Member: type_description
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.type_description,
    current_alignment);
  // Member: type_sources
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.type_sources.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.type_sources[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: extra_information
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.extra_information.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = type_description_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.extra_information[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_GetTypeDescription_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: successful
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: failure_reason
  *full_bounded = false;
  // Member: type_description
  current_alignment += type_description_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_TypeDescription(
    full_bounded,
    current_alignment);
  // Member: type_sources
  {
    *full_bounded = false;
  }
  // Member: extra_information
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _GetTypeDescription_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetTypeDescription_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::srv::GetTypeDescription_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetTypeDescription_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetTypeDescription_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const type_description_interfaces::srv::GetTypeDescription_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetTypeDescription_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetTypeDescription_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetTypeDescription_Response__callbacks = {
  "type_description_interfaces::srv",
  "GetTypeDescription_Response",
  _GetTypeDescription_Response__cdr_serialize,
  _GetTypeDescription_Response__cdr_deserialize,
  _GetTypeDescription_Response__get_serialized_size,
  _GetTypeDescription_Response__get_serialized_size_with_initial_alignment,
  _GetTypeDescription_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetTypeDescription_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetTypeDescription_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Response>()
{
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Response)() {
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace type_description_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _GetTypeDescription__callbacks = {
  "type_description_interfaces::srv",
  "GetTypeDescription",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Response),
};

static rosidl_service_type_support_t _GetTypeDescription__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetTypeDescription__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_type_description_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<type_description_interfaces::srv::GetTypeDescription>()
{
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription)() {
  return &type_description_interfaces::srv::typesupport_microxrcedds_cpp::_GetTypeDescription__handle;
}

#ifdef __cplusplus
}
#endif
