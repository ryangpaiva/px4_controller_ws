// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PowerMonitor
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
#include "px4_msgs/msg/power_monitor.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PowerMonitor_common : public MATLABROS2MsgInterface<px4_msgs::msg::PowerMonitor> {
  public:
    virtual ~ros2_px4_msgs_msg_PowerMonitor_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PowerMonitor* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PowerMonitor* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PowerMonitor_common::copy_from_struct(px4_msgs::msg::PowerMonitor* msg, const matlab::data::Struct& arr,
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
        //voltage_v
        const matlab::data::TypedArray<float> voltage_v_arr = arr["voltage_v"];
        msg->voltage_v = voltage_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_v' is wrong type; expected a single.");
    }
    try {
        //current_a
        const matlab::data::TypedArray<float> current_a_arr = arr["current_a"];
        msg->current_a = current_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_a' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_a' is wrong type; expected a single.");
    }
    try {
        //power_w
        const matlab::data::TypedArray<float> power_w_arr = arr["power_w"];
        msg->power_w = power_w_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'power_w' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'power_w' is wrong type; expected a single.");
    }
    try {
        //rconf
        const matlab::data::TypedArray<int16_t> rconf_arr = arr["rconf"];
        msg->rconf = rconf_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rconf' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rconf' is wrong type; expected a int16.");
    }
    try {
        //rsv
        const matlab::data::TypedArray<int16_t> rsv_arr = arr["rsv"];
        msg->rsv = rsv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rsv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rsv' is wrong type; expected a int16.");
    }
    try {
        //rbv
        const matlab::data::TypedArray<int16_t> rbv_arr = arr["rbv"];
        msg->rbv = rbv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rbv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rbv' is wrong type; expected a int16.");
    }
    try {
        //rp
        const matlab::data::TypedArray<int16_t> rp_arr = arr["rp"];
        msg->rp = rp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rp' is wrong type; expected a int16.");
    }
    try {
        //rc
        const matlab::data::TypedArray<int16_t> rc_arr = arr["rc"];
        msg->rc = rc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc' is wrong type; expected a int16.");
    }
    try {
        //rcal
        const matlab::data::TypedArray<int16_t> rcal_arr = arr["rcal"];
        msg->rcal = rcal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rcal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rcal' is wrong type; expected a int16.");
    }
    try {
        //me
        const matlab::data::TypedArray<int16_t> me_arr = arr["me"];
        msg->me = me_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'me' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'me' is wrong type; expected a int16.");
    }
    try {
        //al
        const matlab::data::TypedArray<int16_t> al_arr = arr["al"];
        msg->al = al_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'al' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'al' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PowerMonitor_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PowerMonitor* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","voltage_v","current_a","power_w","rconf","rsv","rbv","rp","rc","rcal","me","al"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PowerMonitor");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // voltage_v
    auto currentElement_voltage_v = (msg + ctr)->voltage_v;
    outArray[ctr]["voltage_v"] = factory.createScalar(currentElement_voltage_v);
    // current_a
    auto currentElement_current_a = (msg + ctr)->current_a;
    outArray[ctr]["current_a"] = factory.createScalar(currentElement_current_a);
    // power_w
    auto currentElement_power_w = (msg + ctr)->power_w;
    outArray[ctr]["power_w"] = factory.createScalar(currentElement_power_w);
    // rconf
    auto currentElement_rconf = (msg + ctr)->rconf;
    outArray[ctr]["rconf"] = factory.createScalar(currentElement_rconf);
    // rsv
    auto currentElement_rsv = (msg + ctr)->rsv;
    outArray[ctr]["rsv"] = factory.createScalar(currentElement_rsv);
    // rbv
    auto currentElement_rbv = (msg + ctr)->rbv;
    outArray[ctr]["rbv"] = factory.createScalar(currentElement_rbv);
    // rp
    auto currentElement_rp = (msg + ctr)->rp;
    outArray[ctr]["rp"] = factory.createScalar(currentElement_rp);
    // rc
    auto currentElement_rc = (msg + ctr)->rc;
    outArray[ctr]["rc"] = factory.createScalar(currentElement_rc);
    // rcal
    auto currentElement_rcal = (msg + ctr)->rcal;
    outArray[ctr]["rcal"] = factory.createScalar(currentElement_rcal);
    // me
    auto currentElement_me = (msg + ctr)->me;
    outArray[ctr]["me"] = factory.createScalar(currentElement_me);
    // al
    auto currentElement_al = (msg + ctr)->al;
    outArray[ctr]["al"] = factory.createScalar(currentElement_al);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PowerMonitor_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PowerMonitor_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PowerMonitor_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PowerMonitor,ros2_px4_msgs_msg_PowerMonitor_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PowerMonitor_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PowerMonitor,ros2_px4_msgs_msg_PowerMonitor_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PowerMonitor_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PowerMonitor>();
    ros2_px4_msgs_msg_PowerMonitor_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PowerMonitor_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PowerMonitor_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PowerMonitor*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PowerMonitor_common, MATLABROS2MsgInterface<px4_msgs::msg::PowerMonitor>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PowerMonitor_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER