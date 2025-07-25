// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/AdcReport
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
#include "px4_msgs/msg/adc_report.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_AdcReport_common : public MATLABROS2MsgInterface<px4_msgs::msg::AdcReport> {
  public:
    virtual ~ros2_px4_msgs_msg_AdcReport_common(){}
    virtual void copy_from_struct(px4_msgs::msg::AdcReport* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::AdcReport* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_AdcReport_common::copy_from_struct(px4_msgs::msg::AdcReport* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //channel_id
        const matlab::data::TypedArray<int16_t> channel_id_arr = arr["channel_id"];
        size_t nelem = 12;
        	std::copy(channel_id_arr.begin(), channel_id_arr.begin()+nelem, msg->channel_id.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'channel_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'channel_id' is wrong type; expected a int16.");
    }
    try {
        //raw_data
        const matlab::data::TypedArray<int32_t> raw_data_arr = arr["raw_data"];
        size_t nelem = 12;
        	std::copy(raw_data_arr.begin(), raw_data_arr.begin()+nelem, msg->raw_data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'raw_data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'raw_data' is wrong type; expected a int32.");
    }
    try {
        //resolution
        const matlab::data::TypedArray<uint32_t> resolution_arr = arr["resolution"];
        msg->resolution = resolution_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'resolution' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'resolution' is wrong type; expected a uint32.");
    }
    try {
        //v_ref
        const matlab::data::TypedArray<float> v_ref_arr = arr["v_ref"];
        msg->v_ref = v_ref_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'v_ref' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'v_ref' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_AdcReport_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::AdcReport* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id","channel_id","raw_data","resolution","v_ref"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/AdcReport");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // channel_id
    auto currentElement_channel_id = (msg + ctr)->channel_id;
    outArray[ctr]["channel_id"] = factory.createArray<px4_msgs::msg::AdcReport::_channel_id_type::const_iterator, int16_t>({currentElement_channel_id.size(), 1}, currentElement_channel_id.begin(), currentElement_channel_id.end());
    // raw_data
    auto currentElement_raw_data = (msg + ctr)->raw_data;
    outArray[ctr]["raw_data"] = factory.createArray<px4_msgs::msg::AdcReport::_raw_data_type::const_iterator, int32_t>({currentElement_raw_data.size(), 1}, currentElement_raw_data.begin(), currentElement_raw_data.end());
    // resolution
    auto currentElement_resolution = (msg + ctr)->resolution;
    outArray[ctr]["resolution"] = factory.createScalar(currentElement_resolution);
    // v_ref
    auto currentElement_v_ref = (msg + ctr)->v_ref;
    outArray[ctr]["v_ref"] = factory.createScalar(currentElement_v_ref);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_AdcReport_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_AdcReport_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_AdcReport_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::AdcReport,ros2_px4_msgs_msg_AdcReport_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_AdcReport_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::AdcReport,ros2_px4_msgs_msg_AdcReport_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_AdcReport_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::AdcReport>();
    ros2_px4_msgs_msg_AdcReport_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_AdcReport_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_AdcReport_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::AdcReport*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_AdcReport_common, MATLABROS2MsgInterface<px4_msgs::msg::AdcReport>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_AdcReport_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER