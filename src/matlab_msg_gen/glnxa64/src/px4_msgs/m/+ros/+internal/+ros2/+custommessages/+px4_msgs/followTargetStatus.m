function [data, info] = followTargetStatus
%FollowTargetStatus gives an empty data for px4_msgs/FollowTargetStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/FollowTargetStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.tracked_target_course, info.tracked_target_course] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.follow_angle, info.follow_angle] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.orbit_angle_setpoint, info.orbit_angle_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.angular_rate_setpoint, info.angular_rate_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.desired_position_raw, info.desired_position_raw] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.in_emergency_ascent, info.in_emergency_ascent] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.gimbal_pitch, info.gimbal_pitch] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/FollowTargetStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'tracked_target_course';
info.MatPath{3} = 'follow_angle';
info.MatPath{4} = 'orbit_angle_setpoint';
info.MatPath{5} = 'angular_rate_setpoint';
info.MatPath{6} = 'desired_position_raw';
info.MatPath{7} = 'in_emergency_ascent';
info.MatPath{8} = 'gimbal_pitch';
