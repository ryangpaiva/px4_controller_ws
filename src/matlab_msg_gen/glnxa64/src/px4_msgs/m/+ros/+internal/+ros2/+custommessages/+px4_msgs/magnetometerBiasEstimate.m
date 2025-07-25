function [data, info] = magnetometerBiasEstimate
%MagnetometerBiasEstimate gives an empty data for px4_msgs/MagnetometerBiasEstimate
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/MagnetometerBiasEstimate';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.bias_x, info.bias_x] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.bias_y, info.bias_y] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.bias_z, info.bias_z] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.valid, info.valid] = ros.internal.ros2.messages.ros2.default_type('logical',4,0);
[data.stable, info.stable] = ros.internal.ros2.messages.ros2.default_type('logical',4,0);
info.MessageType = 'px4_msgs/MagnetometerBiasEstimate';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'bias_x';
info.MatPath{3} = 'bias_y';
info.MatPath{4} = 'bias_z';
info.MatPath{5} = 'valid';
info.MatPath{6} = 'stable';
