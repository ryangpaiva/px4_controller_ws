function [data, info] = trajectoryWaypoint
%TrajectoryWaypoint gives an empty data for px4_msgs/TrajectoryWaypoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/TrajectoryWaypoint';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.position, info.position] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.velocity, info.velocity] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.acceleration, info.acceleration] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw_speed, info.yaw_speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.point_valid, info.point_valid] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.type, info.type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/TrajectoryWaypoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'position';
info.MatPath{3} = 'velocity';
info.MatPath{4} = 'acceleration';
info.MatPath{5} = 'yaw';
info.MatPath{6} = 'yaw_speed';
info.MatPath{7} = 'point_valid';
info.MatPath{8} = 'type';
