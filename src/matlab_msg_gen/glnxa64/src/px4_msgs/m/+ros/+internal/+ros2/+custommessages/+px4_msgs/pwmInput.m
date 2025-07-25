function [data, info] = pwmInput
%PwmInput gives an empty data for px4_msgs/PwmInput
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/PwmInput';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.error_count, info.error_count] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.pulse_width, info.pulse_width] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.period, info.period] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/PwmInput';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'error_count';
info.MatPath{3} = 'pulse_width';
info.MatPath{4} = 'period';
