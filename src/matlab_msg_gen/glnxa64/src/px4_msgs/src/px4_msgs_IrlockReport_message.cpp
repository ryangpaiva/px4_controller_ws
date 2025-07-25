// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/IrlockReport
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
#include "px4_msgs/msg/irlock_report.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_IrlockReport_common : public MATLABROS2MsgInterface<px4_msgs::msg::IrlockReport> {
  public:
    virtual ~ros2_px4_msgs_msg_IrlockReport_common(){}
    virtual void copy_from_struct(px4_msgs::msg::IrlockReport* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::IrlockReport* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_IrlockReport_common::copy_from_struct(px4_msgs::msg::IrlockReport* msg, const matlab::data::Struct& arr,
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
        //signature
        const matlab::data::TypedArray<uint16_t> signature_arr = arr["signature"];
        msg->signature = signature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'signature' is wrong type; expected a uint16.");
    }
    try {
        //pos_x
        const matlab::data::TypedArray<float> pos_x_arr = arr["pos_x"];
        msg->pos_x = pos_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_x' is wrong type; expected a single.");
    }
    try {
        //pos_y
        const matlab::data::TypedArray<float> pos_y_arr = arr["pos_y"];
        msg->pos_y = pos_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_y' is wrong type; expected a single.");
    }
    try {
        //size_x
        const matlab::data::TypedArray<float> size_x_arr = arr["size_x"];
        msg->size_x = size_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'size_x' is wrong type; expected a single.");
    }
    try {
        //size_y
        const matlab::data::TypedArray<float> size_y_arr = arr["size_y"];
        msg->size_y = size_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'size_y' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_IrlockReport_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::IrlockReport* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","signature","pos_x","pos_y","size_x","size_y"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/IrlockReport");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // signature
    auto currentElement_signature = (msg + ctr)->signature;
    outArray[ctr]["signature"] = factory.createScalar(currentElement_signature);
    // pos_x
    auto currentElement_pos_x = (msg + ctr)->pos_x;
    outArray[ctr]["pos_x"] = factory.createScalar(currentElement_pos_x);
    // pos_y
    auto currentElement_pos_y = (msg + ctr)->pos_y;
    outArray[ctr]["pos_y"] = factory.createScalar(currentElement_pos_y);
    // size_x
    auto currentElement_size_x = (msg + ctr)->size_x;
    outArray[ctr]["size_x"] = factory.createScalar(currentElement_size_x);
    // size_y
    auto currentElement_size_y = (msg + ctr)->size_y;
    outArray[ctr]["size_y"] = factory.createScalar(currentElement_size_y);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_IrlockReport_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_IrlockReport_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_IrlockReport_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::IrlockReport,ros2_px4_msgs_msg_IrlockReport_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_IrlockReport_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::IrlockReport,ros2_px4_msgs_msg_IrlockReport_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_IrlockReport_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::IrlockReport>();
    ros2_px4_msgs_msg_IrlockReport_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_IrlockReport_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_IrlockReport_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::IrlockReport*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_IrlockReport_common, MATLABROS2MsgInterface<px4_msgs::msg::IrlockReport>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_IrlockReport_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER