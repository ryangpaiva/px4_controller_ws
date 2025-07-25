// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/OnboardComputerStatus
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
#include "px4_msgs/msg/onboard_computer_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_OnboardComputerStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::OnboardComputerStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_OnboardComputerStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::OnboardComputerStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::OnboardComputerStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_OnboardComputerStatus_common::copy_from_struct(px4_msgs::msg::OnboardComputerStatus* msg, const matlab::data::Struct& arr,
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
        //uptime
        const matlab::data::TypedArray<uint32_t> uptime_arr = arr["uptime"];
        msg->uptime = uptime_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uptime' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'uptime' is wrong type; expected a uint32.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //cpu_cores
        const matlab::data::TypedArray<uint8_t> cpu_cores_arr = arr["cpu_cores"];
        size_t nelem = 8;
        	std::copy(cpu_cores_arr.begin(), cpu_cores_arr.begin()+nelem, msg->cpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cpu_cores' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cpu_cores' is wrong type; expected a uint8.");
    }
    try {
        //cpu_combined
        const matlab::data::TypedArray<uint8_t> cpu_combined_arr = arr["cpu_combined"];
        size_t nelem = 10;
        	std::copy(cpu_combined_arr.begin(), cpu_combined_arr.begin()+nelem, msg->cpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cpu_combined' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cpu_combined' is wrong type; expected a uint8.");
    }
    try {
        //gpu_cores
        const matlab::data::TypedArray<uint8_t> gpu_cores_arr = arr["gpu_cores"];
        size_t nelem = 4;
        	std::copy(gpu_cores_arr.begin(), gpu_cores_arr.begin()+nelem, msg->gpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gpu_cores' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gpu_cores' is wrong type; expected a uint8.");
    }
    try {
        //gpu_combined
        const matlab::data::TypedArray<uint8_t> gpu_combined_arr = arr["gpu_combined"];
        size_t nelem = 10;
        	std::copy(gpu_combined_arr.begin(), gpu_combined_arr.begin()+nelem, msg->gpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gpu_combined' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gpu_combined' is wrong type; expected a uint8.");
    }
    try {
        //temperature_board
        const matlab::data::TypedArray<int8_t> temperature_board_arr = arr["temperature_board"];
        msg->temperature_board = temperature_board_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_board' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_board' is wrong type; expected a int8.");
    }
    try {
        //temperature_core
        const matlab::data::TypedArray<int8_t> temperature_core_arr = arr["temperature_core"];
        size_t nelem = 8;
        	std::copy(temperature_core_arr.begin(), temperature_core_arr.begin()+nelem, msg->temperature_core.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_core' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_core' is wrong type; expected a int8.");
    }
    try {
        //fan_speed
        const matlab::data::TypedArray<int16_t> fan_speed_arr = arr["fan_speed"];
        size_t nelem = 4;
        	std::copy(fan_speed_arr.begin(), fan_speed_arr.begin()+nelem, msg->fan_speed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fan_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fan_speed' is wrong type; expected a int16.");
    }
    try {
        //ram_usage
        const matlab::data::TypedArray<uint32_t> ram_usage_arr = arr["ram_usage"];
        msg->ram_usage = ram_usage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ram_usage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ram_usage' is wrong type; expected a uint32.");
    }
    try {
        //ram_total
        const matlab::data::TypedArray<uint32_t> ram_total_arr = arr["ram_total"];
        msg->ram_total = ram_total_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ram_total' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ram_total' is wrong type; expected a uint32.");
    }
    try {
        //storage_type
        const matlab::data::TypedArray<uint32_t> storage_type_arr = arr["storage_type"];
        size_t nelem = 4;
        	std::copy(storage_type_arr.begin(), storage_type_arr.begin()+nelem, msg->storage_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'storage_type' is wrong type; expected a uint32.");
    }
    try {
        //storage_usage
        const matlab::data::TypedArray<uint32_t> storage_usage_arr = arr["storage_usage"];
        size_t nelem = 4;
        	std::copy(storage_usage_arr.begin(), storage_usage_arr.begin()+nelem, msg->storage_usage.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_usage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'storage_usage' is wrong type; expected a uint32.");
    }
    try {
        //storage_total
        const matlab::data::TypedArray<uint32_t> storage_total_arr = arr["storage_total"];
        size_t nelem = 4;
        	std::copy(storage_total_arr.begin(), storage_total_arr.begin()+nelem, msg->storage_total.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_total' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'storage_total' is wrong type; expected a uint32.");
    }
    try {
        //link_type
        const matlab::data::TypedArray<uint32_t> link_type_arr = arr["link_type"];
        size_t nelem = 6;
        	std::copy(link_type_arr.begin(), link_type_arr.begin()+nelem, msg->link_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_type' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_rate
        const matlab::data::TypedArray<uint32_t> link_tx_rate_arr = arr["link_tx_rate"];
        size_t nelem = 6;
        	std::copy(link_tx_rate_arr.begin(), link_tx_rate_arr.begin()+nelem, msg->link_tx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_tx_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_tx_rate' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_rate
        const matlab::data::TypedArray<uint32_t> link_rx_rate_arr = arr["link_rx_rate"];
        size_t nelem = 6;
        	std::copy(link_rx_rate_arr.begin(), link_rx_rate_arr.begin()+nelem, msg->link_rx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_rx_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_rx_rate' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_max
        const matlab::data::TypedArray<uint32_t> link_tx_max_arr = arr["link_tx_max"];
        size_t nelem = 6;
        	std::copy(link_tx_max_arr.begin(), link_tx_max_arr.begin()+nelem, msg->link_tx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_tx_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_tx_max' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_max
        const matlab::data::TypedArray<uint32_t> link_rx_max_arr = arr["link_rx_max"];
        size_t nelem = 6;
        	std::copy(link_rx_max_arr.begin(), link_rx_max_arr.begin()+nelem, msg->link_rx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_rx_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_rx_max' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_OnboardComputerStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::OnboardComputerStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","uptime","type","cpu_cores","cpu_combined","gpu_cores","gpu_combined","temperature_board","temperature_core","fan_speed","ram_usage","ram_total","storage_type","storage_usage","storage_total","link_type","link_tx_rate","link_rx_rate","link_tx_max","link_rx_max"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/OnboardComputerStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // uptime
    auto currentElement_uptime = (msg + ctr)->uptime;
    outArray[ctr]["uptime"] = factory.createScalar(currentElement_uptime);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // cpu_cores
    auto currentElement_cpu_cores = (msg + ctr)->cpu_cores;
    outArray[ctr]["cpu_cores"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_cpu_cores_type::const_iterator, uint8_t>({currentElement_cpu_cores.size(), 1}, currentElement_cpu_cores.begin(), currentElement_cpu_cores.end());
    // cpu_combined
    auto currentElement_cpu_combined = (msg + ctr)->cpu_combined;
    outArray[ctr]["cpu_combined"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_cpu_combined_type::const_iterator, uint8_t>({currentElement_cpu_combined.size(), 1}, currentElement_cpu_combined.begin(), currentElement_cpu_combined.end());
    // gpu_cores
    auto currentElement_gpu_cores = (msg + ctr)->gpu_cores;
    outArray[ctr]["gpu_cores"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_gpu_cores_type::const_iterator, uint8_t>({currentElement_gpu_cores.size(), 1}, currentElement_gpu_cores.begin(), currentElement_gpu_cores.end());
    // gpu_combined
    auto currentElement_gpu_combined = (msg + ctr)->gpu_combined;
    outArray[ctr]["gpu_combined"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_gpu_combined_type::const_iterator, uint8_t>({currentElement_gpu_combined.size(), 1}, currentElement_gpu_combined.begin(), currentElement_gpu_combined.end());
    // temperature_board
    auto currentElement_temperature_board = (msg + ctr)->temperature_board;
    outArray[ctr]["temperature_board"] = factory.createScalar(currentElement_temperature_board);
    // temperature_core
    auto currentElement_temperature_core = (msg + ctr)->temperature_core;
    outArray[ctr]["temperature_core"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_temperature_core_type::const_iterator, int8_t>({currentElement_temperature_core.size(), 1}, currentElement_temperature_core.begin(), currentElement_temperature_core.end());
    // fan_speed
    auto currentElement_fan_speed = (msg + ctr)->fan_speed;
    outArray[ctr]["fan_speed"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_fan_speed_type::const_iterator, int16_t>({currentElement_fan_speed.size(), 1}, currentElement_fan_speed.begin(), currentElement_fan_speed.end());
    // ram_usage
    auto currentElement_ram_usage = (msg + ctr)->ram_usage;
    outArray[ctr]["ram_usage"] = factory.createScalar(currentElement_ram_usage);
    // ram_total
    auto currentElement_ram_total = (msg + ctr)->ram_total;
    outArray[ctr]["ram_total"] = factory.createScalar(currentElement_ram_total);
    // storage_type
    auto currentElement_storage_type = (msg + ctr)->storage_type;
    outArray[ctr]["storage_type"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_storage_type_type::const_iterator, uint32_t>({currentElement_storage_type.size(), 1}, currentElement_storage_type.begin(), currentElement_storage_type.end());
    // storage_usage
    auto currentElement_storage_usage = (msg + ctr)->storage_usage;
    outArray[ctr]["storage_usage"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_storage_usage_type::const_iterator, uint32_t>({currentElement_storage_usage.size(), 1}, currentElement_storage_usage.begin(), currentElement_storage_usage.end());
    // storage_total
    auto currentElement_storage_total = (msg + ctr)->storage_total;
    outArray[ctr]["storage_total"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_storage_total_type::const_iterator, uint32_t>({currentElement_storage_total.size(), 1}, currentElement_storage_total.begin(), currentElement_storage_total.end());
    // link_type
    auto currentElement_link_type = (msg + ctr)->link_type;
    outArray[ctr]["link_type"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_link_type_type::const_iterator, uint32_t>({currentElement_link_type.size(), 1}, currentElement_link_type.begin(), currentElement_link_type.end());
    // link_tx_rate
    auto currentElement_link_tx_rate = (msg + ctr)->link_tx_rate;
    outArray[ctr]["link_tx_rate"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_link_tx_rate_type::const_iterator, uint32_t>({currentElement_link_tx_rate.size(), 1}, currentElement_link_tx_rate.begin(), currentElement_link_tx_rate.end());
    // link_rx_rate
    auto currentElement_link_rx_rate = (msg + ctr)->link_rx_rate;
    outArray[ctr]["link_rx_rate"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_link_rx_rate_type::const_iterator, uint32_t>({currentElement_link_rx_rate.size(), 1}, currentElement_link_rx_rate.begin(), currentElement_link_rx_rate.end());
    // link_tx_max
    auto currentElement_link_tx_max = (msg + ctr)->link_tx_max;
    outArray[ctr]["link_tx_max"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_link_tx_max_type::const_iterator, uint32_t>({currentElement_link_tx_max.size(), 1}, currentElement_link_tx_max.begin(), currentElement_link_tx_max.end());
    // link_rx_max
    auto currentElement_link_rx_max = (msg + ctr)->link_rx_max;
    outArray[ctr]["link_rx_max"] = factory.createArray<px4_msgs::msg::OnboardComputerStatus::_link_rx_max_type::const_iterator, uint32_t>({currentElement_link_rx_max.size(), 1}, currentElement_link_rx_max.begin(), currentElement_link_rx_max.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_OnboardComputerStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_OnboardComputerStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_OnboardComputerStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::OnboardComputerStatus,ros2_px4_msgs_msg_OnboardComputerStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_OnboardComputerStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::OnboardComputerStatus,ros2_px4_msgs_msg_OnboardComputerStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_OnboardComputerStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::OnboardComputerStatus>();
    ros2_px4_msgs_msg_OnboardComputerStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_OnboardComputerStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_OnboardComputerStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::OnboardComputerStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_OnboardComputerStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::OnboardComputerStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_OnboardComputerStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER