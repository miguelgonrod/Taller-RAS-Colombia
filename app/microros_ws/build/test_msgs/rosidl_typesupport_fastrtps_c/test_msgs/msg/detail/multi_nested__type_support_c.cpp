// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/multi_nested__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"
#include "test_msgs/msg/detail/multi_nested__functions.h"
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

#include "test_msgs/msg/detail/arrays__functions.h"  // array_of_arrays, bounded_sequence_of_arrays, unbounded_sequence_of_arrays
#include "test_msgs/msg/detail/bounded_sequences__functions.h"  // array_of_bounded_sequences, bounded_sequence_of_bounded_sequences, unbounded_sequence_of_bounded_sequences
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"  // array_of_unbounded_sequences, bounded_sequence_of_unbounded_sequences, unbounded_sequence_of_unbounded_sequences

// forward declare type support functions

bool cdr_serialize_test_msgs__msg__Arrays(
  const test_msgs__msg__Arrays * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__Arrays(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__Arrays * ros_message);

size_t get_serialized_size_test_msgs__msg__Arrays(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Arrays(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__Arrays(
  const test_msgs__msg__Arrays * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__Arrays(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__Arrays(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays)();

bool cdr_serialize_test_msgs__msg__BoundedSequences(
  const test_msgs__msg__BoundedSequences * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__BoundedSequences(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__BoundedSequences * ros_message);

size_t get_serialized_size_test_msgs__msg__BoundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BoundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__BoundedSequences(
  const test_msgs__msg__BoundedSequences * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__BoundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__BoundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences)();

bool cdr_serialize_test_msgs__msg__UnboundedSequences(
  const test_msgs__msg__UnboundedSequences * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_test_msgs__msg__UnboundedSequences(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__UnboundedSequences * ros_message);

size_t get_serialized_size_test_msgs__msg__UnboundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__UnboundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_test_msgs__msg__UnboundedSequences(
  const test_msgs__msg__UnboundedSequences * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_test_msgs__msg__UnboundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_test_msgs__msg__UnboundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences)();


using _MultiNested__ros_msg_type = test_msgs__msg__MultiNested;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_test_msgs__msg__MultiNested(
  const test_msgs__msg__MultiNested * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: array_of_arrays
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    size_t size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_deserialize_test_msgs__msg__MultiNested(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs__msg__MultiNested * ros_message)
{
  // Field name: array_of_arrays
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Arrays(cdr, &array_ptr[i]);
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__BoundedSequences(cdr, &array_ptr[i]);
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__UnboundedSequences(cdr, &array_ptr[i]);
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_arrays.data) {
      test_msgs__msg__Arrays__Sequence__fini(&ros_message->bounded_sequence_of_arrays);
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&ros_message->bounded_sequence_of_arrays, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_sequence_of_arrays'");
      return false;
    }
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Arrays(cdr, &array_ptr[i]);
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_bounded_sequences.data) {
      test_msgs__msg__BoundedSequences__Sequence__fini(&ros_message->bounded_sequence_of_bounded_sequences);
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&ros_message->bounded_sequence_of_bounded_sequences, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_sequence_of_bounded_sequences'");
      return false;
    }
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__BoundedSequences(cdr, &array_ptr[i]);
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_unbounded_sequences.data) {
      test_msgs__msg__UnboundedSequences__Sequence__fini(&ros_message->bounded_sequence_of_unbounded_sequences);
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&ros_message->bounded_sequence_of_unbounded_sequences, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_sequence_of_unbounded_sequences'");
      return false;
    }
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__UnboundedSequences(cdr, &array_ptr[i]);
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_arrays.data) {
      test_msgs__msg__Arrays__Sequence__fini(&ros_message->unbounded_sequence_of_arrays);
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&ros_message->unbounded_sequence_of_arrays, size)) {
      fprintf(stderr, "failed to create array for field 'unbounded_sequence_of_arrays'");
      return false;
    }
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__Arrays(cdr, &array_ptr[i]);
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_bounded_sequences.data) {
      test_msgs__msg__BoundedSequences__Sequence__fini(&ros_message->unbounded_sequence_of_bounded_sequences);
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&ros_message->unbounded_sequence_of_bounded_sequences, size)) {
      fprintf(stderr, "failed to create array for field 'unbounded_sequence_of_bounded_sequences'");
      return false;
    }
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__BoundedSequences(cdr, &array_ptr[i]);
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_unbounded_sequences.data) {
      test_msgs__msg__UnboundedSequences__Sequence__fini(&ros_message->unbounded_sequence_of_unbounded_sequences);
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&ros_message->unbounded_sequence_of_unbounded_sequences, size)) {
      fprintf(stderr, "failed to create array for field 'unbounded_sequence_of_unbounded_sequences'");
      return false;
    }
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_test_msgs__msg__UnboundedSequences(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__MultiNested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiNested__ros_msg_type * ros_message = static_cast<const _MultiNested__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: array_of_arrays
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t array_size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    size_t array_size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__MultiNested(
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

  // Field name: array_of_arrays
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_arrays
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
        max_serialized_size_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
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
        max_serialized_size_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
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
        max_serialized_size_test_msgs__msg__UnboundedSequences(
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
    using DataType = test_msgs__msg__MultiNested;
    is_plain =
      (
      offsetof(DataType, unbounded_sequence_of_unbounded_sequences) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
bool cdr_serialize_key_test_msgs__msg__MultiNested(
  const test_msgs__msg__MultiNested * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: array_of_arrays
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    size_t size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__Arrays(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__BoundedSequences(
        &array_ptr[i], cdr);
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_key_test_msgs__msg__MultiNested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiNested__ros_msg_type * ros_message = static_cast<const _MultiNested__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: array_of_arrays
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t array_size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    size_t array_size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_key_test_msgs__msg__MultiNested(
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
  // Field name: array_of_arrays
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: array_of_bounded_sequences
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    size_t array_size = 3;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_test_msgs__msg__UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_arrays
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
        max_serialized_size_key_test_msgs__msg__Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
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
        max_serialized_size_key_test_msgs__msg__BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
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
        max_serialized_size_key_test_msgs__msg__UnboundedSequences(
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
    using DataType = test_msgs__msg__MultiNested;
    is_plain =
      (
      offsetof(DataType, unbounded_sequence_of_unbounded_sequences) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MultiNested__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const test_msgs__msg__MultiNested * ros_message = static_cast<const test_msgs__msg__MultiNested *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_test_msgs__msg__MultiNested(ros_message, cdr);
}

static bool _MultiNested__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  test_msgs__msg__MultiNested * ros_message = static_cast<test_msgs__msg__MultiNested *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_test_msgs__msg__MultiNested(cdr, ros_message);
}

static uint32_t _MultiNested__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__MultiNested(
      untyped_ros_message, 0));
}

static size_t _MultiNested__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__msg__MultiNested(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiNested = {
  "test_msgs::msg",
  "MultiNested",
  _MultiNested__cdr_serialize,
  _MultiNested__cdr_deserialize,
  _MultiNested__get_serialized_size,
  _MultiNested__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MultiNested__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiNested,
  get_message_typesupport_handle_function,
  &test_msgs__msg__MultiNested__get_type_hash,
  &test_msgs__msg__MultiNested__get_type_description,
  &test_msgs__msg__MultiNested__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, MultiNested)() {
  return &_MultiNested__type_support;
}

#if defined(__cplusplus)
}
#endif
