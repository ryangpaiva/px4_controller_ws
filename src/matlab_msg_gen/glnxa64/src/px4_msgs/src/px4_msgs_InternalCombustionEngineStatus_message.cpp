// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/InternalCombustionEngineStatus
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "px4_msgs/msg/internal_combustion_engine_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_InternalCombustionEngineStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::InternalCombustionEngineStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_InternalCombustionEngineStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::InternalCombustionEngineStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::InternalCombustionEngineStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_InternalCombustionEngineStatus_common::copy_from_struct(px4_msgs::msg::InternalCombustionEngineStatus* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timestamp
        const matlab::data::TypedArray<uint64_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a uint64.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint32_t> flags_arr = arr["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint32.");
    }
    try {
        //engine_load_percent
        const matlab::data::TypedArray<uint8_t> engine_load_percent_arr = arr["engine_load_percent"];
        msg->engine_load_percent = engine_load_percent_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'engine_load_percent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'engine_load_percent' is wrong type; expected a uint8.");
    }
    try {
        //engine_speed_rpm
        const matlab::data::TypedArray<uint32_t> engine_speed_rpm_arr = arr["engine_speed_rpm"];
        msg->engine_speed_rpm = engine_speed_rpm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'engine_speed_rpm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'engine_speed_rpm' is wrong type; expected a uint32.");
    }
    try {
        //spark_dwell_time_ms
        const matlab::data::TypedArray<float> spark_dwell_time_ms_arr = arr["spark_dwell_time_ms"];
        msg->spark_dwell_time_ms = spark_dwell_time_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'spark_dwell_time_ms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'spark_dwell_time_ms' is wrong type; expected a single.");
    }
    try {
        //atmospheric_pressure_kpa
        const matlab::data::TypedArray<float> atmospheric_pressure_kpa_arr = arr["atmospheric_pressure_kpa"];
        msg->atmospheric_pressure_kpa = atmospheric_pressure_kpa_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'atmospheric_pressure_kpa' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'atmospheric_pressure_kpa' is wrong type; expected a single.");
    }
    try {
        //intake_manifold_pressure_kpa
        const matlab::data::TypedArray<float> intake_manifold_pressure_kpa_arr = arr["intake_manifold_pressure_kpa"];
        msg->intake_manifold_pressure_kpa = intake_manifold_pressure_kpa_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'intake_manifold_pressure_kpa' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'intake_manifold_pressure_kpa' is wrong type; expected a single.");
    }
    try {
        //intake_manifold_temperature
        const matlab::data::TypedArray<float> intake_manifold_temperature_arr = arr["intake_manifold_temperature"];
        msg->intake_manifold_temperature = intake_manifold_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'intake_manifold_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'intake_manifold_temperature' is wrong type; expected a single.");
    }
    try {
        //coolant_temperature
        const matlab::data::TypedArray<float> coolant_temperature_arr = arr["coolant_temperature"];
        msg->coolant_temperature = coolant_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coolant_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'coolant_temperature' is wrong type; expected a single.");
    }
    try {
        //oil_pressure
        const matlab::data::TypedArray<float> oil_pressure_arr = arr["oil_pressure"];
        msg->oil_pressure = oil_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'oil_pressure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'oil_pressure' is wrong type; expected a single.");
    }
    try {
        //oil_temperature
        const matlab::data::TypedArray<float> oil_temperature_arr = arr["oil_temperature"];
        msg->oil_temperature = oil_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'oil_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'oil_temperature' is wrong type; expected a single.");
    }
    try {
        //fuel_pressure
        const matlab::data::TypedArray<float> fuel_pressure_arr = arr["fuel_pressure"];
        msg->fuel_pressure = fuel_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fuel_pressure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fuel_pressure' is wrong type; expected a single.");
    }
    try {
        //fuel_consumption_rate_cm3pm
        const matlab::data::TypedArray<float> fuel_consumption_rate_cm3pm_arr = arr["fuel_consumption_rate_cm3pm"];
        msg->fuel_consumption_rate_cm3pm = fuel_consumption_rate_cm3pm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fuel_consumption_rate_cm3pm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fuel_consumption_rate_cm3pm' is wrong type; expected a single.");
    }
    try {
        //estimated_consumed_fuel_volume_cm3
        const matlab::data::TypedArray<float> estimated_consumed_fuel_volume_cm3_arr = arr["estimated_consumed_fuel_volume_cm3"];
        msg->estimated_consumed_fuel_volume_cm3 = estimated_consumed_fuel_volume_cm3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'estimated_consumed_fuel_volume_cm3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'estimated_consumed_fuel_volume_cm3' is wrong type; expected a single.");
    }
    try {
        //throttle_position_percent
        const matlab::data::TypedArray<uint8_t> throttle_position_percent_arr = arr["throttle_position_percent"];
        msg->throttle_position_percent = throttle_position_percent_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle_position_percent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle_position_percent' is wrong type; expected a uint8.");
    }
    try {
        //ecu_index
        const matlab::data::TypedArray<uint8_t> ecu_index_arr = arr["ecu_index"];
        msg->ecu_index = ecu_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ecu_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ecu_index' is wrong type; expected a uint8.");
    }
    try {
        //spark_plug_usage
        const matlab::data::TypedArray<uint8_t> spark_plug_usage_arr = arr["spark_plug_usage"];
        msg->spark_plug_usage = spark_plug_usage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'spark_plug_usage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'spark_plug_usage' is wrong type; expected a uint8.");
    }
    try {
        //ignition_timing_deg
        const matlab::data::TypedArray<float> ignition_timing_deg_arr = arr["ignition_timing_deg"];
        msg->ignition_timing_deg = ignition_timing_deg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ignition_timing_deg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ignition_timing_deg' is wrong type; expected a single.");
    }
    try {
        //injection_time_ms
        const matlab::data::TypedArray<float> injection_time_ms_arr = arr["injection_time_ms"];
        msg->injection_time_ms = injection_time_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'injection_time_ms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'injection_time_ms' is wrong type; expected a single.");
    }
    try {
        //cylinder_head_temperature
        const matlab::data::TypedArray<float> cylinder_head_temperature_arr = arr["cylinder_head_temperature"];
        msg->cylinder_head_temperature = cylinder_head_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cylinder_head_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cylinder_head_temperature' is wrong type; expected a single.");
    }
    try {
        //exhaust_gas_temperature
        const matlab::data::TypedArray<float> exhaust_gas_temperature_arr = arr["exhaust_gas_temperature"];
        msg->exhaust_gas_temperature = exhaust_gas_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'exhaust_gas_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'exhaust_gas_temperature' is wrong type; expected a single.");
    }
    try {
        //lambda_coefficient
        const matlab::data::TypedArray<float> lambda_coefficient_arr = arr["lambda_coefficient"];
        msg->lambda_coefficient = lambda_coefficient_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lambda_coefficient' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lambda_coefficient' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_InternalCombustionEngineStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::InternalCombustionEngineStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","STATE_STOPPED","STATE_STARTING","STATE_RUNNING","STATE_FAULT","state","FLAG_GENERAL_ERROR","FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED","FLAG_CRANKSHAFT_SENSOR_ERROR","FLAG_TEMPERATURE_SUPPORTED","FLAG_TEMPERATURE_BELOW_NOMINAL","FLAG_TEMPERATURE_ABOVE_NOMINAL","FLAG_TEMPERATURE_OVERHEATING","FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL","FLAG_FUEL_PRESSURE_SUPPORTED","FLAG_FUEL_PRESSURE_BELOW_NOMINAL","FLAG_FUEL_PRESSURE_ABOVE_NOMINAL","FLAG_DETONATION_SUPPORTED","FLAG_DETONATION_OBSERVED","FLAG_MISFIRE_SUPPORTED","FLAG_MISFIRE_OBSERVED","FLAG_OIL_PRESSURE_SUPPORTED","FLAG_OIL_PRESSURE_BELOW_NOMINAL","FLAG_OIL_PRESSURE_ABOVE_NOMINAL","FLAG_DEBRIS_SUPPORTED","FLAG_DEBRIS_DETECTED","flags","engine_load_percent","engine_speed_rpm","spark_dwell_time_ms","atmospheric_pressure_kpa","intake_manifold_pressure_kpa","intake_manifold_temperature","coolant_temperature","oil_pressure","oil_temperature","fuel_pressure","fuel_consumption_rate_cm3pm","estimated_consumed_fuel_volume_cm3","throttle_position_percent","ecu_index","SPARK_PLUG_SINGLE","SPARK_PLUG_FIRST_ACTIVE","SPARK_PLUG_SECOND_ACTIVE","SPARK_PLUG_BOTH_ACTIVE","spark_plug_usage","ignition_timing_deg","injection_time_ms","cylinder_head_temperature","exhaust_gas_temperature","lambda_coefficient"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/InternalCombustionEngineStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // STATE_STOPPED
    auto currentElement_STATE_STOPPED = (msg + ctr)->STATE_STOPPED;
    outArray[ctr]["STATE_STOPPED"] = factory.createScalar(currentElement_STATE_STOPPED);
    // STATE_STARTING
    auto currentElement_STATE_STARTING = (msg + ctr)->STATE_STARTING;
    outArray[ctr]["STATE_STARTING"] = factory.createScalar(currentElement_STATE_STARTING);
    // STATE_RUNNING
    auto currentElement_STATE_RUNNING = (msg + ctr)->STATE_RUNNING;
    outArray[ctr]["STATE_RUNNING"] = factory.createScalar(currentElement_STATE_RUNNING);
    // STATE_FAULT
    auto currentElement_STATE_FAULT = (msg + ctr)->STATE_FAULT;
    outArray[ctr]["STATE_FAULT"] = factory.createScalar(currentElement_STATE_FAULT);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    // FLAG_GENERAL_ERROR
    auto currentElement_FLAG_GENERAL_ERROR = (msg + ctr)->FLAG_GENERAL_ERROR;
    outArray[ctr]["FLAG_GENERAL_ERROR"] = factory.createScalar(currentElement_FLAG_GENERAL_ERROR);
    // FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED
    auto currentElement_FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED = (msg + ctr)->FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED;
    outArray[ctr]["FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED"] = factory.createScalar(currentElement_FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED);
    // FLAG_CRANKSHAFT_SENSOR_ERROR
    auto currentElement_FLAG_CRANKSHAFT_SENSOR_ERROR = (msg + ctr)->FLAG_CRANKSHAFT_SENSOR_ERROR;
    outArray[ctr]["FLAG_CRANKSHAFT_SENSOR_ERROR"] = factory.createScalar(currentElement_FLAG_CRANKSHAFT_SENSOR_ERROR);
    // FLAG_TEMPERATURE_SUPPORTED
    auto currentElement_FLAG_TEMPERATURE_SUPPORTED = (msg + ctr)->FLAG_TEMPERATURE_SUPPORTED;
    outArray[ctr]["FLAG_TEMPERATURE_SUPPORTED"] = factory.createScalar(currentElement_FLAG_TEMPERATURE_SUPPORTED);
    // FLAG_TEMPERATURE_BELOW_NOMINAL
    auto currentElement_FLAG_TEMPERATURE_BELOW_NOMINAL = (msg + ctr)->FLAG_TEMPERATURE_BELOW_NOMINAL;
    outArray[ctr]["FLAG_TEMPERATURE_BELOW_NOMINAL"] = factory.createScalar(currentElement_FLAG_TEMPERATURE_BELOW_NOMINAL);
    // FLAG_TEMPERATURE_ABOVE_NOMINAL
    auto currentElement_FLAG_TEMPERATURE_ABOVE_NOMINAL = (msg + ctr)->FLAG_TEMPERATURE_ABOVE_NOMINAL;
    outArray[ctr]["FLAG_TEMPERATURE_ABOVE_NOMINAL"] = factory.createScalar(currentElement_FLAG_TEMPERATURE_ABOVE_NOMINAL);
    // FLAG_TEMPERATURE_OVERHEATING
    auto currentElement_FLAG_TEMPERATURE_OVERHEATING = (msg + ctr)->FLAG_TEMPERATURE_OVERHEATING;
    outArray[ctr]["FLAG_TEMPERATURE_OVERHEATING"] = factory.createScalar(currentElement_FLAG_TEMPERATURE_OVERHEATING);
    // FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL
    auto currentElement_FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL = (msg + ctr)->FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL;
    outArray[ctr]["FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL"] = factory.createScalar(currentElement_FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL);
    // FLAG_FUEL_PRESSURE_SUPPORTED
    auto currentElement_FLAG_FUEL_PRESSURE_SUPPORTED = (msg + ctr)->FLAG_FUEL_PRESSURE_SUPPORTED;
    outArray[ctr]["FLAG_FUEL_PRESSURE_SUPPORTED"] = factory.createScalar(currentElement_FLAG_FUEL_PRESSURE_SUPPORTED);
    // FLAG_FUEL_PRESSURE_BELOW_NOMINAL
    auto currentElement_FLAG_FUEL_PRESSURE_BELOW_NOMINAL = (msg + ctr)->FLAG_FUEL_PRESSURE_BELOW_NOMINAL;
    outArray[ctr]["FLAG_FUEL_PRESSURE_BELOW_NOMINAL"] = factory.createScalar(currentElement_FLAG_FUEL_PRESSURE_BELOW_NOMINAL);
    // FLAG_FUEL_PRESSURE_ABOVE_NOMINAL
    auto currentElement_FLAG_FUEL_PRESSURE_ABOVE_NOMINAL = (msg + ctr)->FLAG_FUEL_PRESSURE_ABOVE_NOMINAL;
    outArray[ctr]["FLAG_FUEL_PRESSURE_ABOVE_NOMINAL"] = factory.createScalar(currentElement_FLAG_FUEL_PRESSURE_ABOVE_NOMINAL);
    // FLAG_DETONATION_SUPPORTED
    auto currentElement_FLAG_DETONATION_SUPPORTED = (msg + ctr)->FLAG_DETONATION_SUPPORTED;
    outArray[ctr]["FLAG_DETONATION_SUPPORTED"] = factory.createScalar(currentElement_FLAG_DETONATION_SUPPORTED);
    // FLAG_DETONATION_OBSERVED
    auto currentElement_FLAG_DETONATION_OBSERVED = (msg + ctr)->FLAG_DETONATION_OBSERVED;
    outArray[ctr]["FLAG_DETONATION_OBSERVED"] = factory.createScalar(currentElement_FLAG_DETONATION_OBSERVED);
    // FLAG_MISFIRE_SUPPORTED
    auto currentElement_FLAG_MISFIRE_SUPPORTED = (msg + ctr)->FLAG_MISFIRE_SUPPORTED;
    outArray[ctr]["FLAG_MISFIRE_SUPPORTED"] = factory.createScalar(currentElement_FLAG_MISFIRE_SUPPORTED);
    // FLAG_MISFIRE_OBSERVED
    auto currentElement_FLAG_MISFIRE_OBSERVED = (msg + ctr)->FLAG_MISFIRE_OBSERVED;
    outArray[ctr]["FLAG_MISFIRE_OBSERVED"] = factory.createScalar(currentElement_FLAG_MISFIRE_OBSERVED);
    // FLAG_OIL_PRESSURE_SUPPORTED
    auto currentElement_FLAG_OIL_PRESSURE_SUPPORTED = (msg + ctr)->FLAG_OIL_PRESSURE_SUPPORTED;
    outArray[ctr]["FLAG_OIL_PRESSURE_SUPPORTED"] = factory.createScalar(currentElement_FLAG_OIL_PRESSURE_SUPPORTED);
    // FLAG_OIL_PRESSURE_BELOW_NOMINAL
    auto currentElement_FLAG_OIL_PRESSURE_BELOW_NOMINAL = (msg + ctr)->FLAG_OIL_PRESSURE_BELOW_NOMINAL;
    outArray[ctr]["FLAG_OIL_PRESSURE_BELOW_NOMINAL"] = factory.createScalar(currentElement_FLAG_OIL_PRESSURE_BELOW_NOMINAL);
    // FLAG_OIL_PRESSURE_ABOVE_NOMINAL
    auto currentElement_FLAG_OIL_PRESSURE_ABOVE_NOMINAL = (msg + ctr)->FLAG_OIL_PRESSURE_ABOVE_NOMINAL;
    outArray[ctr]["FLAG_OIL_PRESSURE_ABOVE_NOMINAL"] = factory.createScalar(currentElement_FLAG_OIL_PRESSURE_ABOVE_NOMINAL);
    // FLAG_DEBRIS_SUPPORTED
    auto currentElement_FLAG_DEBRIS_SUPPORTED = (msg + ctr)->FLAG_DEBRIS_SUPPORTED;
    outArray[ctr]["FLAG_DEBRIS_SUPPORTED"] = factory.createScalar(currentElement_FLAG_DEBRIS_SUPPORTED);
    // FLAG_DEBRIS_DETECTED
    auto currentElement_FLAG_DEBRIS_DETECTED = (msg + ctr)->FLAG_DEBRIS_DETECTED;
    outArray[ctr]["FLAG_DEBRIS_DETECTED"] = factory.createScalar(currentElement_FLAG_DEBRIS_DETECTED);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // engine_load_percent
    auto currentElement_engine_load_percent = (msg + ctr)->engine_load_percent;
    outArray[ctr]["engine_load_percent"] = factory.createScalar(currentElement_engine_load_percent);
    // engine_speed_rpm
    auto currentElement_engine_speed_rpm = (msg + ctr)->engine_speed_rpm;
    outArray[ctr]["engine_speed_rpm"] = factory.createScalar(currentElement_engine_speed_rpm);
    // spark_dwell_time_ms
    auto currentElement_spark_dwell_time_ms = (msg + ctr)->spark_dwell_time_ms;
    outArray[ctr]["spark_dwell_time_ms"] = factory.createScalar(currentElement_spark_dwell_time_ms);
    // atmospheric_pressure_kpa
    auto currentElement_atmospheric_pressure_kpa = (msg + ctr)->atmospheric_pressure_kpa;
    outArray[ctr]["atmospheric_pressure_kpa"] = factory.createScalar(currentElement_atmospheric_pressure_kpa);
    // intake_manifold_pressure_kpa
    auto currentElement_intake_manifold_pressure_kpa = (msg + ctr)->intake_manifold_pressure_kpa;
    outArray[ctr]["intake_manifold_pressure_kpa"] = factory.createScalar(currentElement_intake_manifold_pressure_kpa);
    // intake_manifold_temperature
    auto currentElement_intake_manifold_temperature = (msg + ctr)->intake_manifold_temperature;
    outArray[ctr]["intake_manifold_temperature"] = factory.createScalar(currentElement_intake_manifold_temperature);
    // coolant_temperature
    auto currentElement_coolant_temperature = (msg + ctr)->coolant_temperature;
    outArray[ctr]["coolant_temperature"] = factory.createScalar(currentElement_coolant_temperature);
    // oil_pressure
    auto currentElement_oil_pressure = (msg + ctr)->oil_pressure;
    outArray[ctr]["oil_pressure"] = factory.createScalar(currentElement_oil_pressure);
    // oil_temperature
    auto currentElement_oil_temperature = (msg + ctr)->oil_temperature;
    outArray[ctr]["oil_temperature"] = factory.createScalar(currentElement_oil_temperature);
    // fuel_pressure
    auto currentElement_fuel_pressure = (msg + ctr)->fuel_pressure;
    outArray[ctr]["fuel_pressure"] = factory.createScalar(currentElement_fuel_pressure);
    // fuel_consumption_rate_cm3pm
    auto currentElement_fuel_consumption_rate_cm3pm = (msg + ctr)->fuel_consumption_rate_cm3pm;
    outArray[ctr]["fuel_consumption_rate_cm3pm"] = factory.createScalar(currentElement_fuel_consumption_rate_cm3pm);
    // estimated_consumed_fuel_volume_cm3
    auto currentElement_estimated_consumed_fuel_volume_cm3 = (msg + ctr)->estimated_consumed_fuel_volume_cm3;
    outArray[ctr]["estimated_consumed_fuel_volume_cm3"] = factory.createScalar(currentElement_estimated_consumed_fuel_volume_cm3);
    // throttle_position_percent
    auto currentElement_throttle_position_percent = (msg + ctr)->throttle_position_percent;
    outArray[ctr]["throttle_position_percent"] = factory.createScalar(currentElement_throttle_position_percent);
    // ecu_index
    auto currentElement_ecu_index = (msg + ctr)->ecu_index;
    outArray[ctr]["ecu_index"] = factory.createScalar(currentElement_ecu_index);
    // SPARK_PLUG_SINGLE
    auto currentElement_SPARK_PLUG_SINGLE = (msg + ctr)->SPARK_PLUG_SINGLE;
    outArray[ctr]["SPARK_PLUG_SINGLE"] = factory.createScalar(currentElement_SPARK_PLUG_SINGLE);
    // SPARK_PLUG_FIRST_ACTIVE
    auto currentElement_SPARK_PLUG_FIRST_ACTIVE = (msg + ctr)->SPARK_PLUG_FIRST_ACTIVE;
    outArray[ctr]["SPARK_PLUG_FIRST_ACTIVE"] = factory.createScalar(currentElement_SPARK_PLUG_FIRST_ACTIVE);
    // SPARK_PLUG_SECOND_ACTIVE
    auto currentElement_SPARK_PLUG_SECOND_ACTIVE = (msg + ctr)->SPARK_PLUG_SECOND_ACTIVE;
    outArray[ctr]["SPARK_PLUG_SECOND_ACTIVE"] = factory.createScalar(currentElement_SPARK_PLUG_SECOND_ACTIVE);
    // SPARK_PLUG_BOTH_ACTIVE
    auto currentElement_SPARK_PLUG_BOTH_ACTIVE = (msg + ctr)->SPARK_PLUG_BOTH_ACTIVE;
    outArray[ctr]["SPARK_PLUG_BOTH_ACTIVE"] = factory.createScalar(currentElement_SPARK_PLUG_BOTH_ACTIVE);
    // spark_plug_usage
    auto currentElement_spark_plug_usage = (msg + ctr)->spark_plug_usage;
    outArray[ctr]["spark_plug_usage"] = factory.createScalar(currentElement_spark_plug_usage);
    // ignition_timing_deg
    auto currentElement_ignition_timing_deg = (msg + ctr)->ignition_timing_deg;
    outArray[ctr]["ignition_timing_deg"] = factory.createScalar(currentElement_ignition_timing_deg);
    // injection_time_ms
    auto currentElement_injection_time_ms = (msg + ctr)->injection_time_ms;
    outArray[ctr]["injection_time_ms"] = factory.createScalar(currentElement_injection_time_ms);
    // cylinder_head_temperature
    auto currentElement_cylinder_head_temperature = (msg + ctr)->cylinder_head_temperature;
    outArray[ctr]["cylinder_head_temperature"] = factory.createScalar(currentElement_cylinder_head_temperature);
    // exhaust_gas_temperature
    auto currentElement_exhaust_gas_temperature = (msg + ctr)->exhaust_gas_temperature;
    outArray[ctr]["exhaust_gas_temperature"] = factory.createScalar(currentElement_exhaust_gas_temperature);
    // lambda_coefficient
    auto currentElement_lambda_coefficient = (msg + ctr)->lambda_coefficient;
    outArray[ctr]["lambda_coefficient"] = factory.createScalar(currentElement_lambda_coefficient);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_InternalCombustionEngineStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_InternalCombustionEngineStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_InternalCombustionEngineStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::InternalCombustionEngineStatus,ros2_px4_msgs_msg_InternalCombustionEngineStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_InternalCombustionEngineStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::InternalCombustionEngineStatus,ros2_px4_msgs_msg_InternalCombustionEngineStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_InternalCombustionEngineStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::InternalCombustionEngineStatus>();
    ros2_px4_msgs_msg_InternalCombustionEngineStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_InternalCombustionEngineStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_InternalCombustionEngineStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::InternalCombustionEngineStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_InternalCombustionEngineStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::InternalCombustionEngineStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_InternalCombustionEngineStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER