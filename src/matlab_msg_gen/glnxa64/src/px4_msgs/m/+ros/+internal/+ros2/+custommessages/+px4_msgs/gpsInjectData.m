function [data, info] = gpsInjectData
%GpsInjectData gives an empty data for px4_msgs/GpsInjectData
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GpsInjectData';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.len, info.len] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.flags, info.flags] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',300,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 8, [NaN]);
[data.MAX_INSTANCES, info.MAX_INSTANCES] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
info.MessageType = 'px4_msgs/GpsInjectData';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'device_id';
info.MatPath{3} = 'len';
info.MatPath{4} = 'flags';
info.MatPath{5} = 'data';
info.MatPath{6} = 'ORB_QUEUE_LENGTH';
info.MatPath{7} = 'MAX_INSTANCES';
