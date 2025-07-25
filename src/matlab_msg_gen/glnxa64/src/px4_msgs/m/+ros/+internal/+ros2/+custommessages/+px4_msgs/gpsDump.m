function [data, info] = gpsDump
%GpsDump gives an empty data for px4_msgs/GpsDump
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GpsDump';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.instance, info.instance] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.len, info.len] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',79,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 8, [NaN]);
info.MessageType = 'px4_msgs/GpsDump';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'instance';
info.MatPath{3} = 'len';
info.MatPath{4} = 'data';
info.MatPath{5} = 'ORB_QUEUE_LENGTH';
