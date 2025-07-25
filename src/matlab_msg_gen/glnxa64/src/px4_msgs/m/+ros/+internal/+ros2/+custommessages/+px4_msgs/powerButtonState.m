function [data, info] = powerButtonState
%PowerButtonState gives an empty data for px4_msgs/PowerButtonState
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/PowerButtonState';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.PWR_BUTTON_STATE_IDEL, info.PWR_BUTTON_STATE_IDEL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.PWR_BUTTON_STATE_DOWN, info.PWR_BUTTON_STATE_DOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.PWR_BUTTON_STATE_UP, info.PWR_BUTTON_STATE_UP] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.PWR_BUTTON_STATE_REQUEST_SHUTDOWN, info.PWR_BUTTON_STATE_REQUEST_SHUTDOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.event, info.event] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/PowerButtonState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'PWR_BUTTON_STATE_IDEL';
info.MatPath{3} = 'PWR_BUTTON_STATE_DOWN';
info.MatPath{4} = 'PWR_BUTTON_STATE_UP';
info.MatPath{5} = 'PWR_BUTTON_STATE_REQUEST_SHUTDOWN';
info.MatPath{6} = 'event';
