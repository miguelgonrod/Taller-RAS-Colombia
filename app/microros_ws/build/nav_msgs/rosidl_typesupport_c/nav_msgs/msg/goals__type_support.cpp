// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from nav_msgs:msg/Goals.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav_msgs/msg/detail/goals__struct.h"
#include "nav_msgs/msg/detail/goals__type_support.h"
#include "nav_msgs/msg/detail/goals__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Goals_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Goals_type_support_ids_t;

static const _Goals_type_support_ids_t _Goals_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Goals_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Goals_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goals_type_support_symbol_names_t _Goals_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Goals)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Goals)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, Goals)),
  }
};

typedef struct _Goals_type_support_data_t
{
  void * data[3];
} _Goals_type_support_data_t;

static _Goals_type_support_data_t _Goals_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goals_message_typesupport_map = {
  3,
  "nav_msgs",
  &_Goals_message_typesupport_ids.typesupport_identifier[0],
  &_Goals_message_typesupport_symbol_names.symbol_name[0],
  &_Goals_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goals_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goals_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &nav_msgs__msg__Goals__get_type_hash,
  &nav_msgs__msg__Goals__get_type_description,
  &nav_msgs__msg__Goals__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav_msgs, msg, Goals)() {
  return &::nav_msgs::msg::rosidl_typesupport_c::Goals_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
