// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RoverAckermannSetpoint.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/rover_ackermann_setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RoverAckermannSetpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x87, 0x23, 0x3b, 0x69, 0x53, 0x8a, 0xb3,
      0x8f, 0xe5, 0x1c, 0xa5, 0x4a, 0xd8, 0x78, 0xf8,
      0x26, 0xb0, 0x54, 0x46, 0x37, 0x1e, 0xca, 0x78,
      0x59, 0xb9, 0x7e, 0x5e, 0x1d, 0x11, 0x36, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RoverAckermannSetpoint__TYPE_NAME[] = "px4_msgs/msg/RoverAckermannSetpoint";

// Define type names, field names, and default values
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__forward_speed_setpoint[] = "forward_speed_setpoint";
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__forward_speed_setpoint_normalized[] = "forward_speed_setpoint_normalized";
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__steering_setpoint[] = "steering_setpoint";
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__steering_setpoint_normalized[] = "steering_setpoint_normalized";
static char px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__lateral_acceleration_setpoint[] = "lateral_acceleration_setpoint";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RoverAckermannSetpoint__FIELDS[] = {
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__forward_speed_setpoint, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__forward_speed_setpoint_normalized, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__steering_setpoint, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__steering_setpoint_normalized, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverAckermannSetpoint__FIELD_NAME__lateral_acceleration_setpoint, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__RoverAckermannSetpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RoverAckermannSetpoint__TYPE_NAME, 35, 35},
      {px4_msgs__msg__RoverAckermannSetpoint__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "float32 forward_speed_setpoint \\t\\t  # [m/s] Desired speed in body x direction. Positiv: forwards, Negativ: backwards\n"
  "float32 forward_speed_setpoint_normalized # [-1, 1] Desired normalized speed in body x direction. Positiv: forwards, Negativ: backwards\n"
  "float32 steering_setpoint      \\t\\t  # [rad] Desired steering angle\n"
  "float32 steering_setpoint_normalized      # [-1, 1] Desired normalized steering angle\n"
  "float32 lateral_acceleration_setpoint     # [m/s^2] Desired acceleration in body y direction. Positiv: right, Negativ: left.\n"
  "\n"
  "# TOPICS rover_ackermann_setpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RoverAckermannSetpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RoverAckermannSetpoint__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 623, 623},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RoverAckermannSetpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RoverAckermannSetpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
