// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "diagnostic_msgs/srv/add_diagnostics.hpp"


#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "diagnostic_msgs/srv/detail/add_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddDiagnostics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: load_namespace
  {
    out << "load_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.load_namespace, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.load_namespace, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDiagnostics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::AddDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::AddDiagnostics_Request & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics_Request>()
{
  return "diagnostic_msgs::srv::AddDiagnostics_Request";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics_Request>()
{
  return "diagnostic_msgs/srv/AddDiagnostics_Request";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddDiagnostics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDiagnostics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDiagnostics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::AddDiagnostics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::AddDiagnostics_Response & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics_Response>()
{
  return "diagnostic_msgs::srv::AddDiagnostics_Response";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics_Response>()
{
  return "diagnostic_msgs/srv/AddDiagnostics_Response";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddDiagnostics_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDiagnostics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDiagnostics_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::AddDiagnostics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::AddDiagnostics_Event & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics_Event>()
{
  return "diagnostic_msgs::srv::AddDiagnostics_Event";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics_Event>()
{
  return "diagnostic_msgs/srv/AddDiagnostics_Event";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Event>
  : std::integral_constant<bool, has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Request>::value && has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<diagnostic_msgs::srv::AddDiagnostics_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics>()
{
  return "diagnostic_msgs::srv::AddDiagnostics";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics>()
{
  return "diagnostic_msgs/srv/AddDiagnostics";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics>
  : std::integral_constant<
    bool,
    has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Request>::value &&
    has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Response>::value
  >
{
};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics>
  : std::integral_constant<
    bool,
    has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Request>::value &&
    has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Response>::value
  >
{
};

template<>
struct is_service<diagnostic_msgs::srv::AddDiagnostics>
  : std::true_type
{
};

template<>
struct is_service_request<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_
