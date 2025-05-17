// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#include "complex_msgs/msg/detail/multi_string_test__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
const rosidl_type_hash_t *
complex_msgs__msg__MultiStringTest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0xb6, 0x7b, 0x60, 0xc6, 0xd8, 0xbb, 0x4d,
      0xb6, 0x6b, 0x64, 0x95, 0x06, 0x68, 0x90, 0xa8,
      0x7c, 0xca, 0x0c, 0xf3, 0xb7, 0xe0, 0x50, 0xee,
      0x48, 0x06, 0x16, 0x96, 0xbb, 0x2f, 0xd0, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char complex_msgs__msg__MultiStringTest__TYPE_NAME[] = "complex_msgs/msg/MultiStringTest";

// Define type names, field names, and default values
static char complex_msgs__msg__MultiStringTest__FIELD_NAME__data1[] = "data1";
static char complex_msgs__msg__MultiStringTest__FIELD_NAME__data2[] = "data2";
static char complex_msgs__msg__MultiStringTest__FIELD_NAME__data3[] = "data3";
static char complex_msgs__msg__MultiStringTest__FIELD_NAME__data4[] = "data4";

static rosidl_runtime_c__type_description__Field complex_msgs__msg__MultiStringTest__FIELDS[] = {
  {
    {complex_msgs__msg__MultiStringTest__FIELD_NAME__data1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__MultiStringTest__FIELD_NAME__data2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__MultiStringTest__FIELD_NAME__data3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__MultiStringTest__FIELD_NAME__data4, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
complex_msgs__msg__MultiStringTest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {complex_msgs__msg__MultiStringTest__TYPE_NAME, 32, 32},
      {complex_msgs__msg__MultiStringTest__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data1\n"
  "string data2\n"
  "string data3\n"
  "string data4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
complex_msgs__msg__MultiStringTest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {complex_msgs__msg__MultiStringTest__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
complex_msgs__msg__MultiStringTest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *complex_msgs__msg__MultiStringTest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
