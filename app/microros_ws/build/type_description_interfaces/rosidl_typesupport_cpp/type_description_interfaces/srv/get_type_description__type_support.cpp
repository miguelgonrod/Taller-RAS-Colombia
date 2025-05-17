// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:srv/GetTypeDescription.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "type_description_interfaces/srv/detail/get_type_description__functions.h"
#include "type_description_interfaces/srv/detail/get_type_description__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTypeDescription_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetTypeDescription_Request_type_support_ids_t;

static const _GetTypeDescription_Request_type_support_ids_t _GetTypeDescription_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetTypeDescription_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Request_type_support_symbol_names_t _GetTypeDescription_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, srv, GetTypeDescription_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, type_description_interfaces, srv, GetTypeDescription_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Request)),
  }
};

typedef struct _GetTypeDescription_Request_type_support_data_t
{
  void * data[3];
} _GetTypeDescription_Request_type_support_data_t;

static _GetTypeDescription_Request_type_support_data_t _GetTypeDescription_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTypeDescription_Request_message_typesupport_map = {
  3,
  "type_description_interfaces",
  &_GetTypeDescription_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetTypeDescription_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Request>()
{
  return &::type_description_interfaces::srv::rosidl_typesupport_cpp::GetTypeDescription_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, type_description_interfaces, srv, GetTypeDescription_Request)() {
  return get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Request>();
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
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.hpp"
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

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTypeDescription_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetTypeDescription_Response_type_support_ids_t;

static const _GetTypeDescription_Response_type_support_ids_t _GetTypeDescription_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetTypeDescription_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Response_type_support_symbol_names_t _GetTypeDescription_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, srv, GetTypeDescription_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, type_description_interfaces, srv, GetTypeDescription_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Response)),
  }
};

typedef struct _GetTypeDescription_Response_type_support_data_t
{
  void * data[3];
} _GetTypeDescription_Response_type_support_data_t;

static _GetTypeDescription_Response_type_support_data_t _GetTypeDescription_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTypeDescription_Response_message_typesupport_map = {
  3,
  "type_description_interfaces",
  &_GetTypeDescription_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetTypeDescription_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Response>()
{
  return &::type_description_interfaces::srv::rosidl_typesupport_cpp::GetTypeDescription_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, type_description_interfaces, srv, GetTypeDescription_Response)() {
  return get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Response>();
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
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.hpp"
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

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTypeDescription_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetTypeDescription_Event_type_support_ids_t;

static const _GetTypeDescription_Event_type_support_ids_t _GetTypeDescription_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetTypeDescription_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Event_type_support_symbol_names_t _GetTypeDescription_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, srv, GetTypeDescription_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, type_description_interfaces, srv, GetTypeDescription_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription_Event)),
  }
};

typedef struct _GetTypeDescription_Event_type_support_data_t
{
  void * data[3];
} _GetTypeDescription_Event_type_support_data_t;

static _GetTypeDescription_Event_type_support_data_t _GetTypeDescription_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTypeDescription_Event_message_typesupport_map = {
  3,
  "type_description_interfaces",
  &_GetTypeDescription_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetTypeDescription_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Event>()
{
  return &::type_description_interfaces::srv::rosidl_typesupport_cpp::GetTypeDescription_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, type_description_interfaces, srv, GetTypeDescription_Event)() {
  return get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Event>();
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
// #include "type_description_interfaces/srv/detail/get_type_description__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTypeDescription_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetTypeDescription_type_support_ids_t;

static const _GetTypeDescription_type_support_ids_t _GetTypeDescription_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetTypeDescription_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_type_support_symbol_names_t _GetTypeDescription_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, srv, GetTypeDescription)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, type_description_interfaces, srv, GetTypeDescription)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, type_description_interfaces, srv, GetTypeDescription)),
  }
};

typedef struct _GetTypeDescription_type_support_data_t
{
  void * data[3];
} _GetTypeDescription_type_support_data_t;

static _GetTypeDescription_type_support_data_t _GetTypeDescription_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTypeDescription_service_typesupport_map = {
  3,
  "type_description_interfaces",
  &_GetTypeDescription_service_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_service_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetTypeDescription_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<type_description_interfaces::srv::GetTypeDescription_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<type_description_interfaces::srv::GetTypeDescription>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<type_description_interfaces::srv::GetTypeDescription>,
  &type_description_interfaces__srv__GetTypeDescription__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace type_description_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<type_description_interfaces::srv::GetTypeDescription>()
{
  return &::type_description_interfaces::srv::rosidl_typesupport_cpp::GetTypeDescription_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, type_description_interfaces, srv, GetTypeDescription)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<type_description_interfaces::srv::GetTypeDescription>();
}

#ifdef __cplusplus
}
#endif
