// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SystemPower
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
#include "px4_msgs/msg/system_power.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SystemPower_common : public MATLABROS2MsgInterface<px4_msgs::msg::SystemPower> {
  public:
    virtual ~ros2_px4_msgs_msg_SystemPower_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SystemPower* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SystemPower* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SystemPower_common::copy_from_struct(px4_msgs::msg::SystemPower* msg, const matlab::data::Struct& arr,
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
        //voltage5v_v
        const matlab::data::TypedArray<float> voltage5v_v_arr = arr["voltage5v_v"];
        msg->voltage5v_v = voltage5v_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage5v_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage5v_v' is wrong type; expected a single.");
    }
    try {
        //voltage_payload_v
        const matlab::data::TypedArray<float> voltage_payload_v_arr = arr["voltage_payload_v"];
        msg->voltage_payload_v = voltage_payload_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_payload_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_payload_v' is wrong type; expected a single.");
    }
    try {
        //sensors3v3
        const matlab::data::TypedArray<float> sensors3v3_arr = arr["sensors3v3"];
        size_t nelem = 4;
        	std::copy(sensors3v3_arr.begin(), sensors3v3_arr.begin()+nelem, msg->sensors3v3.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sensors3v3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sensors3v3' is wrong type; expected a single.");
    }
    try {
        //sensors3v3_valid
        const matlab::data::TypedArray<uint8_t> sensors3v3_valid_arr = arr["sensors3v3_valid"];
        msg->sensors3v3_valid = sensors3v3_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sensors3v3_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sensors3v3_valid' is wrong type; expected a uint8.");
    }
    try {
        //usb_connected
        const matlab::data::TypedArray<uint8_t> usb_connected_arr = arr["usb_connected"];
        msg->usb_connected = usb_connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'usb_connected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'usb_connected' is wrong type; expected a uint8.");
    }
    try {
        //brick_valid
        const matlab::data::TypedArray<uint8_t> brick_valid_arr = arr["brick_valid"];
        msg->brick_valid = brick_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'brick_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'brick_valid' is wrong type; expected a uint8.");
    }
    try {
        //usb_valid
        const matlab::data::TypedArray<uint8_t> usb_valid_arr = arr["usb_valid"];
        msg->usb_valid = usb_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'usb_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'usb_valid' is wrong type; expected a uint8.");
    }
    try {
        //servo_valid
        const matlab::data::TypedArray<uint8_t> servo_valid_arr = arr["servo_valid"];
        msg->servo_valid = servo_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'servo_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'servo_valid' is wrong type; expected a uint8.");
    }
    try {
        //periph_5v_oc
        const matlab::data::TypedArray<uint8_t> periph_5v_oc_arr = arr["periph_5v_oc"];
        msg->periph_5v_oc = periph_5v_oc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'periph_5v_oc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'periph_5v_oc' is wrong type; expected a uint8.");
    }
    try {
        //hipower_5v_oc
        const matlab::data::TypedArray<uint8_t> hipower_5v_oc_arr = arr["hipower_5v_oc"];
        msg->hipower_5v_oc = hipower_5v_oc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hipower_5v_oc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hipower_5v_oc' is wrong type; expected a uint8.");
    }
    try {
        //comp_5v_valid
        const matlab::data::TypedArray<uint8_t> comp_5v_valid_arr = arr["comp_5v_valid"];
        msg->comp_5v_valid = comp_5v_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'comp_5v_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'comp_5v_valid' is wrong type; expected a uint8.");
    }
    try {
        //can1_gps1_5v_valid
        const matlab::data::TypedArray<uint8_t> can1_gps1_5v_valid_arr = arr["can1_gps1_5v_valid"];
        msg->can1_gps1_5v_valid = can1_gps1_5v_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can1_gps1_5v_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can1_gps1_5v_valid' is wrong type; expected a uint8.");
    }
    try {
        //payload_v_valid
        const matlab::data::TypedArray<uint8_t> payload_v_valid_arr = arr["payload_v_valid"];
        msg->payload_v_valid = payload_v_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload_v_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'payload_v_valid' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SystemPower_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SystemPower* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","voltage5v_v","voltage_payload_v","sensors3v3","sensors3v3_valid","usb_connected","brick_valid","usb_valid","servo_valid","periph_5v_oc","hipower_5v_oc","comp_5v_valid","can1_gps1_5v_valid","payload_v_valid","BRICK1_VALID_SHIFTS","BRICK1_VALID_MASK","BRICK2_VALID_SHIFTS","BRICK2_VALID_MASK","BRICK3_VALID_SHIFTS","BRICK3_VALID_MASK","BRICK4_VALID_SHIFTS","BRICK4_VALID_MASK"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SystemPower");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // voltage5v_v
    auto currentElement_voltage5v_v = (msg + ctr)->voltage5v_v;
    outArray[ctr]["voltage5v_v"] = factory.createScalar(currentElement_voltage5v_v);
    // voltage_payload_v
    auto currentElement_voltage_payload_v = (msg + ctr)->voltage_payload_v;
    outArray[ctr]["voltage_payload_v"] = factory.createScalar(currentElement_voltage_payload_v);
    // sensors3v3
    auto currentElement_sensors3v3 = (msg + ctr)->sensors3v3;
    outArray[ctr]["sensors3v3"] = factory.createArray<px4_msgs::msg::SystemPower::_sensors3v3_type::const_iterator, float>({currentElement_sensors3v3.size(), 1}, currentElement_sensors3v3.begin(), currentElement_sensors3v3.end());
    // sensors3v3_valid
    auto currentElement_sensors3v3_valid = (msg + ctr)->sensors3v3_valid;
    outArray[ctr]["sensors3v3_valid"] = factory.createScalar(currentElement_sensors3v3_valid);
    // usb_connected
    auto currentElement_usb_connected = (msg + ctr)->usb_connected;
    outArray[ctr]["usb_connected"] = factory.createScalar(currentElement_usb_connected);
    // brick_valid
    auto currentElement_brick_valid = (msg + ctr)->brick_valid;
    outArray[ctr]["brick_valid"] = factory.createScalar(currentElement_brick_valid);
    // usb_valid
    auto currentElement_usb_valid = (msg + ctr)->usb_valid;
    outArray[ctr]["usb_valid"] = factory.createScalar(currentElement_usb_valid);
    // servo_valid
    auto currentElement_servo_valid = (msg + ctr)->servo_valid;
    outArray[ctr]["servo_valid"] = factory.createScalar(currentElement_servo_valid);
    // periph_5v_oc
    auto currentElement_periph_5v_oc = (msg + ctr)->periph_5v_oc;
    outArray[ctr]["periph_5v_oc"] = factory.createScalar(currentElement_periph_5v_oc);
    // hipower_5v_oc
    auto currentElement_hipower_5v_oc = (msg + ctr)->hipower_5v_oc;
    outArray[ctr]["hipower_5v_oc"] = factory.createScalar(currentElement_hipower_5v_oc);
    // comp_5v_valid
    auto currentElement_comp_5v_valid = (msg + ctr)->comp_5v_valid;
    outArray[ctr]["comp_5v_valid"] = factory.createScalar(currentElement_comp_5v_valid);
    // can1_gps1_5v_valid
    auto currentElement_can1_gps1_5v_valid = (msg + ctr)->can1_gps1_5v_valid;
    outArray[ctr]["can1_gps1_5v_valid"] = factory.createScalar(currentElement_can1_gps1_5v_valid);
    // payload_v_valid
    auto currentElement_payload_v_valid = (msg + ctr)->payload_v_valid;
    outArray[ctr]["payload_v_valid"] = factory.createScalar(currentElement_payload_v_valid);
    // BRICK1_VALID_SHIFTS
    auto currentElement_BRICK1_VALID_SHIFTS = (msg + ctr)->BRICK1_VALID_SHIFTS;
    outArray[ctr]["BRICK1_VALID_SHIFTS"] = factory.createScalar(currentElement_BRICK1_VALID_SHIFTS);
    // BRICK1_VALID_MASK
    auto currentElement_BRICK1_VALID_MASK = (msg + ctr)->BRICK1_VALID_MASK;
    outArray[ctr]["BRICK1_VALID_MASK"] = factory.createScalar(currentElement_BRICK1_VALID_MASK);
    // BRICK2_VALID_SHIFTS
    auto currentElement_BRICK2_VALID_SHIFTS = (msg + ctr)->BRICK2_VALID_SHIFTS;
    outArray[ctr]["BRICK2_VALID_SHIFTS"] = factory.createScalar(currentElement_BRICK2_VALID_SHIFTS);
    // BRICK2_VALID_MASK
    auto currentElement_BRICK2_VALID_MASK = (msg + ctr)->BRICK2_VALID_MASK;
    outArray[ctr]["BRICK2_VALID_MASK"] = factory.createScalar(currentElement_BRICK2_VALID_MASK);
    // BRICK3_VALID_SHIFTS
    auto currentElement_BRICK3_VALID_SHIFTS = (msg + ctr)->BRICK3_VALID_SHIFTS;
    outArray[ctr]["BRICK3_VALID_SHIFTS"] = factory.createScalar(currentElement_BRICK3_VALID_SHIFTS);
    // BRICK3_VALID_MASK
    auto currentElement_BRICK3_VALID_MASK = (msg + ctr)->BRICK3_VALID_MASK;
    outArray[ctr]["BRICK3_VALID_MASK"] = factory.createScalar(currentElement_BRICK3_VALID_MASK);
    // BRICK4_VALID_SHIFTS
    auto currentElement_BRICK4_VALID_SHIFTS = (msg + ctr)->BRICK4_VALID_SHIFTS;
    outArray[ctr]["BRICK4_VALID_SHIFTS"] = factory.createScalar(currentElement_BRICK4_VALID_SHIFTS);
    // BRICK4_VALID_MASK
    auto currentElement_BRICK4_VALID_MASK = (msg + ctr)->BRICK4_VALID_MASK;
    outArray[ctr]["BRICK4_VALID_MASK"] = factory.createScalar(currentElement_BRICK4_VALID_MASK);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SystemPower_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SystemPower_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SystemPower_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SystemPower,ros2_px4_msgs_msg_SystemPower_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SystemPower_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SystemPower,ros2_px4_msgs_msg_SystemPower_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SystemPower_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SystemPower>();
    ros2_px4_msgs_msg_SystemPower_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SystemPower_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SystemPower_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SystemPower*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SystemPower_common, MATLABROS2MsgInterface<px4_msgs::msg::SystemPower>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SystemPower_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER