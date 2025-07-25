// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/MissionResult
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
#include "px4_msgs/msg/mission_result.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_MissionResult_common : public MATLABROS2MsgInterface<px4_msgs::msg::MissionResult> {
  public:
    virtual ~ros2_px4_msgs_msg_MissionResult_common(){}
    virtual void copy_from_struct(px4_msgs::msg::MissionResult* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::MissionResult* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_MissionResult_common::copy_from_struct(px4_msgs::msg::MissionResult* msg, const matlab::data::Struct& arr,
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
        //mission_id
        const matlab::data::TypedArray<uint32_t> mission_id_arr = arr["mission_id"];
        msg->mission_id = mission_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_id' is wrong type; expected a uint32.");
    }
    try {
        //geofence_id
        const matlab::data::TypedArray<uint32_t> geofence_id_arr = arr["geofence_id"];
        msg->geofence_id = geofence_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_id' is wrong type; expected a uint32.");
    }
    try {
        //home_position_counter
        const matlab::data::TypedArray<uint32_t> home_position_counter_arr = arr["home_position_counter"];
        msg->home_position_counter = home_position_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'home_position_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'home_position_counter' is wrong type; expected a uint32.");
    }
    try {
        //seq_reached
        const matlab::data::TypedArray<int32_t> seq_reached_arr = arr["seq_reached"];
        msg->seq_reached = seq_reached_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq_reached' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seq_reached' is wrong type; expected a int32.");
    }
    try {
        //seq_current
        const matlab::data::TypedArray<uint16_t> seq_current_arr = arr["seq_current"];
        msg->seq_current = seq_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seq_current' is wrong type; expected a uint16.");
    }
    try {
        //seq_total
        const matlab::data::TypedArray<uint16_t> seq_total_arr = arr["seq_total"];
        msg->seq_total = seq_total_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq_total' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seq_total' is wrong type; expected a uint16.");
    }
    try {
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        msg->valid = valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //warning
        const matlab::data::TypedArray<bool> warning_arr = arr["warning"];
        msg->warning = warning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'warning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'warning' is wrong type; expected a logical.");
    }
    try {
        //finished
        const matlab::data::TypedArray<bool> finished_arr = arr["finished"];
        msg->finished = finished_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'finished' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'finished' is wrong type; expected a logical.");
    }
    try {
        //failure
        const matlab::data::TypedArray<bool> failure_arr = arr["failure"];
        msg->failure = failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failure' is wrong type; expected a logical.");
    }
    try {
        //item_do_jump_changed
        const matlab::data::TypedArray<bool> item_do_jump_changed_arr = arr["item_do_jump_changed"];
        msg->item_do_jump_changed = item_do_jump_changed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'item_do_jump_changed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'item_do_jump_changed' is wrong type; expected a logical.");
    }
    try {
        //item_changed_index
        const matlab::data::TypedArray<uint16_t> item_changed_index_arr = arr["item_changed_index"];
        msg->item_changed_index = item_changed_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'item_changed_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'item_changed_index' is wrong type; expected a uint16.");
    }
    try {
        //item_do_jump_remaining
        const matlab::data::TypedArray<uint16_t> item_do_jump_remaining_arr = arr["item_do_jump_remaining"];
        msg->item_do_jump_remaining = item_do_jump_remaining_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'item_do_jump_remaining' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'item_do_jump_remaining' is wrong type; expected a uint16.");
    }
    try {
        //execution_mode
        const matlab::data::TypedArray<uint8_t> execution_mode_arr = arr["execution_mode"];
        msg->execution_mode = execution_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'execution_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'execution_mode' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_MissionResult_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::MissionResult* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","mission_id","geofence_id","home_position_counter","seq_reached","seq_current","seq_total","valid","warning","finished","failure","item_do_jump_changed","item_changed_index","item_do_jump_remaining","execution_mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/MissionResult");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // mission_id
    auto currentElement_mission_id = (msg + ctr)->mission_id;
    outArray[ctr]["mission_id"] = factory.createScalar(currentElement_mission_id);
    // geofence_id
    auto currentElement_geofence_id = (msg + ctr)->geofence_id;
    outArray[ctr]["geofence_id"] = factory.createScalar(currentElement_geofence_id);
    // home_position_counter
    auto currentElement_home_position_counter = (msg + ctr)->home_position_counter;
    outArray[ctr]["home_position_counter"] = factory.createScalar(currentElement_home_position_counter);
    // seq_reached
    auto currentElement_seq_reached = (msg + ctr)->seq_reached;
    outArray[ctr]["seq_reached"] = factory.createScalar(currentElement_seq_reached);
    // seq_current
    auto currentElement_seq_current = (msg + ctr)->seq_current;
    outArray[ctr]["seq_current"] = factory.createScalar(currentElement_seq_current);
    // seq_total
    auto currentElement_seq_total = (msg + ctr)->seq_total;
    outArray[ctr]["seq_total"] = factory.createScalar(currentElement_seq_total);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    // warning
    auto currentElement_warning = (msg + ctr)->warning;
    outArray[ctr]["warning"] = factory.createScalar(currentElement_warning);
    // finished
    auto currentElement_finished = (msg + ctr)->finished;
    outArray[ctr]["finished"] = factory.createScalar(currentElement_finished);
    // failure
    auto currentElement_failure = (msg + ctr)->failure;
    outArray[ctr]["failure"] = factory.createScalar(currentElement_failure);
    // item_do_jump_changed
    auto currentElement_item_do_jump_changed = (msg + ctr)->item_do_jump_changed;
    outArray[ctr]["item_do_jump_changed"] = factory.createScalar(currentElement_item_do_jump_changed);
    // item_changed_index
    auto currentElement_item_changed_index = (msg + ctr)->item_changed_index;
    outArray[ctr]["item_changed_index"] = factory.createScalar(currentElement_item_changed_index);
    // item_do_jump_remaining
    auto currentElement_item_do_jump_remaining = (msg + ctr)->item_do_jump_remaining;
    outArray[ctr]["item_do_jump_remaining"] = factory.createScalar(currentElement_item_do_jump_remaining);
    // execution_mode
    auto currentElement_execution_mode = (msg + ctr)->execution_mode;
    outArray[ctr]["execution_mode"] = factory.createScalar(currentElement_execution_mode);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_MissionResult_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_MissionResult_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_MissionResult_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::MissionResult,ros2_px4_msgs_msg_MissionResult_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_MissionResult_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::MissionResult,ros2_px4_msgs_msg_MissionResult_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_MissionResult_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::MissionResult>();
    ros2_px4_msgs_msg_MissionResult_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_MissionResult_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_MissionResult_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::MissionResult*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_MissionResult_common, MATLABROS2MsgInterface<px4_msgs::msg::MissionResult>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_MissionResult_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER