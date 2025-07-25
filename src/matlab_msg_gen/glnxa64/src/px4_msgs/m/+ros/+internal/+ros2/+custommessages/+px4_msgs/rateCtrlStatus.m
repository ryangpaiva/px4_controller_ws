function [data, info] = rateCtrlStatus
%RateCtrlStatus gives an empty data for px4_msgs/RateCtrlStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RateCtrlStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.rollspeed_integ, info.rollspeed_integ] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pitchspeed_integ, info.pitchspeed_integ] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yawspeed_integ, info.yawspeed_integ] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.wheel_rate_integ, info.wheel_rate_integ] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RateCtrlStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'rollspeed_integ';
info.MatPath{3} = 'pitchspeed_integ';
info.MatPath{4} = 'yawspeed_integ';
info.MatPath{5} = 'wheel_rate_integ';
