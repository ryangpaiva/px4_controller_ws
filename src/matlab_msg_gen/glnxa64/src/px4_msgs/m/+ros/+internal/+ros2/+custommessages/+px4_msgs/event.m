function [data, info] = event
%Event gives an empty data for px4_msgs/Event
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Event';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.event_sequence, info.event_sequence] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.arguments, info.arguments] = ros.internal.ros2.messages.ros2.default_type('uint8',25,0);
[data.log_levels, info.log_levels] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 16, [NaN]);
info.MessageType = 'px4_msgs/Event';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'id';
info.MatPath{3} = 'event_sequence';
info.MatPath{4} = 'arguments';
info.MatPath{5} = 'log_levels';
info.MatPath{6} = 'ORB_QUEUE_LENGTH';
