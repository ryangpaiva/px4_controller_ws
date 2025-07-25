// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleOpticalFlowVel
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
#include "px4_msgs/msg/vehicle_optical_flow_vel.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleOpticalFlowVel_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleOpticalFlowVel> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleOpticalFlowVel_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleOpticalFlowVel* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleOpticalFlowVel* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleOpticalFlowVel_common::copy_from_struct(px4_msgs::msg::VehicleOpticalFlowVel* msg, const matlab::data::Struct& arr,
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
        //vel_body
        const matlab::data::TypedArray<float> vel_body_arr = arr["vel_body"];
        size_t nelem = 2;
        	std::copy(vel_body_arr.begin(), vel_body_arr.begin()+nelem, msg->vel_body.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_body' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_body' is wrong type; expected a single.");
    }
    try {
        //vel_ne
        const matlab::data::TypedArray<float> vel_ne_arr = arr["vel_ne"];
        size_t nelem = 2;
        	std::copy(vel_ne_arr.begin(), vel_ne_arr.begin()+nelem, msg->vel_ne.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_ne' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_ne' is wrong type; expected a single.");
    }
    try {
        //vel_body_filtered
        const matlab::data::TypedArray<float> vel_body_filtered_arr = arr["vel_body_filtered"];
        size_t nelem = 2;
        	std::copy(vel_body_filtered_arr.begin(), vel_body_filtered_arr.begin()+nelem, msg->vel_body_filtered.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_body_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_body_filtered' is wrong type; expected a single.");
    }
    try {
        //vel_ne_filtered
        const matlab::data::TypedArray<float> vel_ne_filtered_arr = arr["vel_ne_filtered"];
        size_t nelem = 2;
        	std::copy(vel_ne_filtered_arr.begin(), vel_ne_filtered_arr.begin()+nelem, msg->vel_ne_filtered.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_ne_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_ne_filtered' is wrong type; expected a single.");
    }
    try {
        //flow_rate_uncompensated
        const matlab::data::TypedArray<float> flow_rate_uncompensated_arr = arr["flow_rate_uncompensated"];
        size_t nelem = 2;
        	std::copy(flow_rate_uncompensated_arr.begin(), flow_rate_uncompensated_arr.begin()+nelem, msg->flow_rate_uncompensated.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flow_rate_uncompensated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flow_rate_uncompensated' is wrong type; expected a single.");
    }
    try {
        //flow_rate_compensated
        const matlab::data::TypedArray<float> flow_rate_compensated_arr = arr["flow_rate_compensated"];
        size_t nelem = 2;
        	std::copy(flow_rate_compensated_arr.begin(), flow_rate_compensated_arr.begin()+nelem, msg->flow_rate_compensated.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flow_rate_compensated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flow_rate_compensated' is wrong type; expected a single.");
    }
    try {
        //gyro_rate
        const matlab::data::TypedArray<float> gyro_rate_arr = arr["gyro_rate"];
        size_t nelem = 3;
        	std::copy(gyro_rate_arr.begin(), gyro_rate_arr.begin()+nelem, msg->gyro_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_rate' is wrong type; expected a single.");
    }
    try {
        //gyro_bias
        const matlab::data::TypedArray<float> gyro_bias_arr = arr["gyro_bias"];
        size_t nelem = 3;
        	std::copy(gyro_bias_arr.begin(), gyro_bias_arr.begin()+nelem, msg->gyro_bias.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_bias' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_bias' is wrong type; expected a single.");
    }
    try {
        //ref_gyro
        const matlab::data::TypedArray<float> ref_gyro_arr = arr["ref_gyro"];
        size_t nelem = 3;
        	std::copy(ref_gyro_arr.begin(), ref_gyro_arr.begin()+nelem, msg->ref_gyro.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_gyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_gyro' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleOpticalFlowVel_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleOpticalFlowVel* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","vel_body","vel_ne","vel_body_filtered","vel_ne_filtered","flow_rate_uncompensated","flow_rate_compensated","gyro_rate","gyro_bias","ref_gyro"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleOpticalFlowVel");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // vel_body
    auto currentElement_vel_body = (msg + ctr)->vel_body;
    outArray[ctr]["vel_body"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_vel_body_type::const_iterator, float>({currentElement_vel_body.size(), 1}, currentElement_vel_body.begin(), currentElement_vel_body.end());
    // vel_ne
    auto currentElement_vel_ne = (msg + ctr)->vel_ne;
    outArray[ctr]["vel_ne"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_vel_ne_type::const_iterator, float>({currentElement_vel_ne.size(), 1}, currentElement_vel_ne.begin(), currentElement_vel_ne.end());
    // vel_body_filtered
    auto currentElement_vel_body_filtered = (msg + ctr)->vel_body_filtered;
    outArray[ctr]["vel_body_filtered"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_vel_body_filtered_type::const_iterator, float>({currentElement_vel_body_filtered.size(), 1}, currentElement_vel_body_filtered.begin(), currentElement_vel_body_filtered.end());
    // vel_ne_filtered
    auto currentElement_vel_ne_filtered = (msg + ctr)->vel_ne_filtered;
    outArray[ctr]["vel_ne_filtered"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_vel_ne_filtered_type::const_iterator, float>({currentElement_vel_ne_filtered.size(), 1}, currentElement_vel_ne_filtered.begin(), currentElement_vel_ne_filtered.end());
    // flow_rate_uncompensated
    auto currentElement_flow_rate_uncompensated = (msg + ctr)->flow_rate_uncompensated;
    outArray[ctr]["flow_rate_uncompensated"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_flow_rate_uncompensated_type::const_iterator, float>({currentElement_flow_rate_uncompensated.size(), 1}, currentElement_flow_rate_uncompensated.begin(), currentElement_flow_rate_uncompensated.end());
    // flow_rate_compensated
    auto currentElement_flow_rate_compensated = (msg + ctr)->flow_rate_compensated;
    outArray[ctr]["flow_rate_compensated"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_flow_rate_compensated_type::const_iterator, float>({currentElement_flow_rate_compensated.size(), 1}, currentElement_flow_rate_compensated.begin(), currentElement_flow_rate_compensated.end());
    // gyro_rate
    auto currentElement_gyro_rate = (msg + ctr)->gyro_rate;
    outArray[ctr]["gyro_rate"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_gyro_rate_type::const_iterator, float>({currentElement_gyro_rate.size(), 1}, currentElement_gyro_rate.begin(), currentElement_gyro_rate.end());
    // gyro_bias
    auto currentElement_gyro_bias = (msg + ctr)->gyro_bias;
    outArray[ctr]["gyro_bias"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_gyro_bias_type::const_iterator, float>({currentElement_gyro_bias.size(), 1}, currentElement_gyro_bias.begin(), currentElement_gyro_bias.end());
    // ref_gyro
    auto currentElement_ref_gyro = (msg + ctr)->ref_gyro;
    outArray[ctr]["ref_gyro"] = factory.createArray<px4_msgs::msg::VehicleOpticalFlowVel::_ref_gyro_type::const_iterator, float>({currentElement_ref_gyro.size(), 1}, currentElement_ref_gyro.begin(), currentElement_ref_gyro.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleOpticalFlowVel_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleOpticalFlowVel_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleOpticalFlowVel_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleOpticalFlowVel,ros2_px4_msgs_msg_VehicleOpticalFlowVel_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleOpticalFlowVel_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleOpticalFlowVel,ros2_px4_msgs_msg_VehicleOpticalFlowVel_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleOpticalFlowVel_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleOpticalFlowVel>();
    ros2_px4_msgs_msg_VehicleOpticalFlowVel_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleOpticalFlowVel_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleOpticalFlowVel_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleOpticalFlowVel*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleOpticalFlowVel_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleOpticalFlowVel>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleOpticalFlowVel_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER