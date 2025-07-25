// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GeneratorStatus
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
#include "px4_msgs/msg/generator_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GeneratorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::GeneratorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_GeneratorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GeneratorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GeneratorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GeneratorStatus_common::copy_from_struct(px4_msgs::msg::GeneratorStatus* msg, const matlab::data::Struct& arr,
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
        //status
        const matlab::data::TypedArray<uint64_t> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a uint64.");
    }
    try {
        //battery_current
        const matlab::data::TypedArray<float> battery_current_arr = arr["battery_current"];
        msg->battery_current = battery_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'battery_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'battery_current' is wrong type; expected a single.");
    }
    try {
        //load_current
        const matlab::data::TypedArray<float> load_current_arr = arr["load_current"];
        msg->load_current = load_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'load_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'load_current' is wrong type; expected a single.");
    }
    try {
        //power_generated
        const matlab::data::TypedArray<float> power_generated_arr = arr["power_generated"];
        msg->power_generated = power_generated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'power_generated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'power_generated' is wrong type; expected a single.");
    }
    try {
        //bus_voltage
        const matlab::data::TypedArray<float> bus_voltage_arr = arr["bus_voltage"];
        msg->bus_voltage = bus_voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bus_voltage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bus_voltage' is wrong type; expected a single.");
    }
    try {
        //bat_current_setpoint
        const matlab::data::TypedArray<float> bat_current_setpoint_arr = arr["bat_current_setpoint"];
        msg->bat_current_setpoint = bat_current_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bat_current_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bat_current_setpoint' is wrong type; expected a single.");
    }
    try {
        //runtime
        const matlab::data::TypedArray<uint32_t> runtime_arr = arr["runtime"];
        msg->runtime = runtime_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'runtime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'runtime' is wrong type; expected a uint32.");
    }
    try {
        //time_until_maintenance
        const matlab::data::TypedArray<int32_t> time_until_maintenance_arr = arr["time_until_maintenance"];
        msg->time_until_maintenance = time_until_maintenance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_until_maintenance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_until_maintenance' is wrong type; expected a int32.");
    }
    try {
        //generator_speed
        const matlab::data::TypedArray<uint16_t> generator_speed_arr = arr["generator_speed"];
        msg->generator_speed = generator_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'generator_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'generator_speed' is wrong type; expected a uint16.");
    }
    try {
        //rectifier_temperature
        const matlab::data::TypedArray<int16_t> rectifier_temperature_arr = arr["rectifier_temperature"];
        msg->rectifier_temperature = rectifier_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rectifier_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rectifier_temperature' is wrong type; expected a int16.");
    }
    try {
        //generator_temperature
        const matlab::data::TypedArray<int16_t> generator_temperature_arr = arr["generator_temperature"];
        msg->generator_temperature = generator_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'generator_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'generator_temperature' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GeneratorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GeneratorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","STATUS_FLAG_OFF","STATUS_FLAG_READY","STATUS_FLAG_GENERATING","STATUS_FLAG_CHARGING","STATUS_FLAG_REDUCED_POWER","STATUS_FLAG_MAXPOWER","STATUS_FLAG_OVERTEMP_WARNING","STATUS_FLAG_OVERTEMP_FAULT","STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING","STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT","STATUS_FLAG_ELECTRONICS_FAULT","STATUS_FLAG_POWERSOURCE_FAULT","STATUS_FLAG_COMMUNICATION_WARNING","STATUS_FLAG_COOLING_WARNING","STATUS_FLAG_POWER_RAIL_FAULT","STATUS_FLAG_OVERCURRENT_FAULT","STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT","STATUS_FLAG_OVERVOLTAGE_FAULT","STATUS_FLAG_BATTERY_UNDERVOLT_FAULT","STATUS_FLAG_START_INHIBITED","STATUS_FLAG_MAINTENANCE_REQUIRED","STATUS_FLAG_WARMING_UP","STATUS_FLAG_IDLE","status","battery_current","load_current","power_generated","bus_voltage","bat_current_setpoint","runtime","time_until_maintenance","generator_speed","rectifier_temperature","generator_temperature"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GeneratorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // STATUS_FLAG_OFF
    auto currentElement_STATUS_FLAG_OFF = (msg + ctr)->STATUS_FLAG_OFF;
    outArray[ctr]["STATUS_FLAG_OFF"] = factory.createScalar(currentElement_STATUS_FLAG_OFF);
    // STATUS_FLAG_READY
    auto currentElement_STATUS_FLAG_READY = (msg + ctr)->STATUS_FLAG_READY;
    outArray[ctr]["STATUS_FLAG_READY"] = factory.createScalar(currentElement_STATUS_FLAG_READY);
    // STATUS_FLAG_GENERATING
    auto currentElement_STATUS_FLAG_GENERATING = (msg + ctr)->STATUS_FLAG_GENERATING;
    outArray[ctr]["STATUS_FLAG_GENERATING"] = factory.createScalar(currentElement_STATUS_FLAG_GENERATING);
    // STATUS_FLAG_CHARGING
    auto currentElement_STATUS_FLAG_CHARGING = (msg + ctr)->STATUS_FLAG_CHARGING;
    outArray[ctr]["STATUS_FLAG_CHARGING"] = factory.createScalar(currentElement_STATUS_FLAG_CHARGING);
    // STATUS_FLAG_REDUCED_POWER
    auto currentElement_STATUS_FLAG_REDUCED_POWER = (msg + ctr)->STATUS_FLAG_REDUCED_POWER;
    outArray[ctr]["STATUS_FLAG_REDUCED_POWER"] = factory.createScalar(currentElement_STATUS_FLAG_REDUCED_POWER);
    // STATUS_FLAG_MAXPOWER
    auto currentElement_STATUS_FLAG_MAXPOWER = (msg + ctr)->STATUS_FLAG_MAXPOWER;
    outArray[ctr]["STATUS_FLAG_MAXPOWER"] = factory.createScalar(currentElement_STATUS_FLAG_MAXPOWER);
    // STATUS_FLAG_OVERTEMP_WARNING
    auto currentElement_STATUS_FLAG_OVERTEMP_WARNING = (msg + ctr)->STATUS_FLAG_OVERTEMP_WARNING;
    outArray[ctr]["STATUS_FLAG_OVERTEMP_WARNING"] = factory.createScalar(currentElement_STATUS_FLAG_OVERTEMP_WARNING);
    // STATUS_FLAG_OVERTEMP_FAULT
    auto currentElement_STATUS_FLAG_OVERTEMP_FAULT = (msg + ctr)->STATUS_FLAG_OVERTEMP_FAULT;
    outArray[ctr]["STATUS_FLAG_OVERTEMP_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_OVERTEMP_FAULT);
    // STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING
    auto currentElement_STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING = (msg + ctr)->STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING;
    outArray[ctr]["STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING"] = factory.createScalar(currentElement_STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING);
    // STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT
    auto currentElement_STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT = (msg + ctr)->STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT;
    outArray[ctr]["STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT);
    // STATUS_FLAG_ELECTRONICS_FAULT
    auto currentElement_STATUS_FLAG_ELECTRONICS_FAULT = (msg + ctr)->STATUS_FLAG_ELECTRONICS_FAULT;
    outArray[ctr]["STATUS_FLAG_ELECTRONICS_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_ELECTRONICS_FAULT);
    // STATUS_FLAG_POWERSOURCE_FAULT
    auto currentElement_STATUS_FLAG_POWERSOURCE_FAULT = (msg + ctr)->STATUS_FLAG_POWERSOURCE_FAULT;
    outArray[ctr]["STATUS_FLAG_POWERSOURCE_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_POWERSOURCE_FAULT);
    // STATUS_FLAG_COMMUNICATION_WARNING
    auto currentElement_STATUS_FLAG_COMMUNICATION_WARNING = (msg + ctr)->STATUS_FLAG_COMMUNICATION_WARNING;
    outArray[ctr]["STATUS_FLAG_COMMUNICATION_WARNING"] = factory.createScalar(currentElement_STATUS_FLAG_COMMUNICATION_WARNING);
    // STATUS_FLAG_COOLING_WARNING
    auto currentElement_STATUS_FLAG_COOLING_WARNING = (msg + ctr)->STATUS_FLAG_COOLING_WARNING;
    outArray[ctr]["STATUS_FLAG_COOLING_WARNING"] = factory.createScalar(currentElement_STATUS_FLAG_COOLING_WARNING);
    // STATUS_FLAG_POWER_RAIL_FAULT
    auto currentElement_STATUS_FLAG_POWER_RAIL_FAULT = (msg + ctr)->STATUS_FLAG_POWER_RAIL_FAULT;
    outArray[ctr]["STATUS_FLAG_POWER_RAIL_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_POWER_RAIL_FAULT);
    // STATUS_FLAG_OVERCURRENT_FAULT
    auto currentElement_STATUS_FLAG_OVERCURRENT_FAULT = (msg + ctr)->STATUS_FLAG_OVERCURRENT_FAULT;
    outArray[ctr]["STATUS_FLAG_OVERCURRENT_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_OVERCURRENT_FAULT);
    // STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT
    auto currentElement_STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT = (msg + ctr)->STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT;
    outArray[ctr]["STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT);
    // STATUS_FLAG_OVERVOLTAGE_FAULT
    auto currentElement_STATUS_FLAG_OVERVOLTAGE_FAULT = (msg + ctr)->STATUS_FLAG_OVERVOLTAGE_FAULT;
    outArray[ctr]["STATUS_FLAG_OVERVOLTAGE_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_OVERVOLTAGE_FAULT);
    // STATUS_FLAG_BATTERY_UNDERVOLT_FAULT
    auto currentElement_STATUS_FLAG_BATTERY_UNDERVOLT_FAULT = (msg + ctr)->STATUS_FLAG_BATTERY_UNDERVOLT_FAULT;
    outArray[ctr]["STATUS_FLAG_BATTERY_UNDERVOLT_FAULT"] = factory.createScalar(currentElement_STATUS_FLAG_BATTERY_UNDERVOLT_FAULT);
    // STATUS_FLAG_START_INHIBITED
    auto currentElement_STATUS_FLAG_START_INHIBITED = (msg + ctr)->STATUS_FLAG_START_INHIBITED;
    outArray[ctr]["STATUS_FLAG_START_INHIBITED"] = factory.createScalar(currentElement_STATUS_FLAG_START_INHIBITED);
    // STATUS_FLAG_MAINTENANCE_REQUIRED
    auto currentElement_STATUS_FLAG_MAINTENANCE_REQUIRED = (msg + ctr)->STATUS_FLAG_MAINTENANCE_REQUIRED;
    outArray[ctr]["STATUS_FLAG_MAINTENANCE_REQUIRED"] = factory.createScalar(currentElement_STATUS_FLAG_MAINTENANCE_REQUIRED);
    // STATUS_FLAG_WARMING_UP
    auto currentElement_STATUS_FLAG_WARMING_UP = (msg + ctr)->STATUS_FLAG_WARMING_UP;
    outArray[ctr]["STATUS_FLAG_WARMING_UP"] = factory.createScalar(currentElement_STATUS_FLAG_WARMING_UP);
    // STATUS_FLAG_IDLE
    auto currentElement_STATUS_FLAG_IDLE = (msg + ctr)->STATUS_FLAG_IDLE;
    outArray[ctr]["STATUS_FLAG_IDLE"] = factory.createScalar(currentElement_STATUS_FLAG_IDLE);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    // battery_current
    auto currentElement_battery_current = (msg + ctr)->battery_current;
    outArray[ctr]["battery_current"] = factory.createScalar(currentElement_battery_current);
    // load_current
    auto currentElement_load_current = (msg + ctr)->load_current;
    outArray[ctr]["load_current"] = factory.createScalar(currentElement_load_current);
    // power_generated
    auto currentElement_power_generated = (msg + ctr)->power_generated;
    outArray[ctr]["power_generated"] = factory.createScalar(currentElement_power_generated);
    // bus_voltage
    auto currentElement_bus_voltage = (msg + ctr)->bus_voltage;
    outArray[ctr]["bus_voltage"] = factory.createScalar(currentElement_bus_voltage);
    // bat_current_setpoint
    auto currentElement_bat_current_setpoint = (msg + ctr)->bat_current_setpoint;
    outArray[ctr]["bat_current_setpoint"] = factory.createScalar(currentElement_bat_current_setpoint);
    // runtime
    auto currentElement_runtime = (msg + ctr)->runtime;
    outArray[ctr]["runtime"] = factory.createScalar(currentElement_runtime);
    // time_until_maintenance
    auto currentElement_time_until_maintenance = (msg + ctr)->time_until_maintenance;
    outArray[ctr]["time_until_maintenance"] = factory.createScalar(currentElement_time_until_maintenance);
    // generator_speed
    auto currentElement_generator_speed = (msg + ctr)->generator_speed;
    outArray[ctr]["generator_speed"] = factory.createScalar(currentElement_generator_speed);
    // rectifier_temperature
    auto currentElement_rectifier_temperature = (msg + ctr)->rectifier_temperature;
    outArray[ctr]["rectifier_temperature"] = factory.createScalar(currentElement_rectifier_temperature);
    // generator_temperature
    auto currentElement_generator_temperature = (msg + ctr)->generator_temperature;
    outArray[ctr]["generator_temperature"] = factory.createScalar(currentElement_generator_temperature);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GeneratorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GeneratorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GeneratorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GeneratorStatus,ros2_px4_msgs_msg_GeneratorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GeneratorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GeneratorStatus,ros2_px4_msgs_msg_GeneratorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GeneratorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GeneratorStatus>();
    ros2_px4_msgs_msg_GeneratorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GeneratorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GeneratorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GeneratorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GeneratorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::GeneratorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GeneratorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER