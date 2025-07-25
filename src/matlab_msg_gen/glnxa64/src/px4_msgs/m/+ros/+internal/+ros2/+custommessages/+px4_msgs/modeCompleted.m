function [data, info] = modeCompleted
%ModeCompleted gives an empty data for px4_msgs/ModeCompleted
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ModeCompleted';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.RESULT_SUCCESS, info.RESULT_SUCCESS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.RESULT_FAILURE_OTHER, info.RESULT_FAILURE_OTHER] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 100, [NaN]);
[data.result, info.result] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.nav_state, info.nav_state] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/ModeCompleted';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'RESULT_SUCCESS';
info.MatPath{4} = 'RESULT_FAILURE_OTHER';
info.MatPath{5} = 'result';
info.MatPath{6} = 'nav_state';
