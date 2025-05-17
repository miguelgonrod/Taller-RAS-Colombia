// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#include "complex_msgs/msg/detail/nested_msg_test__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_complex_msgs
const rosidl_type_hash_t *
complex_msgs__msg__NestedMsgTest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0xc5, 0xcd, 0x86, 0xe4, 0x52, 0xaf, 0xc8,
      0xcd, 0x37, 0xb8, 0x10, 0x2d, 0x66, 0x36, 0x33,
      0xb2, 0x39, 0x6e, 0x53, 0x8e, 0x26, 0x9c, 0xe8,
      0x57, 0x85, 0x8c, 0x24, 0xa1, 0xc8, 0xf0, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t complex_msgs__msg__MultiStringTest__EXPECTED_HASH = {1, {
    0x87, 0xb6, 0x7b, 0x60, 0xc6, 0xd8, 0xbb, 0x4d,
    0xb6, 0x6b, 0x64, 0x95, 0x06, 0x68, 0x90, 0xa8,
    0x7c, 0xca, 0x0c, 0xf3, 0xb7, 0xe0, 0x50, 0xee,
    0x48, 0x06, 0x16, 0x96, 0xbb, 0x2f, 0xd0, 0x53,
  }};
#endif

static char complex_msgs__msg__NestedMsgTest__TYPE_NAME[] = "complex_msgs/msg/NestedMsgTest";
static char complex_msgs__msg__MultiStringTest__TYPE_NAME[] = "complex_msgs/msg/MultiStringTest";

// Define type names, field names, and default values
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data1[] = "data1";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data2[] = "data2";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data3[] = "data3";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data4[] = "data4";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data5[] = "data5";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data6[] = "data6";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data7[] = "data7";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data8[] = "data8";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data9[] = "data9";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data10[] = "data10";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data11[] = "data11";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data12[] = "data12";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data13[] = "data13";
static char complex_msgs__msg__NestedMsgTest__FIELD_NAME__data14[] = "data14";

static rosidl_runtime_c__type_description__Field complex_msgs__msg__NestedMsgTest__FIELDS[] = {
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data4, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data5, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data6, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data7, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data8, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data9, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data10, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data11, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data12, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data13, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {complex_msgs__msg__NestedMsgTest__FIELD_NAME__data14, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {complex_msgs__msg__MultiStringTest__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription complex_msgs__msg__NestedMsgTest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {complex_msgs__msg__MultiStringTest__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
complex_msgs__msg__NestedMsgTest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {complex_msgs__msg__NestedMsgTest__TYPE_NAME, 30, 30},
      {complex_msgs__msg__NestedMsgTest__FIELDS, 14, 14},
    },
    {complex_msgs__msg__NestedMsgTest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&complex_msgs__msg__MultiStringTest__EXPECTED_HASH, complex_msgs__msg__MultiStringTest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = complex_msgs__msg__MultiStringTest__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool data1\n"
  "byte data2\n"
  "char data3\n"
  "float32 data4\n"
  "float64 data5\n"
  "int8 data6\n"
  "uint8 data7\n"
  "int16 data8\n"
  "uint16 data9\n"
  "int32 data10\n"
  "uint32 data11\n"
  "int64 data12\n"
  "uint64 data13\n"
  "MultiStringTest data14";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
complex_msgs__msg__NestedMsgTest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {complex_msgs__msg__NestedMsgTest__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 185, 185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
complex_msgs__msg__NestedMsgTest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *complex_msgs__msg__NestedMsgTest__get_individual_type_description_source(NULL),
    sources[1] = *complex_msgs__msg__MultiStringTest__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
