// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/YawEstimatorStatus
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
#include "px4_msgs/msg/yaw_estimator_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_YawEstimatorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::YawEstimatorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_YawEstimatorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::YawEstimatorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::YawEstimatorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_YawEstimatorStatus_common::copy_from_struct(px4_msgs::msg::YawEstimatorStatus* msg, const matlab::data::Struct& arr,
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
        //yaw_composite
        const matlab::data::TypedArray<float> yaw_composite_arr = arr["yaw_composite"];
        msg->yaw_composite = yaw_composite_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_composite' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_composite' is wrong type; expected a single.");
    }
    try {
        //yaw_variance
        const matlab::data::TypedArray<float> yaw_variance_arr = arr["yaw_variance"];
        msg->yaw_variance = yaw_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_variance' is wrong type; expected a single.");
    }
    try {
        //yaw_composite_valid
        const matlab::data::TypedArray<bool> yaw_composite_valid_arr = arr["yaw_composite_valid"];
        msg->yaw_composite_valid = yaw_composite_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_composite_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_composite_valid' is wrong type; expected a logical.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        size_t nelem = 5;
        	std::copy(yaw_arr.begin(), yaw_arr.begin()+nelem, msg->yaw.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //innov_vn
        const matlab::data::TypedArray<float> innov_vn_arr = arr["innov_vn"];
        size_t nelem = 5;
        	std::copy(innov_vn_arr.begin(), innov_vn_arr.begin()+nelem, msg->innov_vn.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_vn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_vn' is wrong type; expected a single.");
    }
    try {
        //innov_ve
        const matlab::data::TypedArray<float> innov_ve_arr = arr["innov_ve"];
        size_t nelem = 5;
        	std::copy(innov_ve_arr.begin(), innov_ve_arr.begin()+nelem, msg->innov_ve.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_ve' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_ve' is wrong type; expected a single.");
    }
    try {
        //weight
        const matlab::data::TypedArray<float> weight_arr = arr["weight"];
        size_t nelem = 5;
        	std::copy(weight_arr.begin(), weight_arr.begin()+nelem, msg->weight.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'weight' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'weight' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_YawEstimatorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::YawEstimatorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","yaw_composite","yaw_variance","yaw_composite_valid","yaw","innov_vn","innov_ve","weight"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/YawEstimatorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // yaw_composite
    auto currentElement_yaw_composite = (msg + ctr)->yaw_composite;
    outArray[ctr]["yaw_composite"] = factory.createScalar(currentElement_yaw_composite);
    // yaw_variance
    auto currentElement_yaw_variance = (msg + ctr)->yaw_variance;
    outArray[ctr]["yaw_variance"] = factory.createScalar(currentElement_yaw_variance);
    // yaw_composite_valid
    auto currentElement_yaw_composite_valid = (msg + ctr)->yaw_composite_valid;
    outArray[ctr]["yaw_composite_valid"] = factory.createScalar(currentElement_yaw_composite_valid);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createArray<px4_msgs::msg::YawEstimatorStatus::_yaw_type::const_iterator, float>({currentElement_yaw.size(), 1}, currentElement_yaw.begin(), currentElement_yaw.end());
    // innov_vn
    auto currentElement_innov_vn = (msg + ctr)->innov_vn;
    outArray[ctr]["innov_vn"] = factory.createArray<px4_msgs::msg::YawEstimatorStatus::_innov_vn_type::const_iterator, float>({currentElement_innov_vn.size(), 1}, currentElement_innov_vn.begin(), currentElement_innov_vn.end());
    // innov_ve
    auto currentElement_innov_ve = (msg + ctr)->innov_ve;
    outArray[ctr]["innov_ve"] = factory.createArray<px4_msgs::msg::YawEstimatorStatus::_innov_ve_type::const_iterator, float>({currentElement_innov_ve.size(), 1}, currentElement_innov_ve.begin(), currentElement_innov_ve.end());
    // weight
    auto currentElement_weight = (msg + ctr)->weight;
    outArray[ctr]["weight"] = factory.createArray<px4_msgs::msg::YawEstimatorStatus::_weight_type::const_iterator, float>({currentElement_weight.size(), 1}, currentElement_weight.begin(), currentElement_weight.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_YawEstimatorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_YawEstimatorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_YawEstimatorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::YawEstimatorStatus,ros2_px4_msgs_msg_YawEstimatorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_YawEstimatorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::YawEstimatorStatus,ros2_px4_msgs_msg_YawEstimatorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_YawEstimatorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::YawEstimatorStatus>();
    ros2_px4_msgs_msg_YawEstimatorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_YawEstimatorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_YawEstimatorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::YawEstimatorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_YawEstimatorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::YawEstimatorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_YawEstimatorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER