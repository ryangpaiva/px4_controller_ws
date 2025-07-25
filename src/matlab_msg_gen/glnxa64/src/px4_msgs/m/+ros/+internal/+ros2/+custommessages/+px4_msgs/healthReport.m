function [data, info] = healthReport
%HealthReport gives an empty data for px4_msgs/HealthReport
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/HealthReport';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.can_arm_mode_flags, info.can_arm_mode_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.can_run_mode_flags, info.can_run_mode_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.health_is_present_flags, info.health_is_present_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.health_warning_flags, info.health_warning_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.health_error_flags, info.health_error_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.arming_check_warning_flags, info.arming_check_warning_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.arming_check_error_flags, info.arming_check_error_flags] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
info.MessageType = 'px4_msgs/HealthReport';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'can_arm_mode_flags';
info.MatPath{3} = 'can_run_mode_flags';
info.MatPath{4} = 'health_is_present_flags';
info.MatPath{5} = 'health_warning_flags';
info.MatPath{6} = 'health_error_flags';
info.MatPath{7} = 'arming_check_warning_flags';
info.MatPath{8} = 'arming_check_error_flags';
