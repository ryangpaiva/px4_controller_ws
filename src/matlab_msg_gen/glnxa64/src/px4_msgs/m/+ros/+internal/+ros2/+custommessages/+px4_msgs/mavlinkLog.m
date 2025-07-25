function [data, info] = mavlinkLog
%MavlinkLog gives an empty data for px4_msgs/MavlinkLog
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/MavlinkLog';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.text, info.text] = ros.internal.ros2.messages.ros2.char('char',127,NaN,0);
[data.severity, info.severity] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 8, [NaN]);
info.MessageType = 'px4_msgs/MavlinkLog';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'text';
info.MatPath{3} = 'severity';
info.MatPath{4} = 'ORB_QUEUE_LENGTH';
