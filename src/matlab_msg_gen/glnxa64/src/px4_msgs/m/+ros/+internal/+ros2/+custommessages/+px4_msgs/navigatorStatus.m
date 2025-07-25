function [data, info] = navigatorStatus
%NavigatorStatus gives an empty data for px4_msgs/NavigatorStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/NavigatorStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.nav_state, info.nav_state] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.failure, info.failure] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.FAILURE_NONE, info.FAILURE_NONE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.FAILURE_HAGL, info.FAILURE_HAGL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
info.MessageType = 'px4_msgs/NavigatorStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'nav_state';
info.MatPath{3} = 'failure';
info.MatPath{4} = 'FAILURE_NONE';
info.MatPath{5} = 'FAILURE_HAGL';
