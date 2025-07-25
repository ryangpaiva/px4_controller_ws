// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/FuelTankStatus
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
#include "px4_msgs/msg/fuel_tank_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_FuelTankStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::FuelTankStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_FuelTankStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::FuelTankStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::FuelTankStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_FuelTankStatus_common::copy_from_struct(px4_msgs::msg::FuelTankStatus* msg, const matlab::data::Struct& arr,
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
        //maximum_fuel_capacity
        const matlab::data::TypedArray<float> maximum_fuel_capacity_arr = arr["maximum_fuel_capacity"];
        msg->maximum_fuel_capacity = maximum_fuel_capacity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'maximum_fuel_capacity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'maximum_fuel_capacity' is wrong type; expected a single.");
    }
    try {
        //consumed_fuel
        const matlab::data::TypedArray<float> consumed_fuel_arr = arr["consumed_fuel"];
        msg->consumed_fuel = consumed_fuel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'consumed_fuel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'consumed_fuel' is wrong type; expected a single.");
    }
    try {
        //fuel_consumption_rate
        const matlab::data::TypedArray<float> fuel_consumption_rate_arr = arr["fuel_consumption_rate"];
        msg->fuel_consumption_rate = fuel_consumption_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fuel_consumption_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fuel_consumption_rate' is wrong type; expected a single.");
    }
    try {
        //percent_remaining
        const matlab::data::TypedArray<uint8_t> percent_remaining_arr = arr["percent_remaining"];
        msg->percent_remaining = percent_remaining_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'percent_remaining' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'percent_remaining' is wrong type; expected a uint8.");
    }
    try {
        //remaining_fuel
        const matlab::data::TypedArray<float> remaining_fuel_arr = arr["remaining_fuel"];
        msg->remaining_fuel = remaining_fuel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remaining_fuel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remaining_fuel' is wrong type; expected a single.");
    }
    try {
        //fuel_tank_id
        const matlab::data::TypedArray<uint8_t> fuel_tank_id_arr = arr["fuel_tank_id"];
        msg->fuel_tank_id = fuel_tank_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fuel_tank_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fuel_tank_id' is wrong type; expected a uint8.");
    }
    try {
        //fuel_type
        const matlab::data::TypedArray<uint32_t> fuel_type_arr = arr["fuel_type"];
        msg->fuel_type = fuel_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fuel_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fuel_type' is wrong type; expected a uint32.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_FuelTankStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::FuelTankStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","maximum_fuel_capacity","consumed_fuel","fuel_consumption_rate","percent_remaining","remaining_fuel","fuel_tank_id","fuel_type","MAV_FUEL_TYPE_UNKNOWN","MAV_FUEL_TYPE_LIQUID","MAV_FUEL_TYPE_GAS","temperature"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/FuelTankStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // maximum_fuel_capacity
    auto currentElement_maximum_fuel_capacity = (msg + ctr)->maximum_fuel_capacity;
    outArray[ctr]["maximum_fuel_capacity"] = factory.createScalar(currentElement_maximum_fuel_capacity);
    // consumed_fuel
    auto currentElement_consumed_fuel = (msg + ctr)->consumed_fuel;
    outArray[ctr]["consumed_fuel"] = factory.createScalar(currentElement_consumed_fuel);
    // fuel_consumption_rate
    auto currentElement_fuel_consumption_rate = (msg + ctr)->fuel_consumption_rate;
    outArray[ctr]["fuel_consumption_rate"] = factory.createScalar(currentElement_fuel_consumption_rate);
    // percent_remaining
    auto currentElement_percent_remaining = (msg + ctr)->percent_remaining;
    outArray[ctr]["percent_remaining"] = factory.createScalar(currentElement_percent_remaining);
    // remaining_fuel
    auto currentElement_remaining_fuel = (msg + ctr)->remaining_fuel;
    outArray[ctr]["remaining_fuel"] = factory.createScalar(currentElement_remaining_fuel);
    // fuel_tank_id
    auto currentElement_fuel_tank_id = (msg + ctr)->fuel_tank_id;
    outArray[ctr]["fuel_tank_id"] = factory.createScalar(currentElement_fuel_tank_id);
    // fuel_type
    auto currentElement_fuel_type = (msg + ctr)->fuel_type;
    outArray[ctr]["fuel_type"] = factory.createScalar(currentElement_fuel_type);
    // MAV_FUEL_TYPE_UNKNOWN
    auto currentElement_MAV_FUEL_TYPE_UNKNOWN = (msg + ctr)->MAV_FUEL_TYPE_UNKNOWN;
    outArray[ctr]["MAV_FUEL_TYPE_UNKNOWN"] = factory.createScalar(currentElement_MAV_FUEL_TYPE_UNKNOWN);
    // MAV_FUEL_TYPE_LIQUID
    auto currentElement_MAV_FUEL_TYPE_LIQUID = (msg + ctr)->MAV_FUEL_TYPE_LIQUID;
    outArray[ctr]["MAV_FUEL_TYPE_LIQUID"] = factory.createScalar(currentElement_MAV_FUEL_TYPE_LIQUID);
    // MAV_FUEL_TYPE_GAS
    auto currentElement_MAV_FUEL_TYPE_GAS = (msg + ctr)->MAV_FUEL_TYPE_GAS;
    outArray[ctr]["MAV_FUEL_TYPE_GAS"] = factory.createScalar(currentElement_MAV_FUEL_TYPE_GAS);
    // temperature
    auto currentElement_temperature = (msg + ctr)->temperature;
    outArray[ctr]["temperature"] = factory.createScalar(currentElement_temperature);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_FuelTankStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_FuelTankStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_FuelTankStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::FuelTankStatus,ros2_px4_msgs_msg_FuelTankStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_FuelTankStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::FuelTankStatus,ros2_px4_msgs_msg_FuelTankStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_FuelTankStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::FuelTankStatus>();
    ros2_px4_msgs_msg_FuelTankStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_FuelTankStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_FuelTankStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::FuelTankStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_FuelTankStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::FuelTankStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_FuelTankStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER