// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/LedControl
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
#include "px4_msgs/msg/led_control.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_LedControl_common : public MATLABROS2MsgInterface<px4_msgs::msg::LedControl> {
  public:
    virtual ~ros2_px4_msgs_msg_LedControl_common(){}
    virtual void copy_from_struct(px4_msgs::msg::LedControl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::LedControl* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_LedControl_common::copy_from_struct(px4_msgs::msg::LedControl* msg, const matlab::data::Struct& arr,
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
        //led_mask
        const matlab::data::TypedArray<uint8_t> led_mask_arr = arr["led_mask"];
        msg->led_mask = led_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'led_mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'led_mask' is wrong type; expected a uint8.");
    }
    try {
        //color
        const matlab::data::TypedArray<uint8_t> color_arr = arr["color"];
        msg->color = color_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'color' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'color' is wrong type; expected a uint8.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
    }
    try {
        //num_blinks
        const matlab::data::TypedArray<uint8_t> num_blinks_arr = arr["num_blinks"];
        msg->num_blinks = num_blinks_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'num_blinks' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'num_blinks' is wrong type; expected a uint8.");
    }
    try {
        //priority
        const matlab::data::TypedArray<uint8_t> priority_arr = arr["priority"];
        msg->priority = priority_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'priority' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_LedControl_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::LedControl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","COLOR_OFF","COLOR_RED","COLOR_GREEN","COLOR_BLUE","COLOR_YELLOW","COLOR_PURPLE","COLOR_AMBER","COLOR_CYAN","COLOR_WHITE","MODE_OFF","MODE_ON","MODE_DISABLED","MODE_BLINK_SLOW","MODE_BLINK_NORMAL","MODE_BLINK_FAST","MODE_BREATHE","MODE_FLASH","MAX_PRIORITY","led_mask","color","mode","num_blinks","priority","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/LedControl");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // COLOR_OFF
    auto currentElement_COLOR_OFF = (msg + ctr)->COLOR_OFF;
    outArray[ctr]["COLOR_OFF"] = factory.createScalar(currentElement_COLOR_OFF);
    // COLOR_RED
    auto currentElement_COLOR_RED = (msg + ctr)->COLOR_RED;
    outArray[ctr]["COLOR_RED"] = factory.createScalar(currentElement_COLOR_RED);
    // COLOR_GREEN
    auto currentElement_COLOR_GREEN = (msg + ctr)->COLOR_GREEN;
    outArray[ctr]["COLOR_GREEN"] = factory.createScalar(currentElement_COLOR_GREEN);
    // COLOR_BLUE
    auto currentElement_COLOR_BLUE = (msg + ctr)->COLOR_BLUE;
    outArray[ctr]["COLOR_BLUE"] = factory.createScalar(currentElement_COLOR_BLUE);
    // COLOR_YELLOW
    auto currentElement_COLOR_YELLOW = (msg + ctr)->COLOR_YELLOW;
    outArray[ctr]["COLOR_YELLOW"] = factory.createScalar(currentElement_COLOR_YELLOW);
    // COLOR_PURPLE
    auto currentElement_COLOR_PURPLE = (msg + ctr)->COLOR_PURPLE;
    outArray[ctr]["COLOR_PURPLE"] = factory.createScalar(currentElement_COLOR_PURPLE);
    // COLOR_AMBER
    auto currentElement_COLOR_AMBER = (msg + ctr)->COLOR_AMBER;
    outArray[ctr]["COLOR_AMBER"] = factory.createScalar(currentElement_COLOR_AMBER);
    // COLOR_CYAN
    auto currentElement_COLOR_CYAN = (msg + ctr)->COLOR_CYAN;
    outArray[ctr]["COLOR_CYAN"] = factory.createScalar(currentElement_COLOR_CYAN);
    // COLOR_WHITE
    auto currentElement_COLOR_WHITE = (msg + ctr)->COLOR_WHITE;
    outArray[ctr]["COLOR_WHITE"] = factory.createScalar(currentElement_COLOR_WHITE);
    // MODE_OFF
    auto currentElement_MODE_OFF = (msg + ctr)->MODE_OFF;
    outArray[ctr]["MODE_OFF"] = factory.createScalar(currentElement_MODE_OFF);
    // MODE_ON
    auto currentElement_MODE_ON = (msg + ctr)->MODE_ON;
    outArray[ctr]["MODE_ON"] = factory.createScalar(currentElement_MODE_ON);
    // MODE_DISABLED
    auto currentElement_MODE_DISABLED = (msg + ctr)->MODE_DISABLED;
    outArray[ctr]["MODE_DISABLED"] = factory.createScalar(currentElement_MODE_DISABLED);
    // MODE_BLINK_SLOW
    auto currentElement_MODE_BLINK_SLOW = (msg + ctr)->MODE_BLINK_SLOW;
    outArray[ctr]["MODE_BLINK_SLOW"] = factory.createScalar(currentElement_MODE_BLINK_SLOW);
    // MODE_BLINK_NORMAL
    auto currentElement_MODE_BLINK_NORMAL = (msg + ctr)->MODE_BLINK_NORMAL;
    outArray[ctr]["MODE_BLINK_NORMAL"] = factory.createScalar(currentElement_MODE_BLINK_NORMAL);
    // MODE_BLINK_FAST
    auto currentElement_MODE_BLINK_FAST = (msg + ctr)->MODE_BLINK_FAST;
    outArray[ctr]["MODE_BLINK_FAST"] = factory.createScalar(currentElement_MODE_BLINK_FAST);
    // MODE_BREATHE
    auto currentElement_MODE_BREATHE = (msg + ctr)->MODE_BREATHE;
    outArray[ctr]["MODE_BREATHE"] = factory.createScalar(currentElement_MODE_BREATHE);
    // MODE_FLASH
    auto currentElement_MODE_FLASH = (msg + ctr)->MODE_FLASH;
    outArray[ctr]["MODE_FLASH"] = factory.createScalar(currentElement_MODE_FLASH);
    // MAX_PRIORITY
    auto currentElement_MAX_PRIORITY = (msg + ctr)->MAX_PRIORITY;
    outArray[ctr]["MAX_PRIORITY"] = factory.createScalar(currentElement_MAX_PRIORITY);
    // led_mask
    auto currentElement_led_mask = (msg + ctr)->led_mask;
    outArray[ctr]["led_mask"] = factory.createScalar(currentElement_led_mask);
    // color
    auto currentElement_color = (msg + ctr)->color;
    outArray[ctr]["color"] = factory.createScalar(currentElement_color);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    // num_blinks
    auto currentElement_num_blinks = (msg + ctr)->num_blinks;
    outArray[ctr]["num_blinks"] = factory.createScalar(currentElement_num_blinks);
    // priority
    auto currentElement_priority = (msg + ctr)->priority;
    outArray[ctr]["priority"] = factory.createScalar(currentElement_priority);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_LedControl_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_LedControl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_LedControl_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::LedControl,ros2_px4_msgs_msg_LedControl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_LedControl_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::LedControl,ros2_px4_msgs_msg_LedControl_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_LedControl_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::LedControl>();
    ros2_px4_msgs_msg_LedControl_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_LedControl_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_LedControl_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::LedControl*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_LedControl_common, MATLABROS2MsgInterface<px4_msgs::msg::LedControl>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_LedControl_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER