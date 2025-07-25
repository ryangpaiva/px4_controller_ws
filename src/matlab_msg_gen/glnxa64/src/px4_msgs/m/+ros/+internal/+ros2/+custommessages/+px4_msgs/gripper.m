function [data, info] = gripper
%Gripper gives an empty data for px4_msgs/Gripper
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Gripper';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.command, info.command] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.COMMAND_GRAB, info.COMMAND_GRAB] = ros.internal.ros2.messages.ros2.default_type('int8',1,0, 0, [NaN]);
[data.COMMAND_RELEASE, info.COMMAND_RELEASE] = ros.internal.ros2.messages.ros2.default_type('int8',1,0, 1, [NaN]);
info.MessageType = 'px4_msgs/Gripper';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'command';
info.MatPath{3} = 'COMMAND_GRAB';
info.MatPath{4} = 'COMMAND_RELEASE';
