// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "complex_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "complex_msgs/msg/detail/nested_msg_test__struct.h"
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"
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

#include "complex_msgs/msg/detail/multi_string_test__functions.h"  // data14

// forward declare type support functions

bool cdr_serialize_complex_msgs__msg__MultiStringTest(
  const complex_msgs__msg__MultiStringTest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_complex_msgs__msg__MultiStringTest(
  eprosima::fastcdr::Cdr & cdr,
  complex_msgs__msg__MultiStringTest * ros_message);

size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_complex_msgs__msg__MultiStringTest(
  const complex_msgs__msg__MultiStringTest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest)();


using _NestedMsgTest__ros_msg_type = complex_msgs__msg__NestedMsgTest;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_serialize_complex_msgs__msg__NestedMsgTest(
  const complex_msgs__msg__NestedMsgTest * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: data1
  {
    cdr << (ros_message->data1 ? true : false);
  }

  // Field name: data2
  {
    cdr << ros_message->data2;
  }

  // Field name: data3
  {
    cdr << ros_message->data3;
  }

  // Field name: data4
  {
    cdr << ros_message->data4;
  }

  // Field name: data5
  {
    cdr << ros_message->data5;
  }

  // Field name: data6
  {
    cdr << ros_message->data6;
  }

  // Field name: data7
  {
    cdr << ros_message->data7;
  }

  // Field name: data8
  {
    cdr << ros_message->data8;
  }

  // Field name: data9
  {
    cdr << ros_message->data9;
  }

  // Field name: data10
  {
    cdr << ros_message->data10;
  }

  // Field name: data11
  {
    cdr << ros_message->data11;
  }

  // Field name: data12
  {
    cdr << ros_message->data12;
  }

  // Field name: data13
  {
    cdr << ros_message->data13;
  }

  // Field name: data14
  {
    cdr_serialize_complex_msgs__msg__MultiStringTest(
      &ros_message->data14, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_deserialize_complex_msgs__msg__NestedMsgTest(
  eprosima::fastcdr::Cdr & cdr,
  complex_msgs__msg__NestedMsgTest * ros_message)
{
  // Field name: data1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data1 = tmp ? true : false;
  }

  // Field name: data2
  {
    cdr >> ros_message->data2;
  }

  // Field name: data3
  {
    cdr >> ros_message->data3;
  }

  // Field name: data4
  {
    cdr >> ros_message->data4;
  }

  // Field name: data5
  {
    cdr >> ros_message->data5;
  }

  // Field name: data6
  {
    cdr >> ros_message->data6;
  }

  // Field name: data7
  {
    cdr >> ros_message->data7;
  }

  // Field name: data8
  {
    cdr >> ros_message->data8;
  }

  // Field name: data9
  {
    cdr >> ros_message->data9;
  }

  // Field name: data10
  {
    cdr >> ros_message->data10;
  }

  // Field name: data11
  {
    cdr >> ros_message->data11;
  }

  // Field name: data12
  {
    cdr >> ros_message->data12;
  }

  // Field name: data13
  {
    cdr >> ros_message->data13;
  }

  // Field name: data14
  {
    cdr_deserialize_complex_msgs__msg__MultiStringTest(cdr, &ros_message->data14);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__NestedMsgTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NestedMsgTest__ros_msg_type * ros_message = static_cast<const _NestedMsgTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: data1
  {
    size_t item_size = sizeof(ros_message->data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data2
  {
    size_t item_size = sizeof(ros_message->data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data3
  {
    size_t item_size = sizeof(ros_message->data3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data4
  {
    size_t item_size = sizeof(ros_message->data4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data5
  {
    size_t item_size = sizeof(ros_message->data5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data6
  {
    size_t item_size = sizeof(ros_message->data6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data7
  {
    size_t item_size = sizeof(ros_message->data7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data8
  {
    size_t item_size = sizeof(ros_message->data8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data9
  {
    size_t item_size = sizeof(ros_message->data9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data10
  {
    size_t item_size = sizeof(ros_message->data10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data11
  {
    size_t item_size = sizeof(ros_message->data11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data12
  {
    size_t item_size = sizeof(ros_message->data12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data13
  {
    size_t item_size = sizeof(ros_message->data13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data14
  current_alignment += get_serialized_size_complex_msgs__msg__MultiStringTest(
    &(ros_message->data14), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__NestedMsgTest(
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

  // Field name: data1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data6
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data7
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data8
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: data9
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: data10
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data11
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data12
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data13
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data14
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_complex_msgs__msg__MultiStringTest(
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
    using DataType = complex_msgs__msg__NestedMsgTest;
    is_plain =
      (
      offsetof(DataType, data14) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
bool cdr_serialize_key_complex_msgs__msg__NestedMsgTest(
  const complex_msgs__msg__NestedMsgTest * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: data1
  {
    cdr << (ros_message->data1 ? true : false);
  }

  // Field name: data2
  {
    cdr << ros_message->data2;
  }

  // Field name: data3
  {
    cdr << ros_message->data3;
  }

  // Field name: data4
  {
    cdr << ros_message->data4;
  }

  // Field name: data5
  {
    cdr << ros_message->data5;
  }

  // Field name: data6
  {
    cdr << ros_message->data6;
  }

  // Field name: data7
  {
    cdr << ros_message->data7;
  }

  // Field name: data8
  {
    cdr << ros_message->data8;
  }

  // Field name: data9
  {
    cdr << ros_message->data9;
  }

  // Field name: data10
  {
    cdr << ros_message->data10;
  }

  // Field name: data11
  {
    cdr << ros_message->data11;
  }

  // Field name: data12
  {
    cdr << ros_message->data12;
  }

  // Field name: data13
  {
    cdr << ros_message->data13;
  }

  // Field name: data14
  {
    cdr_serialize_key_complex_msgs__msg__MultiStringTest(
      &ros_message->data14, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_key_complex_msgs__msg__NestedMsgTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NestedMsgTest__ros_msg_type * ros_message = static_cast<const _NestedMsgTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: data1
  {
    size_t item_size = sizeof(ros_message->data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data2
  {
    size_t item_size = sizeof(ros_message->data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data3
  {
    size_t item_size = sizeof(ros_message->data3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data4
  {
    size_t item_size = sizeof(ros_message->data4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data5
  {
    size_t item_size = sizeof(ros_message->data5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data6
  {
    size_t item_size = sizeof(ros_message->data6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data7
  {
    size_t item_size = sizeof(ros_message->data7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data8
  {
    size_t item_size = sizeof(ros_message->data8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data9
  {
    size_t item_size = sizeof(ros_message->data9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data10
  {
    size_t item_size = sizeof(ros_message->data10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data11
  {
    size_t item_size = sizeof(ros_message->data11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data12
  {
    size_t item_size = sizeof(ros_message->data12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data13
  {
    size_t item_size = sizeof(ros_message->data13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data14
  current_alignment += get_serialized_size_key_complex_msgs__msg__MultiStringTest(
    &(ros_message->data14), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_key_complex_msgs__msg__NestedMsgTest(
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
  // Field name: data1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data6
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data7
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data8
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: data9
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: data10
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data11
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data12
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data13
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: data14
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_complex_msgs__msg__MultiStringTest(
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
    using DataType = complex_msgs__msg__NestedMsgTest;
    is_plain =
      (
      offsetof(DataType, data14) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NestedMsgTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const complex_msgs__msg__NestedMsgTest * ros_message = static_cast<const complex_msgs__msg__NestedMsgTest *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_complex_msgs__msg__NestedMsgTest(ros_message, cdr);
}

static bool _NestedMsgTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  complex_msgs__msg__NestedMsgTest * ros_message = static_cast<complex_msgs__msg__NestedMsgTest *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_complex_msgs__msg__NestedMsgTest(cdr, ros_message);
}

static uint32_t _NestedMsgTest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_complex_msgs__msg__NestedMsgTest(
      untyped_ros_message, 0));
}

static size_t _NestedMsgTest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_complex_msgs__msg__NestedMsgTest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NestedMsgTest = {
  "complex_msgs::msg",
  "NestedMsgTest",
  _NestedMsgTest__cdr_serialize,
  _NestedMsgTest__cdr_deserialize,
  _NestedMsgTest__get_serialized_size,
  _NestedMsgTest__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NestedMsgTest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NestedMsgTest,
  get_message_typesupport_handle_function,
  &complex_msgs__msg__NestedMsgTest__get_type_hash,
  &complex_msgs__msg__NestedMsgTest__get_type_description,
  &complex_msgs__msg__NestedMsgTest__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, NestedMsgTest)() {
  return &_NestedMsgTest__type_support;
}

#if defined(__cplusplus)
}
#endif
