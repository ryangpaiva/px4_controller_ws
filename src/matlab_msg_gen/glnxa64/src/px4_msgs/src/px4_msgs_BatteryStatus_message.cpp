// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/BatteryStatus
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
#include "px4_msgs/msg/battery_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_BatteryStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::BatteryStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_BatteryStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::BatteryStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::BatteryStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_BatteryStatus_common::copy_from_struct(px4_msgs::msg::BatteryStatus* msg, const matlab::data::Struct& arr,
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
        //connected
        const matlab::data::TypedArray<bool> connected_arr = arr["connected"];
        msg->connected = connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'connected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'connected' is wrong type; expected a logical.");
    }
    try {
        //voltage_v
        const matlab::data::TypedArray<float> voltage_v_arr = arr["voltage_v"];
        msg->voltage_v = voltage_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_v' is wrong type; expected a single.");
    }
    try {
        //current_a
        const matlab::data::TypedArray<float> current_a_arr = arr["current_a"];
        msg->current_a = current_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_a' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_a' is wrong type; expected a single.");
    }
    try {
        //current_average_a
        const matlab::data::TypedArray<float> current_average_a_arr = arr["current_average_a"];
        msg->current_average_a = current_average_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_average_a' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_average_a' is wrong type; expected a single.");
    }
    try {
        //discharged_mah
        const matlab::data::TypedArray<float> discharged_mah_arr = arr["discharged_mah"];
        msg->discharged_mah = discharged_mah_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'discharged_mah' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'discharged_mah' is wrong type; expected a single.");
    }
    try {
        //remaining
        const matlab::data::TypedArray<float> remaining_arr = arr["remaining"];
        msg->remaining = remaining_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remaining' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remaining' is wrong type; expected a single.");
    }
    try {
        //scale
        const matlab::data::TypedArray<float> scale_arr = arr["scale"];
        msg->scale = scale_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'scale' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'scale' is wrong type; expected a single.");
    }
    try {
        //time_remaining_s
        const matlab::data::TypedArray<float> time_remaining_s_arr = arr["time_remaining_s"];
        msg->time_remaining_s = time_remaining_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_remaining_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_remaining_s' is wrong type; expected a single.");
    }
    try {
        //temperature
        const matlab::data::TypedArray<float> temperature_arr = arr["temperature"];
        msg->temperature = temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature' is wrong type; expected a single.");
    }
    try {
        //cell_count
        const matlab::data::TypedArray<uint8_t> cell_count_arr = arr["cell_count"];
        msg->cell_count = cell_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cell_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cell_count' is wrong type; expected a uint8.");
    }
    try {
        //source
        const matlab::data::TypedArray<uint8_t> source_arr = arr["source"];
        msg->source = source_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source' is wrong type; expected a uint8.");
    }
    try {
        //priority
        const matlab::data::TypedArray<uint8_t> priority_arr = arr["priority"];
        msg->priority = priority_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'priority' is wrong type; expected a uint8.");
    }
    try {
        //capacity
        const matlab::data::TypedArray<uint16_t> capacity_arr = arr["capacity"];
        msg->capacity = capacity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'capacity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'capacity' is wrong type; expected a uint16.");
    }
    try {
        //cycle_count
        const matlab::data::TypedArray<uint16_t> cycle_count_arr = arr["cycle_count"];
        msg->cycle_count = cycle_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cycle_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cycle_count' is wrong type; expected a uint16.");
    }
    try {
        //average_time_to_empty
        const matlab::data::TypedArray<uint16_t> average_time_to_empty_arr = arr["average_time_to_empty"];
        msg->average_time_to_empty = average_time_to_empty_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'average_time_to_empty' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'average_time_to_empty' is wrong type; expected a uint16.");
    }
    try {
        //serial_number
        const matlab::data::TypedArray<uint16_t> serial_number_arr = arr["serial_number"];
        msg->serial_number = serial_number_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'serial_number' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'serial_number' is wrong type; expected a uint16.");
    }
    try {
        //manufacture_date
        const matlab::data::TypedArray<uint16_t> manufacture_date_arr = arr["manufacture_date"];
        msg->manufacture_date = manufacture_date_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manufacture_date' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manufacture_date' is wrong type; expected a uint16.");
    }
    try {
        //state_of_health
        const matlab::data::TypedArray<uint16_t> state_of_health_arr = arr["state_of_health"];
        msg->state_of_health = state_of_health_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state_of_health' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state_of_health' is wrong type; expected a uint16.");
    }
    try {
        //max_error
        const matlab::data::TypedArray<uint16_t> max_error_arr = arr["max_error"];
        msg->max_error = max_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_error' is wrong type; expected a uint16.");
    }
    try {
        //id
        const matlab::data::TypedArray<uint8_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
    try {
        //interface_error
        const matlab::data::TypedArray<uint16_t> interface_error_arr = arr["interface_error"];
        msg->interface_error = interface_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'interface_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'interface_error' is wrong type; expected a uint16.");
    }
    try {
        //voltage_cell_v
        const matlab::data::TypedArray<float> voltage_cell_v_arr = arr["voltage_cell_v"];
        size_t nelem = 14;
        	std::copy(voltage_cell_v_arr.begin(), voltage_cell_v_arr.begin()+nelem, msg->voltage_cell_v.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_cell_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_cell_v' is wrong type; expected a single.");
    }
    try {
        //max_cell_voltage_delta
        const matlab::data::TypedArray<float> max_cell_voltage_delta_arr = arr["max_cell_voltage_delta"];
        msg->max_cell_voltage_delta = max_cell_voltage_delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_cell_voltage_delta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_cell_voltage_delta' is wrong type; expected a single.");
    }
    try {
        //is_powering_off
        const matlab::data::TypedArray<bool> is_powering_off_arr = arr["is_powering_off"];
        msg->is_powering_off = is_powering_off_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_powering_off' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_powering_off' is wrong type; expected a logical.");
    }
    try {
        //is_required
        const matlab::data::TypedArray<bool> is_required_arr = arr["is_required"];
        msg->is_required = is_required_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_required' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_required' is wrong type; expected a logical.");
    }
    try {
        //faults
        const matlab::data::TypedArray<uint16_t> faults_arr = arr["faults"];
        msg->faults = faults_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'faults' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'faults' is wrong type; expected a uint16.");
    }
    try {
        //warning
        const matlab::data::TypedArray<uint8_t> warning_arr = arr["warning"];
        msg->warning = warning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'warning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'warning' is wrong type; expected a uint8.");
    }
    try {
        //full_charge_capacity_wh
        const matlab::data::TypedArray<float> full_charge_capacity_wh_arr = arr["full_charge_capacity_wh"];
        msg->full_charge_capacity_wh = full_charge_capacity_wh_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'full_charge_capacity_wh' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'full_charge_capacity_wh' is wrong type; expected a single.");
    }
    try {
        //remaining_capacity_wh
        const matlab::data::TypedArray<float> remaining_capacity_wh_arr = arr["remaining_capacity_wh"];
        msg->remaining_capacity_wh = remaining_capacity_wh_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remaining_capacity_wh' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remaining_capacity_wh' is wrong type; expected a single.");
    }
    try {
        //over_discharge_count
        const matlab::data::TypedArray<uint16_t> over_discharge_count_arr = arr["over_discharge_count"];
        msg->over_discharge_count = over_discharge_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'over_discharge_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'over_discharge_count' is wrong type; expected a uint16.");
    }
    try {
        //nominal_voltage
        const matlab::data::TypedArray<float> nominal_voltage_arr = arr["nominal_voltage"];
        msg->nominal_voltage = nominal_voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nominal_voltage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nominal_voltage' is wrong type; expected a single.");
    }
    try {
        //internal_resistance_estimate
        const matlab::data::TypedArray<float> internal_resistance_estimate_arr = arr["internal_resistance_estimate"];
        msg->internal_resistance_estimate = internal_resistance_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'internal_resistance_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'internal_resistance_estimate' is wrong type; expected a single.");
    }
    try {
        //ocv_estimate
        const matlab::data::TypedArray<float> ocv_estimate_arr = arr["ocv_estimate"];
        msg->ocv_estimate = ocv_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ocv_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ocv_estimate' is wrong type; expected a single.");
    }
    try {
        //ocv_estimate_filtered
        const matlab::data::TypedArray<float> ocv_estimate_filtered_arr = arr["ocv_estimate_filtered"];
        msg->ocv_estimate_filtered = ocv_estimate_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ocv_estimate_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ocv_estimate_filtered' is wrong type; expected a single.");
    }
    try {
        //volt_based_soc_estimate
        const matlab::data::TypedArray<float> volt_based_soc_estimate_arr = arr["volt_based_soc_estimate"];
        msg->volt_based_soc_estimate = volt_based_soc_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'volt_based_soc_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'volt_based_soc_estimate' is wrong type; expected a single.");
    }
    try {
        //voltage_prediction
        const matlab::data::TypedArray<float> voltage_prediction_arr = arr["voltage_prediction"];
        msg->voltage_prediction = voltage_prediction_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_prediction' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_prediction' is wrong type; expected a single.");
    }
    try {
        //prediction_error
        const matlab::data::TypedArray<float> prediction_error_arr = arr["prediction_error"];
        msg->prediction_error = prediction_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'prediction_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'prediction_error' is wrong type; expected a single.");
    }
    try {
        //estimation_covariance_norm
        const matlab::data::TypedArray<float> estimation_covariance_norm_arr = arr["estimation_covariance_norm"];
        msg->estimation_covariance_norm = estimation_covariance_norm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'estimation_covariance_norm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'estimation_covariance_norm' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_BatteryStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::BatteryStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","connected","voltage_v","current_a","current_average_a","discharged_mah","remaining","scale","time_remaining_s","temperature","cell_count","BATTERY_SOURCE_POWER_MODULE","BATTERY_SOURCE_EXTERNAL","BATTERY_SOURCE_ESCS","source","priority","capacity","cycle_count","average_time_to_empty","serial_number","manufacture_date","state_of_health","max_error","id","interface_error","voltage_cell_v","max_cell_voltage_delta","is_powering_off","is_required","BATTERY_WARNING_NONE","BATTERY_WARNING_LOW","BATTERY_WARNING_CRITICAL","BATTERY_WARNING_EMERGENCY","BATTERY_WARNING_FAILED","BATTERY_STATE_UNHEALTHY","BATTERY_STATE_CHARGING","BATTERY_FAULT_DEEP_DISCHARGE","BATTERY_FAULT_SPIKES","BATTERY_FAULT_CELL_FAIL","BATTERY_FAULT_OVER_CURRENT","BATTERY_FAULT_OVER_TEMPERATURE","BATTERY_FAULT_UNDER_TEMPERATURE","BATTERY_FAULT_INCOMPATIBLE_VOLTAGE","BATTERY_FAULT_INCOMPATIBLE_FIRMWARE","BATTERY_FAULT_INCOMPATIBLE_MODEL","BATTERY_FAULT_HARDWARE_FAILURE","BATTERY_FAULT_FAILED_TO_ARM","BATTERY_FAULT_COUNT","faults","warning","MAX_INSTANCES","full_charge_capacity_wh","remaining_capacity_wh","over_discharge_count","nominal_voltage","internal_resistance_estimate","ocv_estimate","ocv_estimate_filtered","volt_based_soc_estimate","voltage_prediction","prediction_error","estimation_covariance_norm"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/BatteryStatus");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // connected
    auto currentElement_connected = (msg + ctr)->connected;
    outArray[ctr]["connected"] = factory.createScalar(currentElement_connected);
    // voltage_v
    auto currentElement_voltage_v = (msg + ctr)->voltage_v;
    outArray[ctr]["voltage_v"] = factory.createScalar(currentElement_voltage_v);
    // current_a
    auto currentElement_current_a = (msg + ctr)->current_a;
    outArray[ctr]["current_a"] = factory.createScalar(currentElement_current_a);
    // current_average_a
    auto currentElement_current_average_a = (msg + ctr)->current_average_a;
    outArray[ctr]["current_average_a"] = factory.createScalar(currentElement_current_average_a);
    // discharged_mah
    auto currentElement_discharged_mah = (msg + ctr)->discharged_mah;
    outArray[ctr]["discharged_mah"] = factory.createScalar(currentElement_discharged_mah);
    // remaining
    auto currentElement_remaining = (msg + ctr)->remaining;
    outArray[ctr]["remaining"] = factory.createScalar(currentElement_remaining);
    // scale
    auto currentElement_scale = (msg + ctr)->scale;
    outArray[ctr]["scale"] = factory.createScalar(currentElement_scale);
    // time_remaining_s
    auto currentElement_time_remaining_s = (msg + ctr)->time_remaining_s;
    outArray[ctr]["time_remaining_s"] = factory.createScalar(currentElement_time_remaining_s);
    // temperature
    auto currentElement_temperature = (msg + ctr)->temperature;
    outArray[ctr]["temperature"] = factory.createScalar(currentElement_temperature);
    // cell_count
    auto currentElement_cell_count = (msg + ctr)->cell_count;
    outArray[ctr]["cell_count"] = factory.createScalar(currentElement_cell_count);
    // BATTERY_SOURCE_POWER_MODULE
    auto currentElement_BATTERY_SOURCE_POWER_MODULE = (msg + ctr)->BATTERY_SOURCE_POWER_MODULE;
    outArray[ctr]["BATTERY_SOURCE_POWER_MODULE"] = factory.createScalar(currentElement_BATTERY_SOURCE_POWER_MODULE);
    // BATTERY_SOURCE_EXTERNAL
    auto currentElement_BATTERY_SOURCE_EXTERNAL = (msg + ctr)->BATTERY_SOURCE_EXTERNAL;
    outArray[ctr]["BATTERY_SOURCE_EXTERNAL"] = factory.createScalar(currentElement_BATTERY_SOURCE_EXTERNAL);
    // BATTERY_SOURCE_ESCS
    auto currentElement_BATTERY_SOURCE_ESCS = (msg + ctr)->BATTERY_SOURCE_ESCS;
    outArray[ctr]["BATTERY_SOURCE_ESCS"] = factory.createScalar(currentElement_BATTERY_SOURCE_ESCS);
    // source
    auto currentElement_source = (msg + ctr)->source;
    outArray[ctr]["source"] = factory.createScalar(currentElement_source);
    // priority
    auto currentElement_priority = (msg + ctr)->priority;
    outArray[ctr]["priority"] = factory.createScalar(currentElement_priority);
    // capacity
    auto currentElement_capacity = (msg + ctr)->capacity;
    outArray[ctr]["capacity"] = factory.createScalar(currentElement_capacity);
    // cycle_count
    auto currentElement_cycle_count = (msg + ctr)->cycle_count;
    outArray[ctr]["cycle_count"] = factory.createScalar(currentElement_cycle_count);
    // average_time_to_empty
    auto currentElement_average_time_to_empty = (msg + ctr)->average_time_to_empty;
    outArray[ctr]["average_time_to_empty"] = factory.createScalar(currentElement_average_time_to_empty);
    // serial_number
    auto currentElement_serial_number = (msg + ctr)->serial_number;
    outArray[ctr]["serial_number"] = factory.createScalar(currentElement_serial_number);
    // manufacture_date
    auto currentElement_manufacture_date = (msg + ctr)->manufacture_date;
    outArray[ctr]["manufacture_date"] = factory.createScalar(currentElement_manufacture_date);
    // state_of_health
    auto currentElement_state_of_health = (msg + ctr)->state_of_health;
    outArray[ctr]["state_of_health"] = factory.createScalar(currentElement_state_of_health);
    // max_error
    auto currentElement_max_error = (msg + ctr)->max_error;
    outArray[ctr]["max_error"] = factory.createScalar(currentElement_max_error);
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // interface_error
    auto currentElement_interface_error = (msg + ctr)->interface_error;
    outArray[ctr]["interface_error"] = factory.createScalar(currentElement_interface_error);
    // voltage_cell_v
    auto currentElement_voltage_cell_v = (msg + ctr)->voltage_cell_v;
    outArray[ctr]["voltage_cell_v"] = factory.createArray<px4_msgs::msg::BatteryStatus::_voltage_cell_v_type::const_iterator, float>({currentElement_voltage_cell_v.size(), 1}, currentElement_voltage_cell_v.begin(), currentElement_voltage_cell_v.end());
    // max_cell_voltage_delta
    auto currentElement_max_cell_voltage_delta = (msg + ctr)->max_cell_voltage_delta;
    outArray[ctr]["max_cell_voltage_delta"] = factory.createScalar(currentElement_max_cell_voltage_delta);
    // is_powering_off
    auto currentElement_is_powering_off = (msg + ctr)->is_powering_off;
    outArray[ctr]["is_powering_off"] = factory.createScalar(currentElement_is_powering_off);
    // is_required
    auto currentElement_is_required = (msg + ctr)->is_required;
    outArray[ctr]["is_required"] = factory.createScalar(currentElement_is_required);
    // BATTERY_WARNING_NONE
    auto currentElement_BATTERY_WARNING_NONE = (msg + ctr)->BATTERY_WARNING_NONE;
    outArray[ctr]["BATTERY_WARNING_NONE"] = factory.createScalar(currentElement_BATTERY_WARNING_NONE);
    // BATTERY_WARNING_LOW
    auto currentElement_BATTERY_WARNING_LOW = (msg + ctr)->BATTERY_WARNING_LOW;
    outArray[ctr]["BATTERY_WARNING_LOW"] = factory.createScalar(currentElement_BATTERY_WARNING_LOW);
    // BATTERY_WARNING_CRITICAL
    auto currentElement_BATTERY_WARNING_CRITICAL = (msg + ctr)->BATTERY_WARNING_CRITICAL;
    outArray[ctr]["BATTERY_WARNING_CRITICAL"] = factory.createScalar(currentElement_BATTERY_WARNING_CRITICAL);
    // BATTERY_WARNING_EMERGENCY
    auto currentElement_BATTERY_WARNING_EMERGENCY = (msg + ctr)->BATTERY_WARNING_EMERGENCY;
    outArray[ctr]["BATTERY_WARNING_EMERGENCY"] = factory.createScalar(currentElement_BATTERY_WARNING_EMERGENCY);
    // BATTERY_WARNING_FAILED
    auto currentElement_BATTERY_WARNING_FAILED = (msg + ctr)->BATTERY_WARNING_FAILED;
    outArray[ctr]["BATTERY_WARNING_FAILED"] = factory.createScalar(currentElement_BATTERY_WARNING_FAILED);
    // BATTERY_STATE_UNHEALTHY
    auto currentElement_BATTERY_STATE_UNHEALTHY = (msg + ctr)->BATTERY_STATE_UNHEALTHY;
    outArray[ctr]["BATTERY_STATE_UNHEALTHY"] = factory.createScalar(currentElement_BATTERY_STATE_UNHEALTHY);
    // BATTERY_STATE_CHARGING
    auto currentElement_BATTERY_STATE_CHARGING = (msg + ctr)->BATTERY_STATE_CHARGING;
    outArray[ctr]["BATTERY_STATE_CHARGING"] = factory.createScalar(currentElement_BATTERY_STATE_CHARGING);
    // BATTERY_FAULT_DEEP_DISCHARGE
    auto currentElement_BATTERY_FAULT_DEEP_DISCHARGE = (msg + ctr)->BATTERY_FAULT_DEEP_DISCHARGE;
    outArray[ctr]["BATTERY_FAULT_DEEP_DISCHARGE"] = factory.createScalar(currentElement_BATTERY_FAULT_DEEP_DISCHARGE);
    // BATTERY_FAULT_SPIKES
    auto currentElement_BATTERY_FAULT_SPIKES = (msg + ctr)->BATTERY_FAULT_SPIKES;
    outArray[ctr]["BATTERY_FAULT_SPIKES"] = factory.createScalar(currentElement_BATTERY_FAULT_SPIKES);
    // BATTERY_FAULT_CELL_FAIL
    auto currentElement_BATTERY_FAULT_CELL_FAIL = (msg + ctr)->BATTERY_FAULT_CELL_FAIL;
    outArray[ctr]["BATTERY_FAULT_CELL_FAIL"] = factory.createScalar(currentElement_BATTERY_FAULT_CELL_FAIL);
    // BATTERY_FAULT_OVER_CURRENT
    auto currentElement_BATTERY_FAULT_OVER_CURRENT = (msg + ctr)->BATTERY_FAULT_OVER_CURRENT;
    outArray[ctr]["BATTERY_FAULT_OVER_CURRENT"] = factory.createScalar(currentElement_BATTERY_FAULT_OVER_CURRENT);
    // BATTERY_FAULT_OVER_TEMPERATURE
    auto currentElement_BATTERY_FAULT_OVER_TEMPERATURE = (msg + ctr)->BATTERY_FAULT_OVER_TEMPERATURE;
    outArray[ctr]["BATTERY_FAULT_OVER_TEMPERATURE"] = factory.createScalar(currentElement_BATTERY_FAULT_OVER_TEMPERATURE);
    // BATTERY_FAULT_UNDER_TEMPERATURE
    auto currentElement_BATTERY_FAULT_UNDER_TEMPERATURE = (msg + ctr)->BATTERY_FAULT_UNDER_TEMPERATURE;
    outArray[ctr]["BATTERY_FAULT_UNDER_TEMPERATURE"] = factory.createScalar(currentElement_BATTERY_FAULT_UNDER_TEMPERATURE);
    // BATTERY_FAULT_INCOMPATIBLE_VOLTAGE
    auto currentElement_BATTERY_FAULT_INCOMPATIBLE_VOLTAGE = (msg + ctr)->BATTERY_FAULT_INCOMPATIBLE_VOLTAGE;
    outArray[ctr]["BATTERY_FAULT_INCOMPATIBLE_VOLTAGE"] = factory.createScalar(currentElement_BATTERY_FAULT_INCOMPATIBLE_VOLTAGE);
    // BATTERY_FAULT_INCOMPATIBLE_FIRMWARE
    auto currentElement_BATTERY_FAULT_INCOMPATIBLE_FIRMWARE = (msg + ctr)->BATTERY_FAULT_INCOMPATIBLE_FIRMWARE;
    outArray[ctr]["BATTERY_FAULT_INCOMPATIBLE_FIRMWARE"] = factory.createScalar(currentElement_BATTERY_FAULT_INCOMPATIBLE_FIRMWARE);
    // BATTERY_FAULT_INCOMPATIBLE_MODEL
    auto currentElement_BATTERY_FAULT_INCOMPATIBLE_MODEL = (msg + ctr)->BATTERY_FAULT_INCOMPATIBLE_MODEL;
    outArray[ctr]["BATTERY_FAULT_INCOMPATIBLE_MODEL"] = factory.createScalar(currentElement_BATTERY_FAULT_INCOMPATIBLE_MODEL);
    // BATTERY_FAULT_HARDWARE_FAILURE
    auto currentElement_BATTERY_FAULT_HARDWARE_FAILURE = (msg + ctr)->BATTERY_FAULT_HARDWARE_FAILURE;
    outArray[ctr]["BATTERY_FAULT_HARDWARE_FAILURE"] = factory.createScalar(currentElement_BATTERY_FAULT_HARDWARE_FAILURE);
    // BATTERY_FAULT_FAILED_TO_ARM
    auto currentElement_BATTERY_FAULT_FAILED_TO_ARM = (msg + ctr)->BATTERY_FAULT_FAILED_TO_ARM;
    outArray[ctr]["BATTERY_FAULT_FAILED_TO_ARM"] = factory.createScalar(currentElement_BATTERY_FAULT_FAILED_TO_ARM);
    // BATTERY_FAULT_COUNT
    auto currentElement_BATTERY_FAULT_COUNT = (msg + ctr)->BATTERY_FAULT_COUNT;
    outArray[ctr]["BATTERY_FAULT_COUNT"] = factory.createScalar(currentElement_BATTERY_FAULT_COUNT);
    // faults
    auto currentElement_faults = (msg + ctr)->faults;
    outArray[ctr]["faults"] = factory.createScalar(currentElement_faults);
    // warning
    auto currentElement_warning = (msg + ctr)->warning;
    outArray[ctr]["warning"] = factory.createScalar(currentElement_warning);
    // MAX_INSTANCES
    auto currentElement_MAX_INSTANCES = (msg + ctr)->MAX_INSTANCES;
    outArray[ctr]["MAX_INSTANCES"] = factory.createScalar(currentElement_MAX_INSTANCES);
    // full_charge_capacity_wh
    auto currentElement_full_charge_capacity_wh = (msg + ctr)->full_charge_capacity_wh;
    outArray[ctr]["full_charge_capacity_wh"] = factory.createScalar(currentElement_full_charge_capacity_wh);
    // remaining_capacity_wh
    auto currentElement_remaining_capacity_wh = (msg + ctr)->remaining_capacity_wh;
    outArray[ctr]["remaining_capacity_wh"] = factory.createScalar(currentElement_remaining_capacity_wh);
    // over_discharge_count
    auto currentElement_over_discharge_count = (msg + ctr)->over_discharge_count;
    outArray[ctr]["over_discharge_count"] = factory.createScalar(currentElement_over_discharge_count);
    // nominal_voltage
    auto currentElement_nominal_voltage = (msg + ctr)->nominal_voltage;
    outArray[ctr]["nominal_voltage"] = factory.createScalar(currentElement_nominal_voltage);
    // internal_resistance_estimate
    auto currentElement_internal_resistance_estimate = (msg + ctr)->internal_resistance_estimate;
    outArray[ctr]["internal_resistance_estimate"] = factory.createScalar(currentElement_internal_resistance_estimate);
    // ocv_estimate
    auto currentElement_ocv_estimate = (msg + ctr)->ocv_estimate;
    outArray[ctr]["ocv_estimate"] = factory.createScalar(currentElement_ocv_estimate);
    // ocv_estimate_filtered
    auto currentElement_ocv_estimate_filtered = (msg + ctr)->ocv_estimate_filtered;
    outArray[ctr]["ocv_estimate_filtered"] = factory.createScalar(currentElement_ocv_estimate_filtered);
    // volt_based_soc_estimate
    auto currentElement_volt_based_soc_estimate = (msg + ctr)->volt_based_soc_estimate;
    outArray[ctr]["volt_based_soc_estimate"] = factory.createScalar(currentElement_volt_based_soc_estimate);
    // voltage_prediction
    auto currentElement_voltage_prediction = (msg + ctr)->voltage_prediction;
    outArray[ctr]["voltage_prediction"] = factory.createScalar(currentElement_voltage_prediction);
    // prediction_error
    auto currentElement_prediction_error = (msg + ctr)->prediction_error;
    outArray[ctr]["prediction_error"] = factory.createScalar(currentElement_prediction_error);
    // estimation_covariance_norm
    auto currentElement_estimation_covariance_norm = (msg + ctr)->estimation_covariance_norm;
    outArray[ctr]["estimation_covariance_norm"] = factory.createScalar(currentElement_estimation_covariance_norm);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_BatteryStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_BatteryStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_BatteryStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::BatteryStatus,ros2_px4_msgs_msg_BatteryStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_BatteryStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::BatteryStatus,ros2_px4_msgs_msg_BatteryStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_BatteryStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::BatteryStatus>();
    ros2_px4_msgs_msg_BatteryStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_BatteryStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_BatteryStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::BatteryStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_BatteryStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::BatteryStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_BatteryStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER