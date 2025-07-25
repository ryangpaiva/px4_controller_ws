// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleLandDetected
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
#include "px4_msgs/msg/vehicle_land_detected.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleLandDetected_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleLandDetected> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleLandDetected_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleLandDetected* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLandDetected* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleLandDetected_common::copy_from_struct(px4_msgs::msg::VehicleLandDetected* msg, const matlab::data::Struct& arr,
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
        //freefall
        const matlab::data::TypedArray<bool> freefall_arr = arr["freefall"];
        msg->freefall = freefall_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'freefall' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'freefall' is wrong type; expected a logical.");
    }
    try {
        //ground_contact
        const matlab::data::TypedArray<bool> ground_contact_arr = arr["ground_contact"];
        msg->ground_contact = ground_contact_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ground_contact' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ground_contact' is wrong type; expected a logical.");
    }
    try {
        //maybe_landed
        const matlab::data::TypedArray<bool> maybe_landed_arr = arr["maybe_landed"];
        msg->maybe_landed = maybe_landed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'maybe_landed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'maybe_landed' is wrong type; expected a logical.");
    }
    try {
        //landed
        const matlab::data::TypedArray<bool> landed_arr = arr["landed"];
        msg->landed = landed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'landed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'landed' is wrong type; expected a logical.");
    }
    try {
        //in_ground_effect
        const matlab::data::TypedArray<bool> in_ground_effect_arr = arr["in_ground_effect"];
        msg->in_ground_effect = in_ground_effect_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_ground_effect' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_ground_effect' is wrong type; expected a logical.");
    }
    try {
        //in_descend
        const matlab::data::TypedArray<bool> in_descend_arr = arr["in_descend"];
        msg->in_descend = in_descend_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_descend' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_descend' is wrong type; expected a logical.");
    }
    try {
        //has_low_throttle
        const matlab::data::TypedArray<bool> has_low_throttle_arr = arr["has_low_throttle"];
        msg->has_low_throttle = has_low_throttle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'has_low_throttle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'has_low_throttle' is wrong type; expected a logical.");
    }
    try {
        //vertical_movement
        const matlab::data::TypedArray<bool> vertical_movement_arr = arr["vertical_movement"];
        msg->vertical_movement = vertical_movement_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertical_movement' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vertical_movement' is wrong type; expected a logical.");
    }
    try {
        //horizontal_movement
        const matlab::data::TypedArray<bool> horizontal_movement_arr = arr["horizontal_movement"];
        msg->horizontal_movement = horizontal_movement_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'horizontal_movement' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'horizontal_movement' is wrong type; expected a logical.");
    }
    try {
        //rotational_movement
        const matlab::data::TypedArray<bool> rotational_movement_arr = arr["rotational_movement"];
        msg->rotational_movement = rotational_movement_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rotational_movement' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rotational_movement' is wrong type; expected a logical.");
    }
    try {
        //close_to_ground_or_skipped_check
        const matlab::data::TypedArray<bool> close_to_ground_or_skipped_check_arr = arr["close_to_ground_or_skipped_check"];
        msg->close_to_ground_or_skipped_check = close_to_ground_or_skipped_check_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'close_to_ground_or_skipped_check' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'close_to_ground_or_skipped_check' is wrong type; expected a logical.");
    }
    try {
        //at_rest
        const matlab::data::TypedArray<bool> at_rest_arr = arr["at_rest"];
        msg->at_rest = at_rest_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'at_rest' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'at_rest' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleLandDetected_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLandDetected* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","freefall","ground_contact","maybe_landed","landed","in_ground_effect","in_descend","has_low_throttle","vertical_movement","horizontal_movement","rotational_movement","close_to_ground_or_skipped_check","at_rest"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleLandDetected");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // freefall
    auto currentElement_freefall = (msg + ctr)->freefall;
    outArray[ctr]["freefall"] = factory.createScalar(currentElement_freefall);
    // ground_contact
    auto currentElement_ground_contact = (msg + ctr)->ground_contact;
    outArray[ctr]["ground_contact"] = factory.createScalar(currentElement_ground_contact);
    // maybe_landed
    auto currentElement_maybe_landed = (msg + ctr)->maybe_landed;
    outArray[ctr]["maybe_landed"] = factory.createScalar(currentElement_maybe_landed);
    // landed
    auto currentElement_landed = (msg + ctr)->landed;
    outArray[ctr]["landed"] = factory.createScalar(currentElement_landed);
    // in_ground_effect
    auto currentElement_in_ground_effect = (msg + ctr)->in_ground_effect;
    outArray[ctr]["in_ground_effect"] = factory.createScalar(currentElement_in_ground_effect);
    // in_descend
    auto currentElement_in_descend = (msg + ctr)->in_descend;
    outArray[ctr]["in_descend"] = factory.createScalar(currentElement_in_descend);
    // has_low_throttle
    auto currentElement_has_low_throttle = (msg + ctr)->has_low_throttle;
    outArray[ctr]["has_low_throttle"] = factory.createScalar(currentElement_has_low_throttle);
    // vertical_movement
    auto currentElement_vertical_movement = (msg + ctr)->vertical_movement;
    outArray[ctr]["vertical_movement"] = factory.createScalar(currentElement_vertical_movement);
    // horizontal_movement
    auto currentElement_horizontal_movement = (msg + ctr)->horizontal_movement;
    outArray[ctr]["horizontal_movement"] = factory.createScalar(currentElement_horizontal_movement);
    // rotational_movement
    auto currentElement_rotational_movement = (msg + ctr)->rotational_movement;
    outArray[ctr]["rotational_movement"] = factory.createScalar(currentElement_rotational_movement);
    // close_to_ground_or_skipped_check
    auto currentElement_close_to_ground_or_skipped_check = (msg + ctr)->close_to_ground_or_skipped_check;
    outArray[ctr]["close_to_ground_or_skipped_check"] = factory.createScalar(currentElement_close_to_ground_or_skipped_check);
    // at_rest
    auto currentElement_at_rest = (msg + ctr)->at_rest;
    outArray[ctr]["at_rest"] = factory.createScalar(currentElement_at_rest);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleLandDetected_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleLandDetected_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleLandDetected_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleLandDetected,ros2_px4_msgs_msg_VehicleLandDetected_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleLandDetected_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleLandDetected,ros2_px4_msgs_msg_VehicleLandDetected_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleLandDetected_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleLandDetected>();
    ros2_px4_msgs_msg_VehicleLandDetected_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleLandDetected_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleLandDetected_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleLandDetected*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleLandDetected_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleLandDetected>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleLandDetected_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER