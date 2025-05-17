// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/arrays__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/srv/detail/arrays__struct.h"
#include "test_msgs/srv/detail/arrays__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string_values, string_values_default
#include "rosidl_runtime_c/string_functions.h"  // string_values, string_values_default
#include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_values
#include "test_msgs/msg/detail/constants__functions.h"  // constants_values
#include "test_msgs/msg/detail/defaults__functions.h"  // defaults_values

// forward declare type support functions

bool cdr_serialize_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__BasicTypes(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__BasicTypes * ros_message);

size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();

bool cdr_serialize_test_msgs__msg__Constants(
  const test_msgs__msg__Constants * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__Constants(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Constants * ros_message);

size_t get_serialized_size_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__Constants(
  const test_msgs__msg__Constants * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants)();

bool cdr_serialize_test_msgs__msg__Defaults(
  const test_msgs__msg__Defaults * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__Defaults(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Defaults * ros_message);

size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__Defaults(
  const test_msgs__msg__Defaults * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults)();


using _Arrays_Request__ros_msg_type = test_msgs__srv__Arrays_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__srv__Arrays_Request(
  const test_msgs__srv__Arrays_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__BasicTypes(
        &array_ptr[i], cdr);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Constants(
        &array_ptr[i], cdr);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Defaults(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__srv__Arrays_Request(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__srv__Arrays_Request * ros_message)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values'\n");
        return false;
      }
    }
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__BasicTypes(cdr, &array_ptr[i]);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Constants(cdr, &array_ptr[i]);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Defaults(cdr, &array_ptr[i]);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values_default'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__Arrays_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Request__ros_msg_type * ros_message = static_cast<const _Arrays_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bool_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__Arrays_Request(
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

  // Field name: bool_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__Arrays_Request;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__srv__Arrays_Request(
  const test_msgs__srv__Arrays_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__BasicTypes(
        &array_ptr[i], cdr);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Constants(
        &array_ptr[i], cdr);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Defaults(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__srv__Arrays_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Request__ros_msg_type * ros_message = static_cast<const _Arrays_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bool_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__srv__Arrays_Request(
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
  // Field name: bool_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__Arrays_Request;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Arrays_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__srv__Arrays_Request * ros_message = static_cast<const test_msgs__srv__Arrays_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__srv__Arrays_Request(ros_message, cdr);
}

static bool _Arrays_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__srv__Arrays_Request * ros_message = static_cast<test_msgs__srv__Arrays_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__srv__Arrays_Request(cdr, ros_message);
}

static uint32_t _Arrays_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__srv__Arrays_Request(
      untyped_ros_message, 0));
}

static size_t _Arrays_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__srv__Arrays_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Arrays_Request = {
  "test_msgs::srv",
  "Arrays_Request",
  _Arrays_Request__cdr_serialize,
  _Arrays_Request__cdr_deserialize,
  _Arrays_Request__get_serialized_size,
  _Arrays_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Arrays_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arrays_Request,
  get_message_typesupport_handle_function,
  &test_msgs__srv__Arrays_Request__get_type_hash,
  &test_msgs__srv__Arrays_Request__get_type_description,
  &test_msgs__srv__Arrays_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Request)() {
  return &_Arrays_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // string_values, string_values_default
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // string_values, string_values_default
// already included above
// #include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_values
// already included above
// #include "test_msgs/msg/detail/constants__functions.h"  // constants_values
// already included above
// #include "test_msgs/msg/detail/defaults__functions.h"  // defaults_values

// forward declare type support functions

bool cdr_serialize_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__BasicTypes(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__BasicTypes * ros_message);

size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__BasicTypes(
  const test_msgs__msg__BasicTypes * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();

bool cdr_serialize_test_msgs__msg__Constants(
  const test_msgs__msg__Constants * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__Constants(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Constants * ros_message);

size_t get_serialized_size_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__Constants(
  const test_msgs__msg__Constants * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants)();

bool cdr_serialize_test_msgs__msg__Defaults(
  const test_msgs__msg__Defaults * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__Defaults(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Defaults * ros_message);

size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__Defaults(
  const test_msgs__msg__Defaults * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults)();


using _Arrays_Response__ros_msg_type = test_msgs__srv__Arrays_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__srv__Arrays_Response(
  const test_msgs__srv__Arrays_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__BasicTypes(
        &array_ptr[i], cdr);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Constants(
        &array_ptr[i], cdr);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Defaults(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__srv__Arrays_Response(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__srv__Arrays_Response * ros_message)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values'\n");
        return false;
      }
    }
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__BasicTypes(cdr, &array_ptr[i]);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Constants(cdr, &array_ptr[i]);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Defaults(cdr, &array_ptr[i]);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values_default'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__Arrays_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Response__ros_msg_type * ros_message = static_cast<const _Arrays_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bool_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__Arrays_Response(
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

  // Field name: bool_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__Arrays_Response;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__srv__Arrays_Response(
  const test_msgs__srv__Arrays_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: basic_types_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__BasicTypes(
        &array_ptr[i], cdr);
    }
  }

  // Field name: constants_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Constants(
        &array_ptr[i], cdr);
    }
  }

  // Field name: defaults_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Defaults(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__srv__Arrays_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Response__ros_msg_type * ros_message = static_cast<const _Arrays_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: bool_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__srv__Arrays_Response(
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
  // Field name: bool_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: basic_types_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: constants_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: defaults_values
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bool_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: byte_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: char_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: float32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: float64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: int8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: uint8_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: int16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: uint16_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: int32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: uint32_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: int64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uint64_values_default
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: string_values_default
  {
    size_t array_size = 3;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__Arrays_Response;
    is_plain =
      (
      offsetof(DataType, string_values_default) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Arrays_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__srv__Arrays_Response * ros_message = static_cast<const test_msgs__srv__Arrays_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__srv__Arrays_Response(ros_message, cdr);
}

static bool _Arrays_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__srv__Arrays_Response * ros_message = static_cast<test_msgs__srv__Arrays_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__srv__Arrays_Response(cdr, ros_message);
}

static uint32_t _Arrays_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__srv__Arrays_Response(
      untyped_ros_message, 0));
}

static size_t _Arrays_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__srv__Arrays_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Arrays_Response = {
  "test_msgs::srv",
  "Arrays_Response",
  _Arrays_Response__cdr_serialize,
  _Arrays_Response__cdr_deserialize,
  _Arrays_Response__get_serialized_size,
  _Arrays_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Arrays_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arrays_Response,
  get_message_typesupport_handle_function,
  &test_msgs__srv__Arrays_Response__get_type_hash,
  &test_msgs__srv__Arrays_Response__get_type_description,
  &test_msgs__srv__Arrays_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Response)() {
  return &_Arrays_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_test_msgs__srv__Arrays_Request(
  const test_msgs__srv__Arrays_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__srv__Arrays_Request(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__srv__Arrays_Request * ros_message);

size_t get_serialized_size_test_msgs__srv__Arrays_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__srv__Arrays_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__srv__Arrays_Request(
  const test_msgs__srv__Arrays_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__srv__Arrays_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__srv__Arrays_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Request)();

bool cdr_serialize_test_msgs__srv__Arrays_Response(
  const test_msgs__srv__Arrays_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__srv__Arrays_Response(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__srv__Arrays_Response * ros_message);

size_t get_serialized_size_test_msgs__srv__Arrays_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__srv__Arrays_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__srv__Arrays_Response(
  const test_msgs__srv__Arrays_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__srv__Arrays_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__srv__Arrays_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Response)();


using _Arrays_Event__ros_msg_type = test_msgs__srv__Arrays_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__srv__Arrays_Event(
  const test_msgs__srv__Arrays_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__srv__Arrays_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__srv__Arrays_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__srv__Arrays_Event(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__srv__Arrays_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      test_msgs__srv__Arrays_Request__Sequence__fini(&ros_message->request);
    }
    if (!test_msgs__srv__Arrays_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__srv__Arrays_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      test_msgs__srv__Arrays_Response__Sequence__fini(&ros_message->response);
    }
    if (!test_msgs__srv__Arrays_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__srv__Arrays_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__Arrays_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Event__ros_msg_type * ros_message = static_cast<const _Arrays_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__srv__Arrays_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__srv__Arrays_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__Arrays_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__srv__Arrays_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__srv__Arrays_Response(
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
    using DataType = test_msgs__srv__Arrays_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__srv__Arrays_Event(
  const test_msgs__srv__Arrays_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__srv__Arrays_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__srv__Arrays_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__srv__Arrays_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays_Event__ros_msg_type * ros_message = static_cast<const _Arrays_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__srv__Arrays_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__srv__Arrays_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__srv__Arrays_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__srv__Arrays_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__srv__Arrays_Response(
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
    using DataType = test_msgs__srv__Arrays_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Arrays_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__srv__Arrays_Event * ros_message = static_cast<const test_msgs__srv__Arrays_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__srv__Arrays_Event(ros_message, cdr);
}

static bool _Arrays_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__srv__Arrays_Event * ros_message = static_cast<test_msgs__srv__Arrays_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__srv__Arrays_Event(cdr, ros_message);
}

static uint32_t _Arrays_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__srv__Arrays_Event(
      untyped_ros_message, 0));
}

static size_t _Arrays_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__srv__Arrays_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Arrays_Event = {
  "test_msgs::srv",
  "Arrays_Event",
  _Arrays_Event__cdr_serialize,
  _Arrays_Event__cdr_deserialize,
  _Arrays_Event__get_serialized_size,
  _Arrays_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Arrays_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arrays_Event,
  get_message_typesupport_handle_function,
  &test_msgs__srv__Arrays_Event__get_type_hash,
  &test_msgs__srv__Arrays_Event__get_type_description,
  &test_msgs__srv__Arrays_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Event)() {
  return &_Arrays_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/srv/arrays.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Arrays__callbacks = {
  "test_msgs::srv",
  "Arrays",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays_Response)(),
};

static rosidl_service_type_support_t Arrays__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Arrays__callbacks,
  get_service_typesupport_handle_function,
  &_Arrays_Request__type_support,
  &_Arrays_Response__type_support,
  &_Arrays_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    srv,
    Arrays
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    srv,
    Arrays
  ),
  &test_msgs__srv__Arrays__get_type_hash,
  &test_msgs__srv__Arrays__get_type_description,
  &test_msgs__srv__Arrays__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, Arrays)() {
  return &Arrays__handle;
}

#if defined(__cplusplus)
}
#endif
