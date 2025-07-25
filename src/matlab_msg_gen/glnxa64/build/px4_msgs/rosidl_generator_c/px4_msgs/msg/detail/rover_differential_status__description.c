// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RoverDifferentialStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/rover_differential_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RoverDifferentialStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x0b, 0xcc, 0xb0, 0xf0, 0xf6, 0x4d, 0xf2,
      0x68, 0x22, 0x26, 0x70, 0x14, 0xb1, 0xb4, 0x66,
      0x1e, 0x66, 0x4a, 0x85, 0xe2, 0x4c, 0xd4, 0xdf,
      0x18, 0x18, 0x6b, 0xdd, 0x45, 0xd1, 0xad, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RoverDifferentialStatus__TYPE_NAME[] = "px4_msgs/msg/RoverDifferentialStatus";

// Define type names, field names, and default values
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_forward_speed[] = "measured_forward_speed";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_forward_speed_setpoint[] = "adjusted_forward_speed_setpoint";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_yaw[] = "measured_yaw";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_yaw_setpoint[] = "adjusted_yaw_setpoint";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__clyaw_yaw_rate_setpoint[] = "clyaw_yaw_rate_setpoint";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_yaw_rate[] = "measured_yaw_rate";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_yaw_rate_setpoint[] = "adjusted_yaw_rate_setpoint";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_yaw_integral[] = "pid_yaw_integral";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_yaw_rate_integral[] = "pid_yaw_rate_integral";
static char px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_throttle_integral[] = "pid_throttle_integral";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RoverDifferentialStatus__FIELDS[] = {
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_forward_speed, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_forward_speed_setpoint, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_yaw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_yaw_setpoint, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__clyaw_yaw_rate_setpoint, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__measured_yaw_rate, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__adjusted_yaw_rate_setpoint, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_yaw_integral, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_yaw_rate_integral, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RoverDifferentialStatus__FIELD_NAME__pid_throttle_integral, 21, 21},
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
px4_msgs__msg__RoverDifferentialStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RoverDifferentialStatus__TYPE_NAME, 36, 36},
      {px4_msgs__msg__RoverDifferentialStatus__FIELDS, 11, 11},
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
  "float32 measured_forward_speed\\t        # [m/s] Measured speed in body x direction. Forwards: positiv, Backwards: negativ\n"
  "float32 adjusted_forward_speed_setpoint # [m/s] Speed setpoint after applying slew rate\n"
  "float32 measured_yaw                    # [rad] Measured yaw\n"
  "float32 adjusted_yaw_setpoint           # [rad] Yaw setpoint after applying slew rate\n"
  "float32 clyaw_yaw_rate_setpoint         # [rad/s] Yaw rate setpoint output by the closed loop yaw controller\n"
  "float32 measured_yaw_rate               # [rad/s] Measured yaw rate\n"
  "float32 adjusted_yaw_rate_setpoint      # [rad/s] Yaw rate setpoint from the closed loop yaw controller\n"
  "float32 pid_yaw_integral                # Integral of the PID for the closed loop yaw controller\n"
  "float32 pid_yaw_rate_integral           # Integral of the PID for the closed loop yaw rate controller\n"
  "float32 pid_throttle_integral           # Integral of the PID for the closed loop speed controller\n"
  "\n"
  "# TOPICS rover_differential_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RoverDifferentialStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RoverDifferentialStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1030, 1030},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RoverDifferentialStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RoverDifferentialStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
