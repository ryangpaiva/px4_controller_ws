function [data, info] = irlockReport
%IrlockReport gives an empty data for px4_msgs/IrlockReport
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/IrlockReport';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.signature, info.signature] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.pos_x, info.pos_x] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pos_y, info.pos_y] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.size_x, info.size_x] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.size_y, info.size_y] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/IrlockReport';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'signature';
info.MatPath{3} = 'pos_x';
info.MatPath{4} = 'pos_y';
info.MatPath{5} = 'size_x';
info.MatPath{6} = 'size_y';
