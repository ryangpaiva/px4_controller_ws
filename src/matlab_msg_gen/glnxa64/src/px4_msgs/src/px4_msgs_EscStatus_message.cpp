// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EscStatus
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
#include "px4_msgs/msg/esc_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EscStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::EscStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_EscStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EscStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EscStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EscStatus_common::copy_from_struct(px4_msgs::msg::EscStatus* msg, const matlab::data::Struct& arr,
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
        //counter
        const matlab::data::TypedArray<uint16_t> counter_arr = arr["counter"];
        msg->counter = counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'counter' is wrong type; expected a uint16.");
    }
    try {
        //esc_count
        const matlab::data::TypedArray<uint8_t> esc_count_arr = arr["esc_count"];
        msg->esc_count = esc_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_count' is wrong type; expected a uint8.");
    }
    try {
        //esc_connectiontype
        const matlab::data::TypedArray<uint8_t> esc_connectiontype_arr = arr["esc_connectiontype"];
        msg->esc_connectiontype = esc_connectiontype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_connectiontype' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_connectiontype' is wrong type; expected a uint8.");
    }
    try {
        //esc_online_flags
        const matlab::data::TypedArray<uint8_t> esc_online_flags_arr = arr["esc_online_flags"];
        msg->esc_online_flags = esc_online_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_online_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_online_flags' is wrong type; expected a uint8.");
    }
    try {
        //esc_armed_flags
        const matlab::data::TypedArray<uint8_t> esc_armed_flags_arr = arr["esc_armed_flags"];
        msg->esc_armed_flags = esc_armed_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_armed_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_armed_flags' is wrong type; expected a uint8.");
    }
    try {
        //esc
        const matlab::data::StructArray esc_arr = arr["esc"];
        if (esc_arr.getNumberOfElements() < 8)
        	throw(std::invalid_argument("Field 'esc' must have minimum of 8 elements."));
        size_t idx_esc = 0;
        for (auto _escarr : esc_arr) {
        	px4_msgs::msg::EscReport _val;
        auto msgClassPtr_esc = getCommonObject<px4_msgs::msg::EscReport>("ros2_px4_msgs_msg_EscReport_common",loader);
        msgClassPtr_esc->copy_from_struct(&_val,_escarr,loader);
        	msg->esc[idx_esc++] = _val;
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EscStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EscStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","CONNECTED_ESC_MAX","ESC_CONNECTION_TYPE_PPM","ESC_CONNECTION_TYPE_SERIAL","ESC_CONNECTION_TYPE_ONESHOT","ESC_CONNECTION_TYPE_I2C","ESC_CONNECTION_TYPE_CAN","ESC_CONNECTION_TYPE_DSHOT","counter","esc_count","esc_connectiontype","esc_online_flags","esc_armed_flags","esc"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EscStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // CONNECTED_ESC_MAX
    auto currentElement_CONNECTED_ESC_MAX = (msg + ctr)->CONNECTED_ESC_MAX;
    outArray[ctr]["CONNECTED_ESC_MAX"] = factory.createScalar(currentElement_CONNECTED_ESC_MAX);
    // ESC_CONNECTION_TYPE_PPM
    auto currentElement_ESC_CONNECTION_TYPE_PPM = (msg + ctr)->ESC_CONNECTION_TYPE_PPM;
    outArray[ctr]["ESC_CONNECTION_TYPE_PPM"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_PPM);
    // ESC_CONNECTION_TYPE_SERIAL
    auto currentElement_ESC_CONNECTION_TYPE_SERIAL = (msg + ctr)->ESC_CONNECTION_TYPE_SERIAL;
    outArray[ctr]["ESC_CONNECTION_TYPE_SERIAL"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_SERIAL);
    // ESC_CONNECTION_TYPE_ONESHOT
    auto currentElement_ESC_CONNECTION_TYPE_ONESHOT = (msg + ctr)->ESC_CONNECTION_TYPE_ONESHOT;
    outArray[ctr]["ESC_CONNECTION_TYPE_ONESHOT"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_ONESHOT);
    // ESC_CONNECTION_TYPE_I2C
    auto currentElement_ESC_CONNECTION_TYPE_I2C = (msg + ctr)->ESC_CONNECTION_TYPE_I2C;
    outArray[ctr]["ESC_CONNECTION_TYPE_I2C"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_I2C);
    // ESC_CONNECTION_TYPE_CAN
    auto currentElement_ESC_CONNECTION_TYPE_CAN = (msg + ctr)->ESC_CONNECTION_TYPE_CAN;
    outArray[ctr]["ESC_CONNECTION_TYPE_CAN"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_CAN);
    // ESC_CONNECTION_TYPE_DSHOT
    auto currentElement_ESC_CONNECTION_TYPE_DSHOT = (msg + ctr)->ESC_CONNECTION_TYPE_DSHOT;
    outArray[ctr]["ESC_CONNECTION_TYPE_DSHOT"] = factory.createScalar(currentElement_ESC_CONNECTION_TYPE_DSHOT);
    // counter
    auto currentElement_counter = (msg + ctr)->counter;
    outArray[ctr]["counter"] = factory.createScalar(currentElement_counter);
    // esc_count
    auto currentElement_esc_count = (msg + ctr)->esc_count;
    outArray[ctr]["esc_count"] = factory.createScalar(currentElement_esc_count);
    // esc_connectiontype
    auto currentElement_esc_connectiontype = (msg + ctr)->esc_connectiontype;
    outArray[ctr]["esc_connectiontype"] = factory.createScalar(currentElement_esc_connectiontype);
    // esc_online_flags
    auto currentElement_esc_online_flags = (msg + ctr)->esc_online_flags;
    outArray[ctr]["esc_online_flags"] = factory.createScalar(currentElement_esc_online_flags);
    // esc_armed_flags
    auto currentElement_esc_armed_flags = (msg + ctr)->esc_armed_flags;
    outArray[ctr]["esc_armed_flags"] = factory.createScalar(currentElement_esc_armed_flags);
    // esc
    auto currentElement_esc = (msg + ctr)->esc;
    auto msgClassPtr_esc = getCommonObject<px4_msgs::msg::EscReport>("ros2_px4_msgs_msg_EscReport_common",loader);
    outArray[ctr]["esc"] = msgClassPtr_esc->get_arr(factory,&currentElement_esc[0],loader,currentElement_esc.size());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EscStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EscStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EscStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EscStatus,ros2_px4_msgs_msg_EscStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EscStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EscStatus,ros2_px4_msgs_msg_EscStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EscStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EscStatus>();
    ros2_px4_msgs_msg_EscStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EscStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EscStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EscStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EscStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::EscStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EscStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER