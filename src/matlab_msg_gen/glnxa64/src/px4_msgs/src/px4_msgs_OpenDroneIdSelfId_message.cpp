// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/OpenDroneIdSelfId
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
#include "px4_msgs/msg/open_drone_id_self_id.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_OpenDroneIdSelfId_common : public MATLABROS2MsgInterface<px4_msgs::msg::OpenDroneIdSelfId> {
  public:
    virtual ~ros2_px4_msgs_msg_OpenDroneIdSelfId_common(){}
    virtual void copy_from_struct(px4_msgs::msg::OpenDroneIdSelfId* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::OpenDroneIdSelfId* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_OpenDroneIdSelfId_common::copy_from_struct(px4_msgs::msg::OpenDroneIdSelfId* msg, const matlab::data::Struct& arr,
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
        //id_or_mac
        const matlab::data::TypedArray<uint8_t> id_or_mac_arr = arr["id_or_mac"];
        size_t nelem = 20;
        	std::copy(id_or_mac_arr.begin(), id_or_mac_arr.begin()+nelem, msg->id_or_mac.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id_or_mac' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id_or_mac' is wrong type; expected a uint8.");
    }
    try {
        //description_type
        const matlab::data::TypedArray<uint8_t> description_type_arr = arr["description_type"];
        msg->description_type = description_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'description_type' is wrong type; expected a uint8.");
    }
    try {
        //description
        const matlab::data::CharArray description_arr = arr["description"];
        const std::string description_str = description_arr.toAscii();
        size_t nelem = 23;
        	std::copy(description_arr.begin(), description_arr.begin()+nelem, msg->description.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a char.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_OpenDroneIdSelfId_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::OpenDroneIdSelfId* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","id_or_mac","description_type","description"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/OpenDroneIdSelfId");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // id_or_mac
    auto currentElement_id_or_mac = (msg + ctr)->id_or_mac;
    outArray[ctr]["id_or_mac"] = factory.createArray<px4_msgs::msg::OpenDroneIdSelfId::_id_or_mac_type::const_iterator, uint8_t>({currentElement_id_or_mac.size(), 1}, currentElement_id_or_mac.begin(), currentElement_id_or_mac.end());
    // description_type
    auto currentElement_description_type = (msg + ctr)->description_type;
    outArray[ctr]["description_type"] = factory.createScalar(currentElement_description_type);
    // description
    auto currentElement_description = (msg + ctr)->description;
    outArray[ctr]["description"] = factory.createCharArray(std::string(currentElement_description.begin(),currentElement_description.end()));
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_OpenDroneIdSelfId_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_OpenDroneIdSelfId_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_OpenDroneIdSelfId_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::OpenDroneIdSelfId,ros2_px4_msgs_msg_OpenDroneIdSelfId_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_OpenDroneIdSelfId_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::OpenDroneIdSelfId,ros2_px4_msgs_msg_OpenDroneIdSelfId_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_OpenDroneIdSelfId_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::OpenDroneIdSelfId>();
    ros2_px4_msgs_msg_OpenDroneIdSelfId_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_OpenDroneIdSelfId_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_OpenDroneIdSelfId_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::OpenDroneIdSelfId*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_OpenDroneIdSelfId_common, MATLABROS2MsgInterface<px4_msgs::msg::OpenDroneIdSelfId>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_OpenDroneIdSelfId_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER