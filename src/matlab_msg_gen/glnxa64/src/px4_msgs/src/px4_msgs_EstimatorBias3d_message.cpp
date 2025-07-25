// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorBias3d
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
#include "px4_msgs/msg/estimator_bias3d.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorBias3d_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorBias3d> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorBias3d_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorBias3d* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorBias3d* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorBias3d_common::copy_from_struct(px4_msgs::msg::EstimatorBias3d* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //bias
        const matlab::data::TypedArray<float> bias_arr = arr["bias"];
        size_t nelem = 3;
        	std::copy(bias_arr.begin(), bias_arr.begin()+nelem, msg->bias.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bias' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bias' is wrong type; expected a single.");
    }
    try {
        //bias_var
        const matlab::data::TypedArray<float> bias_var_arr = arr["bias_var"];
        size_t nelem = 3;
        	std::copy(bias_var_arr.begin(), bias_var_arr.begin()+nelem, msg->bias_var.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bias_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bias_var' is wrong type; expected a single.");
    }
    try {
        //innov
        const matlab::data::TypedArray<float> innov_arr = arr["innov"];
        size_t nelem = 3;
        	std::copy(innov_arr.begin(), innov_arr.begin()+nelem, msg->innov.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov' is wrong type; expected a single.");
    }
    try {
        //innov_var
        const matlab::data::TypedArray<float> innov_var_arr = arr["innov_var"];
        size_t nelem = 3;
        	std::copy(innov_var_arr.begin(), innov_var_arr.begin()+nelem, msg->innov_var.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_var' is wrong type; expected a single.");
    }
    try {
        //innov_test_ratio
        const matlab::data::TypedArray<float> innov_test_ratio_arr = arr["innov_test_ratio"];
        size_t nelem = 3;
        	std::copy(innov_test_ratio_arr.begin(), innov_test_ratio_arr.begin()+nelem, msg->innov_test_ratio.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_test_ratio' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorBias3d_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorBias3d* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","device_id","bias","bias_var","innov","innov_var","innov_test_ratio"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorBias3d");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // bias
    auto currentElement_bias = (msg + ctr)->bias;
    outArray[ctr]["bias"] = factory.createArray<px4_msgs::msg::EstimatorBias3d::_bias_type::const_iterator, float>({currentElement_bias.size(), 1}, currentElement_bias.begin(), currentElement_bias.end());
    // bias_var
    auto currentElement_bias_var = (msg + ctr)->bias_var;
    outArray[ctr]["bias_var"] = factory.createArray<px4_msgs::msg::EstimatorBias3d::_bias_var_type::const_iterator, float>({currentElement_bias_var.size(), 1}, currentElement_bias_var.begin(), currentElement_bias_var.end());
    // innov
    auto currentElement_innov = (msg + ctr)->innov;
    outArray[ctr]["innov"] = factory.createArray<px4_msgs::msg::EstimatorBias3d::_innov_type::const_iterator, float>({currentElement_innov.size(), 1}, currentElement_innov.begin(), currentElement_innov.end());
    // innov_var
    auto currentElement_innov_var = (msg + ctr)->innov_var;
    outArray[ctr]["innov_var"] = factory.createArray<px4_msgs::msg::EstimatorBias3d::_innov_var_type::const_iterator, float>({currentElement_innov_var.size(), 1}, currentElement_innov_var.begin(), currentElement_innov_var.end());
    // innov_test_ratio
    auto currentElement_innov_test_ratio = (msg + ctr)->innov_test_ratio;
    outArray[ctr]["innov_test_ratio"] = factory.createArray<px4_msgs::msg::EstimatorBias3d::_innov_test_ratio_type::const_iterator, float>({currentElement_innov_test_ratio.size(), 1}, currentElement_innov_test_ratio.begin(), currentElement_innov_test_ratio.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorBias3d_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorBias3d_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorBias3d_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorBias3d,ros2_px4_msgs_msg_EstimatorBias3d_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorBias3d_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorBias3d,ros2_px4_msgs_msg_EstimatorBias3d_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorBias3d_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorBias3d>();
    ros2_px4_msgs_msg_EstimatorBias3d_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorBias3d_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorBias3d_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorBias3d*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorBias3d_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorBias3d>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorBias3d_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER