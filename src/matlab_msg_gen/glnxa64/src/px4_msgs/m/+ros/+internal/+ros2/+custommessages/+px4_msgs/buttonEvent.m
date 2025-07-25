function [data, info] = buttonEvent
%ButtonEvent gives an empty data for px4_msgs/ButtonEvent
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ButtonEvent';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.triggered, info.triggered] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
info.MessageType = 'px4_msgs/ButtonEvent';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'triggered';
info.MatPath{3} = 'ORB_QUEUE_LENGTH';
