function [data, info] = trajectoryBezier
%TrajectoryBezier gives an empty data for px4_msgs/TrajectoryBezier
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/TrajectoryBezier';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.position, info.position] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.delta, info.delta] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/TrajectoryBezier';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'position';
info.MatPath{3} = 'yaw';
info.MatPath{4} = 'delta';
