function [data, info] = velocityLimits
%VelocityLimits gives an empty data for px4_msgs/VelocityLimits
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VelocityLimits';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.horizontal_velocity, info.horizontal_velocity] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.vertical_velocity, info.vertical_velocity] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw_rate, info.yaw_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/VelocityLimits';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'horizontal_velocity';
info.MatPath{3} = 'vertical_velocity';
info.MatPath{4} = 'yaw_rate';
