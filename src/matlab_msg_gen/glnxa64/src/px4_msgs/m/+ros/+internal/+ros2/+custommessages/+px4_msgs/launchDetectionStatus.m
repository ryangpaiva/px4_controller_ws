function [data, info] = launchDetectionStatus
%LaunchDetectionStatus gives an empty data for px4_msgs/LaunchDetectionStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/LaunchDetectionStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.STATE_WAITING_FOR_LAUNCH, info.STATE_WAITING_FOR_LAUNCH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.STATE_LAUNCH_DETECTED_DISABLED_MOTOR, info.STATE_LAUNCH_DETECTED_DISABLED_MOTOR] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.STATE_FLYING, info.STATE_FLYING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.launch_detection_state, info.launch_detection_state] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/LaunchDetectionStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'STATE_WAITING_FOR_LAUNCH';
info.MatPath{3} = 'STATE_LAUNCH_DETECTED_DISABLED_MOTOR';
info.MatPath{4} = 'STATE_FLYING';
info.MatPath{5} = 'launch_detection_state';
