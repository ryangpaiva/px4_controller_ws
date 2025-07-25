// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorSensorBias
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
#include "px4_msgs/msg/estimator_sensor_bias.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorSensorBias_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorSensorBias> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorSensorBias_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorSensorBias* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorSensorBias* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorSensorBias_common::copy_from_struct(px4_msgs::msg::EstimatorSensorBias* msg, const matlab::data::Struct& arr,
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
        //gyro_device_id
        const matlab::data::TypedArray<uint32_t> gyro_device_id_arr = arr["gyro_device_id"];
        msg->gyro_device_id = gyro_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_device_id' is wrong type; expected a uint32.");
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
        //gyro_bias_limit
        const matlab::data::TypedArray<float> gyro_bias_limit_arr = arr["gyro_bias_limit"];
        msg->gyro_bias_limit = gyro_bias_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_bias_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_bias_limit' is wrong type; expected a single.");
    }
    try {
        //gyro_bias_variance
        const matlab::data::TypedArray<float> gyro_bias_variance_arr = arr["gyro_bias_variance"];
        size_t nelem = 3;
        	std::copy(gyro_bias_variance_arr.begin(), gyro_bias_variance_arr.begin()+nelem, msg->gyro_bias_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_bias_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_bias_variance' is wrong type; expected a single.");
    }
    try {
        //gyro_bias_valid
        const matlab::data::TypedArray<bool> gyro_bias_valid_arr = arr["gyro_bias_valid"];
        msg->gyro_bias_valid = gyro_bias_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_bias_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_bias_valid' is wrong type; expected a logical.");
    }
    try {
        //gyro_bias_stable
        const matlab::data::TypedArray<bool> gyro_bias_stable_arr = arr["gyro_bias_stable"];
        msg->gyro_bias_stable = gyro_bias_stable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_bias_stable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_bias_stable' is wrong type; expected a logical.");
    }
    try {
        //accel_device_id
        const matlab::data::TypedArray<uint32_t> accel_device_id_arr = arr["accel_device_id"];
        msg->accel_device_id = accel_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_device_id' is wrong type; expected a uint32.");
    }
    try {
        //accel_bias
        const matlab::data::TypedArray<float> accel_bias_arr = arr["accel_bias"];
        size_t nelem = 3;
        	std::copy(accel_bias_arr.begin(), accel_bias_arr.begin()+nelem, msg->accel_bias.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_bias' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_bias' is wrong type; expected a single.");
    }
    try {
        //accel_bias_limit
        const matlab::data::TypedArray<float> accel_bias_limit_arr = arr["accel_bias_limit"];
        msg->accel_bias_limit = accel_bias_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_bias_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_bias_limit' is wrong type; expected a single.");
    }
    try {
        //accel_bias_variance
        const matlab::data::TypedArray<float> accel_bias_variance_arr = arr["accel_bias_variance"];
        size_t nelem = 3;
        	std::copy(accel_bias_variance_arr.begin(), accel_bias_variance_arr.begin()+nelem, msg->accel_bias_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_bias_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_bias_variance' is wrong type; expected a single.");
    }
    try {
        //accel_bias_valid
        const matlab::data::TypedArray<bool> accel_bias_valid_arr = arr["accel_bias_valid"];
        msg->accel_bias_valid = accel_bias_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_bias_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_bias_valid' is wrong type; expected a logical.");
    }
    try {
        //accel_bias_stable
        const matlab::data::TypedArray<bool> accel_bias_stable_arr = arr["accel_bias_stable"];
        msg->accel_bias_stable = accel_bias_stable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_bias_stable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_bias_stable' is wrong type; expected a logical.");
    }
    try {
        //mag_device_id
        const matlab::data::TypedArray<uint32_t> mag_device_id_arr = arr["mag_device_id"];
        msg->mag_device_id = mag_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_device_id' is wrong type; expected a uint32.");
    }
    try {
        //mag_bias
        const matlab::data::TypedArray<float> mag_bias_arr = arr["mag_bias"];
        size_t nelem = 3;
        	std::copy(mag_bias_arr.begin(), mag_bias_arr.begin()+nelem, msg->mag_bias.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_bias' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_bias' is wrong type; expected a single.");
    }
    try {
        //mag_bias_limit
        const matlab::data::TypedArray<float> mag_bias_limit_arr = arr["mag_bias_limit"];
        msg->mag_bias_limit = mag_bias_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_bias_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_bias_limit' is wrong type; expected a single.");
    }
    try {
        //mag_bias_variance
        const matlab::data::TypedArray<float> mag_bias_variance_arr = arr["mag_bias_variance"];
        size_t nelem = 3;
        	std::copy(mag_bias_variance_arr.begin(), mag_bias_variance_arr.begin()+nelem, msg->mag_bias_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_bias_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_bias_variance' is wrong type; expected a single.");
    }
    try {
        //mag_bias_valid
        const matlab::data::TypedArray<bool> mag_bias_valid_arr = arr["mag_bias_valid"];
        msg->mag_bias_valid = mag_bias_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_bias_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_bias_valid' is wrong type; expected a logical.");
    }
    try {
        //mag_bias_stable
        const matlab::data::TypedArray<bool> mag_bias_stable_arr = arr["mag_bias_stable"];
        msg->mag_bias_stable = mag_bias_stable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_bias_stable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_bias_stable' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorSensorBias_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorSensorBias* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","gyro_device_id","gyro_bias","gyro_bias_limit","gyro_bias_variance","gyro_bias_valid","gyro_bias_stable","accel_device_id","accel_bias","accel_bias_limit","accel_bias_variance","accel_bias_valid","accel_bias_stable","mag_device_id","mag_bias","mag_bias_limit","mag_bias_variance","mag_bias_valid","mag_bias_stable"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorSensorBias");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // gyro_device_id
    auto currentElement_gyro_device_id = (msg + ctr)->gyro_device_id;
    outArray[ctr]["gyro_device_id"] = factory.createScalar(currentElement_gyro_device_id);
    // gyro_bias
    auto currentElement_gyro_bias = (msg + ctr)->gyro_bias;
    outArray[ctr]["gyro_bias"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_gyro_bias_type::const_iterator, float>({currentElement_gyro_bias.size(), 1}, currentElement_gyro_bias.begin(), currentElement_gyro_bias.end());
    // gyro_bias_limit
    auto currentElement_gyro_bias_limit = (msg + ctr)->gyro_bias_limit;
    outArray[ctr]["gyro_bias_limit"] = factory.createScalar(currentElement_gyro_bias_limit);
    // gyro_bias_variance
    auto currentElement_gyro_bias_variance = (msg + ctr)->gyro_bias_variance;
    outArray[ctr]["gyro_bias_variance"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_gyro_bias_variance_type::const_iterator, float>({currentElement_gyro_bias_variance.size(), 1}, currentElement_gyro_bias_variance.begin(), currentElement_gyro_bias_variance.end());
    // gyro_bias_valid
    auto currentElement_gyro_bias_valid = (msg + ctr)->gyro_bias_valid;
    outArray[ctr]["gyro_bias_valid"] = factory.createScalar(currentElement_gyro_bias_valid);
    // gyro_bias_stable
    auto currentElement_gyro_bias_stable = (msg + ctr)->gyro_bias_stable;
    outArray[ctr]["gyro_bias_stable"] = factory.createScalar(currentElement_gyro_bias_stable);
    // accel_device_id
    auto currentElement_accel_device_id = (msg + ctr)->accel_device_id;
    outArray[ctr]["accel_device_id"] = factory.createScalar(currentElement_accel_device_id);
    // accel_bias
    auto currentElement_accel_bias = (msg + ctr)->accel_bias;
    outArray[ctr]["accel_bias"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_accel_bias_type::const_iterator, float>({currentElement_accel_bias.size(), 1}, currentElement_accel_bias.begin(), currentElement_accel_bias.end());
    // accel_bias_limit
    auto currentElement_accel_bias_limit = (msg + ctr)->accel_bias_limit;
    outArray[ctr]["accel_bias_limit"] = factory.createScalar(currentElement_accel_bias_limit);
    // accel_bias_variance
    auto currentElement_accel_bias_variance = (msg + ctr)->accel_bias_variance;
    outArray[ctr]["accel_bias_variance"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_accel_bias_variance_type::const_iterator, float>({currentElement_accel_bias_variance.size(), 1}, currentElement_accel_bias_variance.begin(), currentElement_accel_bias_variance.end());
    // accel_bias_valid
    auto currentElement_accel_bias_valid = (msg + ctr)->accel_bias_valid;
    outArray[ctr]["accel_bias_valid"] = factory.createScalar(currentElement_accel_bias_valid);
    // accel_bias_stable
    auto currentElement_accel_bias_stable = (msg + ctr)->accel_bias_stable;
    outArray[ctr]["accel_bias_stable"] = factory.createScalar(currentElement_accel_bias_stable);
    // mag_device_id
    auto currentElement_mag_device_id = (msg + ctr)->mag_device_id;
    outArray[ctr]["mag_device_id"] = factory.createScalar(currentElement_mag_device_id);
    // mag_bias
    auto currentElement_mag_bias = (msg + ctr)->mag_bias;
    outArray[ctr]["mag_bias"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_mag_bias_type::const_iterator, float>({currentElement_mag_bias.size(), 1}, currentElement_mag_bias.begin(), currentElement_mag_bias.end());
    // mag_bias_limit
    auto currentElement_mag_bias_limit = (msg + ctr)->mag_bias_limit;
    outArray[ctr]["mag_bias_limit"] = factory.createScalar(currentElement_mag_bias_limit);
    // mag_bias_variance
    auto currentElement_mag_bias_variance = (msg + ctr)->mag_bias_variance;
    outArray[ctr]["mag_bias_variance"] = factory.createArray<px4_msgs::msg::EstimatorSensorBias::_mag_bias_variance_type::const_iterator, float>({currentElement_mag_bias_variance.size(), 1}, currentElement_mag_bias_variance.begin(), currentElement_mag_bias_variance.end());
    // mag_bias_valid
    auto currentElement_mag_bias_valid = (msg + ctr)->mag_bias_valid;
    outArray[ctr]["mag_bias_valid"] = factory.createScalar(currentElement_mag_bias_valid);
    // mag_bias_stable
    auto currentElement_mag_bias_stable = (msg + ctr)->mag_bias_stable;
    outArray[ctr]["mag_bias_stable"] = factory.createScalar(currentElement_mag_bias_stable);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorSensorBias_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorSensorBias_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorSensorBias_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorSensorBias,ros2_px4_msgs_msg_EstimatorSensorBias_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorSensorBias_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorSensorBias,ros2_px4_msgs_msg_EstimatorSensorBias_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorSensorBias_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorSensorBias>();
    ros2_px4_msgs_msg_EstimatorSensorBias_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorSensorBias_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorSensorBias_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorSensorBias*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorSensorBias_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorSensorBias>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorSensorBias_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER