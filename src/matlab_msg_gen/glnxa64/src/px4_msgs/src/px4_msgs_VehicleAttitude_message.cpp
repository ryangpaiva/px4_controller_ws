// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleAttitude
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
#include "px4_msgs/msg/vehicle_attitude.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleAttitude_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleAttitude> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleAttitude_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleAttitude* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleAttitude* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleAttitude_common::copy_from_struct(px4_msgs::msg::VehicleAttitude* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
    }
    try {
        //q
        const matlab::data::TypedArray<float> q_arr = arr["q"];
        size_t nelem = 4;
        	std::copy(q_arr.begin(), q_arr.begin()+nelem, msg->q.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'q' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'q' is wrong type; expected a single.");
    }
    try {
        //delta_q_reset
        const matlab::data::TypedArray<float> delta_q_reset_arr = arr["delta_q_reset"];
        size_t nelem = 4;
        	std::copy(delta_q_reset_arr.begin(), delta_q_reset_arr.begin()+nelem, msg->delta_q_reset.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_q_reset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_q_reset' is wrong type; expected a single.");
    }
    try {
        //quat_reset_counter
        const matlab::data::TypedArray<uint8_t> quat_reset_counter_arr = arr["quat_reset_counter"];
        msg->quat_reset_counter = quat_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quat_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'quat_reset_counter' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleAttitude_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleAttitude* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","q","delta_q_reset","quat_reset_counter"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleAttitude");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // q
    auto currentElement_q = (msg + ctr)->q;
    outArray[ctr]["q"] = factory.createArray<px4_msgs::msg::VehicleAttitude::_q_type::const_iterator, float>({currentElement_q.size(), 1}, currentElement_q.begin(), currentElement_q.end());
    // delta_q_reset
    auto currentElement_delta_q_reset = (msg + ctr)->delta_q_reset;
    outArray[ctr]["delta_q_reset"] = factory.createArray<px4_msgs::msg::VehicleAttitude::_delta_q_reset_type::const_iterator, float>({currentElement_delta_q_reset.size(), 1}, currentElement_delta_q_reset.begin(), currentElement_delta_q_reset.end());
    // quat_reset_counter
    auto currentElement_quat_reset_counter = (msg + ctr)->quat_reset_counter;
    outArray[ctr]["quat_reset_counter"] = factory.createScalar(currentElement_quat_reset_counter);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleAttitude_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleAttitude_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleAttitude_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleAttitude,ros2_px4_msgs_msg_VehicleAttitude_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleAttitude_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleAttitude,ros2_px4_msgs_msg_VehicleAttitude_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleAttitude_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleAttitude>();
    ros2_px4_msgs_msg_VehicleAttitude_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleAttitude_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleAttitude_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleAttitude*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleAttitude_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleAttitude>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleAttitude_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER