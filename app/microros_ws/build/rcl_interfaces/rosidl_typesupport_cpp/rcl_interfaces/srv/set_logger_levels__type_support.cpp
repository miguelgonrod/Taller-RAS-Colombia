// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/SetLoggerLevels.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"
#include "rcl_interfaces/srv/detail/set_logger_levels__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLoggerLevels_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetLoggerLevels_Request_type_support_ids_t;

static const _SetLoggerLevels_Request_type_support_ids_t _SetLoggerLevels_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SetLoggerLevels_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetLoggerLevels_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLoggerLevels_Request_type_support_symbol_names_t _SetLoggerLevels_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rcl_interfaces, srv, SetLoggerLevels_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rcl_interfaces, srv, SetLoggerLevels_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetLoggerLevels_Request)),
  }
};

typedef struct _SetLoggerLevels_Request_type_support_data_t
{
  void * data[3];
} _SetLoggerLevels_Request_type_support_data_t;

static _SetLoggerLevels_Request_type_support_data_t _SetLoggerLevels_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLoggerLevels_Request_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_SetLoggerLevels_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLoggerLevels_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLoggerLevels_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLoggerLevels_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLoggerLevels_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Request>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_cpp::SetLoggerLevels_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rcl_interfaces, srv, SetLoggerLevels_Request)() {
  return get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLoggerLevels_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetLoggerLevels_Response_type_support_ids_t;

static const _SetLoggerLevels_Response_type_support_ids_t _SetLoggerLevels_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SetLoggerLevels_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetLoggerLevels_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLoggerLevels_Response_type_support_symbol_names_t _SetLoggerLevels_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rcl_interfaces, srv, SetLoggerLevels_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rcl_interfaces, srv, SetLoggerLevels_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetLoggerLevels_Response)),
  }
};

typedef struct _SetLoggerLevels_Response_type_support_data_t
{
  void * data[3];
} _SetLoggerLevels_Response_type_support_data_t;

static _SetLoggerLevels_Response_type_support_data_t _SetLoggerLevels_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLoggerLevels_Response_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_SetLoggerLevels_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLoggerLevels_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLoggerLevels_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLoggerLevels_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLoggerLevels_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Response>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_cpp::SetLoggerLevels_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rcl_interfaces, srv, SetLoggerLevels_Response)() {
  return get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLoggerLevels_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetLoggerLevels_Event_type_support_ids_t;

static const _SetLoggerLevels_Event_type_support_ids_t _SetLoggerLevels_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SetLoggerLevels_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetLoggerLevels_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLoggerLevels_Event_type_support_symbol_names_t _SetLoggerLevels_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rcl_interfaces, srv, SetLoggerLevels_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rcl_interfaces, srv, SetLoggerLevels_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetLoggerLevels_Event)),
  }
};

typedef struct _SetLoggerLevels_Event_type_support_data_t
{
  void * data[3];
} _SetLoggerLevels_Event_type_support_data_t;

static _SetLoggerLevels_Event_type_support_data_t _SetLoggerLevels_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLoggerLevels_Event_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_SetLoggerLevels_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLoggerLevels_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLoggerLevels_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLoggerLevels_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLoggerLevels_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Event>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_cpp::SetLoggerLevels_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rcl_interfaces, srv, SetLoggerLevels_Event)() {
  return get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetLoggerLevels_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetLoggerLevels_type_support_ids_t;

static const _SetLoggerLevels_type_support_ids_t _SetLoggerLevels_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _SetLoggerLevels_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetLoggerLevels_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLoggerLevels_type_support_symbol_names_t _SetLoggerLevels_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rcl_interfaces, srv, SetLoggerLevels)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rcl_interfaces, srv, SetLoggerLevels)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetLoggerLevels)),
  }
};

typedef struct _SetLoggerLevels_type_support_data_t
{
  void * data[3];
} _SetLoggerLevels_type_support_data_t;

static _SetLoggerLevels_type_support_data_t _SetLoggerLevels_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLoggerLevels_service_typesupport_map = {
  3,
  "rcl_interfaces",
  &_SetLoggerLevels_service_typesupport_ids.typesupport_identifier[0],
  &_SetLoggerLevels_service_typesupport_symbol_names.symbol_name[0],
  &_SetLoggerLevels_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLoggerLevels_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLoggerLevels_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rcl_interfaces::srv::SetLoggerLevels_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rcl_interfaces::srv::SetLoggerLevels>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rcl_interfaces::srv::SetLoggerLevels>,
  &rcl_interfaces__srv__SetLoggerLevels__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rcl_interfaces::srv::SetLoggerLevels>()
{
  return &::rcl_interfaces::srv::rosidl_typesupport_cpp::SetLoggerLevels_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, rcl_interfaces, srv, SetLoggerLevels)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<rcl_interfaces::srv::SetLoggerLevels>();
}

#ifdef __cplusplus
}
#endif
