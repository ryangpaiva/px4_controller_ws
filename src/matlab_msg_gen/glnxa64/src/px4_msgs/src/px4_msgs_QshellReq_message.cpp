// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/QshellReq
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
#include "px4_msgs/msg/qshell_req.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_QshellReq_common : public MATLABROS2MsgInterface<px4_msgs::msg::QshellReq> {
  public:
    virtual ~ros2_px4_msgs_msg_QshellReq_common(){}
    virtual void copy_from_struct(px4_msgs::msg::QshellReq* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::QshellReq* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_QshellReq_common::copy_from_struct(px4_msgs::msg::QshellReq* msg, const matlab::data::Struct& arr,
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
        //cmd
        const matlab::data::CharArray cmd_arr = arr["cmd"];
        const std::string cmd_str = cmd_arr.toAscii();
        size_t nelem = 100;
        	std::copy(cmd_arr.begin(), cmd_arr.begin()+nelem, msg->cmd.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cmd' is wrong type; expected a char.");
    }
    try {
        //strlen
        const matlab::data::TypedArray<uint32_t> strlen_arr = arr["strlen"];
        msg->strlen = strlen_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'strlen' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'strlen' is wrong type; expected a uint32.");
    }
    try {
        //request_sequence
        const matlab::data::TypedArray<uint32_t> request_sequence_arr = arr["request_sequence"];
        msg->request_sequence = request_sequence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'request_sequence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'request_sequence' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_QshellReq_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::QshellReq* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","cmd","MAX_STRLEN","strlen","request_sequence"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/QshellReq");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // cmd
    auto currentElement_cmd = (msg + ctr)->cmd;
    outArray[ctr]["cmd"] = factory.createCharArray(std::string(currentElement_cmd.begin(),currentElement_cmd.end()));
    // MAX_STRLEN
    auto currentElement_MAX_STRLEN = (msg + ctr)->MAX_STRLEN;
    outArray[ctr]["MAX_STRLEN"] = factory.createScalar(currentElement_MAX_STRLEN);
    // strlen
    auto currentElement_strlen = (msg + ctr)->strlen;
    outArray[ctr]["strlen"] = factory.createScalar(currentElement_strlen);
    // request_sequence
    auto currentElement_request_sequence = (msg + ctr)->request_sequence;
    outArray[ctr]["request_sequence"] = factory.createScalar(currentElement_request_sequence);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_QshellReq_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_QshellReq_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_QshellReq_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::QshellReq,ros2_px4_msgs_msg_QshellReq_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_QshellReq_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::QshellReq,ros2_px4_msgs_msg_QshellReq_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_QshellReq_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::QshellReq>();
    ros2_px4_msgs_msg_QshellReq_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_QshellReq_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_QshellReq_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::QshellReq*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_QshellReq_common, MATLABROS2MsgInterface<px4_msgs::msg::QshellReq>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_QshellReq_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER