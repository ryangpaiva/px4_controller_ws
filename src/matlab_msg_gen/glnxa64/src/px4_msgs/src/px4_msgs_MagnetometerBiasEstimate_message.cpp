// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/MagnetometerBiasEstimate
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
#include "px4_msgs/msg/magnetometer_bias_estimate.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_MagnetometerBiasEstimate_common : public MATLABROS2MsgInterface<px4_msgs::msg::MagnetometerBiasEstimate> {
  public:
    virtual ~ros2_px4_msgs_msg_MagnetometerBiasEstimate_common(){}
    virtual void copy_from_struct(px4_msgs::msg::MagnetometerBiasEstimate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::MagnetometerBiasEstimate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_MagnetometerBiasEstimate_common::copy_from_struct(px4_msgs::msg::MagnetometerBiasEstimate* msg, const matlab::data::Struct& arr,
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
        //bias_x
        const matlab::data::TypedArray<float> bias_x_arr = arr["bias_x"];
        size_t nelem = 4;
        	std::copy(bias_x_arr.begin(), bias_x_arr.begin()+nelem, msg->bias_x.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bias_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bias_x' is wrong type; expected a single.");
    }
    try {
        //bias_y
        const matlab::data::TypedArray<float> bias_y_arr = arr["bias_y"];
        size_t nelem = 4;
        	std::copy(bias_y_arr.begin(), bias_y_arr.begin()+nelem, msg->bias_y.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bias_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bias_y' is wrong type; expected a single.");
    }
    try {
        //bias_z
        const matlab::data::TypedArray<float> bias_z_arr = arr["bias_z"];
        size_t nelem = 4;
        	std::copy(bias_z_arr.begin(), bias_z_arr.begin()+nelem, msg->bias_z.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bias_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bias_z' is wrong type; expected a single.");
    }
    try {
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        size_t nelem = 4;
        	std::copy(valid_arr.begin(), valid_arr.begin()+nelem, msg->valid.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //stable
        const matlab::data::TypedArray<bool> stable_arr = arr["stable"];
        size_t nelem = 4;
        	std::copy(stable_arr.begin(), stable_arr.begin()+nelem, msg->stable.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'stable' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_MagnetometerBiasEstimate_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::MagnetometerBiasEstimate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","bias_x","bias_y","bias_z","valid","stable"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/MagnetometerBiasEstimate");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // bias_x
    auto currentElement_bias_x = (msg + ctr)->bias_x;
    outArray[ctr]["bias_x"] = factory.createArray<px4_msgs::msg::MagnetometerBiasEstimate::_bias_x_type::const_iterator, float>({currentElement_bias_x.size(), 1}, currentElement_bias_x.begin(), currentElement_bias_x.end());
    // bias_y
    auto currentElement_bias_y = (msg + ctr)->bias_y;
    outArray[ctr]["bias_y"] = factory.createArray<px4_msgs::msg::MagnetometerBiasEstimate::_bias_y_type::const_iterator, float>({currentElement_bias_y.size(), 1}, currentElement_bias_y.begin(), currentElement_bias_y.end());
    // bias_z
    auto currentElement_bias_z = (msg + ctr)->bias_z;
    outArray[ctr]["bias_z"] = factory.createArray<px4_msgs::msg::MagnetometerBiasEstimate::_bias_z_type::const_iterator, float>({currentElement_bias_z.size(), 1}, currentElement_bias_z.begin(), currentElement_bias_z.end());
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createArray<px4_msgs::msg::MagnetometerBiasEstimate::_valid_type::const_iterator, bool>({currentElement_valid.size(), 1}, currentElement_valid.begin(), currentElement_valid.end());
    // stable
    auto currentElement_stable = (msg + ctr)->stable;
    outArray[ctr]["stable"] = factory.createArray<px4_msgs::msg::MagnetometerBiasEstimate::_stable_type::const_iterator, bool>({currentElement_stable.size(), 1}, currentElement_stable.begin(), currentElement_stable.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_MagnetometerBiasEstimate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_MagnetometerBiasEstimate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_MagnetometerBiasEstimate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::MagnetometerBiasEstimate,ros2_px4_msgs_msg_MagnetometerBiasEstimate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_MagnetometerBiasEstimate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::MagnetometerBiasEstimate,ros2_px4_msgs_msg_MagnetometerBiasEstimate_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_MagnetometerBiasEstimate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::MagnetometerBiasEstimate>();
    ros2_px4_msgs_msg_MagnetometerBiasEstimate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_MagnetometerBiasEstimate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_MagnetometerBiasEstimate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::MagnetometerBiasEstimate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_MagnetometerBiasEstimate_common, MATLABROS2MsgInterface<px4_msgs::msg::MagnetometerBiasEstimate>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_MagnetometerBiasEstimate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER