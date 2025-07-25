function [data, info] = gpioIn
%GpioIn gives an empty data for px4_msgs/GpioIn
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GpioIn';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.state, info.state] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/GpioIn';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'device_id';
info.MatPath{3} = 'state';
