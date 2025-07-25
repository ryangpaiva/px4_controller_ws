// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/CollisionConstraints
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
#include "px4_msgs/msg/collision_constraints.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_CollisionConstraints_common : public MATLABROS2MsgInterface<px4_msgs::msg::CollisionConstraints> {
  public:
    virtual ~ros2_px4_msgs_msg_CollisionConstraints_common(){}
    virtual void copy_from_struct(px4_msgs::msg::CollisionConstraints* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::CollisionConstraints* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_CollisionConstraints_common::copy_from_struct(px4_msgs::msg::CollisionConstraints* msg, const matlab::data::Struct& arr,
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
        //original_setpoint
        const matlab::data::TypedArray<float> original_setpoint_arr = arr["original_setpoint"];
        size_t nelem = 2;
        	std::copy(original_setpoint_arr.begin(), original_setpoint_arr.begin()+nelem, msg->original_setpoint.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'original_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'original_setpoint' is wrong type; expected a single.");
    }
    try {
        //adapted_setpoint
        const matlab::data::TypedArray<float> adapted_setpoint_arr = arr["adapted_setpoint"];
        size_t nelem = 2;
        	std::copy(adapted_setpoint_arr.begin(), adapted_setpoint_arr.begin()+nelem, msg->adapted_setpoint.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'adapted_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'adapted_setpoint' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_CollisionConstraints_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::CollisionConstraints* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","original_setpoint","adapted_setpoint"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/CollisionConstraints");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // original_setpoint
    auto currentElement_original_setpoint = (msg + ctr)->original_setpoint;
    outArray[ctr]["original_setpoint"] = factory.createArray<px4_msgs::msg::CollisionConstraints::_original_setpoint_type::const_iterator, float>({currentElement_original_setpoint.size(), 1}, currentElement_original_setpoint.begin(), currentElement_original_setpoint.end());
    // adapted_setpoint
    auto currentElement_adapted_setpoint = (msg + ctr)->adapted_setpoint;
    outArray[ctr]["adapted_setpoint"] = factory.createArray<px4_msgs::msg::CollisionConstraints::_adapted_setpoint_type::const_iterator, float>({currentElement_adapted_setpoint.size(), 1}, currentElement_adapted_setpoint.begin(), currentElement_adapted_setpoint.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_CollisionConstraints_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_CollisionConstraints_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_CollisionConstraints_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::CollisionConstraints,ros2_px4_msgs_msg_CollisionConstraints_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_CollisionConstraints_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::CollisionConstraints,ros2_px4_msgs_msg_CollisionConstraints_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_CollisionConstraints_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::CollisionConstraints>();
    ros2_px4_msgs_msg_CollisionConstraints_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_CollisionConstraints_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_CollisionConstraints_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::CollisionConstraints*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_CollisionConstraints_common, MATLABROS2MsgInterface<px4_msgs::msg::CollisionConstraints>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_CollisionConstraints_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER