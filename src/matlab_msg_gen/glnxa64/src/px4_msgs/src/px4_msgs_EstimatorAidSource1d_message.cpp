// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorAidSource1d
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
#include "px4_msgs/msg/estimator_aid_source1d.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorAidSource1d_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorAidSource1d> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorAidSource1d_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorAidSource1d* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorAidSource1d* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorAidSource1d_common::copy_from_struct(px4_msgs::msg::EstimatorAidSource1d* msg, const matlab::data::Struct& arr,
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
        //estimator_instance
        const matlab::data::TypedArray<uint8_t> estimator_instance_arr = arr["estimator_instance"];
        msg->estimator_instance = estimator_instance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'estimator_instance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'estimator_instance' is wrong type; expected a uint8.");
    }
    try {
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //time_last_fuse
        const matlab::data::TypedArray<uint64_t> time_last_fuse_arr = arr["time_last_fuse"];
        msg->time_last_fuse = time_last_fuse_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_last_fuse' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_last_fuse' is wrong type; expected a uint64.");
    }
    try {
        //observation
        const matlab::data::TypedArray<float> observation_arr = arr["observation"];
        msg->observation = observation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'observation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'observation' is wrong type; expected a single.");
    }
    try {
        //observation_variance
        const matlab::data::TypedArray<float> observation_variance_arr = arr["observation_variance"];
        msg->observation_variance = observation_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'observation_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'observation_variance' is wrong type; expected a single.");
    }
    try {
        //innovation
        const matlab::data::TypedArray<float> innovation_arr = arr["innovation"];
        msg->innovation = innovation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innovation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innovation' is wrong type; expected a single.");
    }
    try {
        //innovation_filtered
        const matlab::data::TypedArray<float> innovation_filtered_arr = arr["innovation_filtered"];
        msg->innovation_filtered = innovation_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innovation_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innovation_filtered' is wrong type; expected a single.");
    }
    try {
        //innovation_variance
        const matlab::data::TypedArray<float> innovation_variance_arr = arr["innovation_variance"];
        msg->innovation_variance = innovation_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innovation_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innovation_variance' is wrong type; expected a single.");
    }
    try {
        //test_ratio
        const matlab::data::TypedArray<float> test_ratio_arr = arr["test_ratio"];
        msg->test_ratio = test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'test_ratio' is wrong type; expected a single.");
    }
    try {
        //test_ratio_filtered
        const matlab::data::TypedArray<float> test_ratio_filtered_arr = arr["test_ratio_filtered"];
        msg->test_ratio_filtered = test_ratio_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'test_ratio_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'test_ratio_filtered' is wrong type; expected a single.");
    }
    try {
        //innovation_rejected
        const matlab::data::TypedArray<bool> innovation_rejected_arr = arr["innovation_rejected"];
        msg->innovation_rejected = innovation_rejected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innovation_rejected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innovation_rejected' is wrong type; expected a logical.");
    }
    try {
        //fused
        const matlab::data::TypedArray<bool> fused_arr = arr["fused"];
        msg->fused = fused_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fused' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fused' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorAidSource1d_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorAidSource1d* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","estimator_instance","device_id","time_last_fuse","observation","observation_variance","innovation","innovation_filtered","innovation_variance","test_ratio","test_ratio_filtered","innovation_rejected","fused"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorAidSource1d");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // estimator_instance
    auto currentElement_estimator_instance = (msg + ctr)->estimator_instance;
    outArray[ctr]["estimator_instance"] = factory.createScalar(currentElement_estimator_instance);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // time_last_fuse
    auto currentElement_time_last_fuse = (msg + ctr)->time_last_fuse;
    outArray[ctr]["time_last_fuse"] = factory.createScalar(currentElement_time_last_fuse);
    // observation
    auto currentElement_observation = (msg + ctr)->observation;
    outArray[ctr]["observation"] = factory.createScalar(currentElement_observation);
    // observation_variance
    auto currentElement_observation_variance = (msg + ctr)->observation_variance;
    outArray[ctr]["observation_variance"] = factory.createScalar(currentElement_observation_variance);
    // innovation
    auto currentElement_innovation = (msg + ctr)->innovation;
    outArray[ctr]["innovation"] = factory.createScalar(currentElement_innovation);
    // innovation_filtered
    auto currentElement_innovation_filtered = (msg + ctr)->innovation_filtered;
    outArray[ctr]["innovation_filtered"] = factory.createScalar(currentElement_innovation_filtered);
    // innovation_variance
    auto currentElement_innovation_variance = (msg + ctr)->innovation_variance;
    outArray[ctr]["innovation_variance"] = factory.createScalar(currentElement_innovation_variance);
    // test_ratio
    auto currentElement_test_ratio = (msg + ctr)->test_ratio;
    outArray[ctr]["test_ratio"] = factory.createScalar(currentElement_test_ratio);
    // test_ratio_filtered
    auto currentElement_test_ratio_filtered = (msg + ctr)->test_ratio_filtered;
    outArray[ctr]["test_ratio_filtered"] = factory.createScalar(currentElement_test_ratio_filtered);
    // innovation_rejected
    auto currentElement_innovation_rejected = (msg + ctr)->innovation_rejected;
    outArray[ctr]["innovation_rejected"] = factory.createScalar(currentElement_innovation_rejected);
    // fused
    auto currentElement_fused = (msg + ctr)->fused;
    outArray[ctr]["fused"] = factory.createScalar(currentElement_fused);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorAidSource1d_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorAidSource1d_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorAidSource1d_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorAidSource1d,ros2_px4_msgs_msg_EstimatorAidSource1d_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorAidSource1d_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorAidSource1d,ros2_px4_msgs_msg_EstimatorAidSource1d_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorAidSource1d_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorAidSource1d>();
    ros2_px4_msgs_msg_EstimatorAidSource1d_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorAidSource1d_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorAidSource1d_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorAidSource1d*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorAidSource1d_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorAidSource1d>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorAidSource1d_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER