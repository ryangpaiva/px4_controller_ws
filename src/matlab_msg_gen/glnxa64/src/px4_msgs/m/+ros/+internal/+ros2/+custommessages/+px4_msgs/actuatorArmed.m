function [data, info] = actuatorArmed
%ActuatorArmed gives an empty data for px4_msgs/ActuatorArmed
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ActuatorArmed';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.armed, info.armed] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.prearmed, info.prearmed] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.ready_to_arm, info.ready_to_arm] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.lockdown, info.lockdown] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.manual_lockdown, info.manual_lockdown] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.force_failsafe, info.force_failsafe] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.in_esc_calibration_mode, info.in_esc_calibration_mode] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'px4_msgs/ActuatorArmed';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'armed';
info.MatPath{3} = 'prearmed';
info.MatPath{4} = 'ready_to_arm';
info.MatPath{5} = 'lockdown';
info.MatPath{6} = 'manual_lockdown';
info.MatPath{7} = 'force_failsafe';
info.MatPath{8} = 'in_esc_calibration_mode';
