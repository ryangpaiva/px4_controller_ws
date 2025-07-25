function [data, info] = figureEightStatus
%FigureEightStatus gives an empty data for px4_msgs/FigureEightStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/FigureEightStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.major_radius, info.major_radius] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.minor_radius, info.minor_radius] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.orientation, info.orientation] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.frame, info.frame] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.x, info.x] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.y, info.y] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.z, info.z] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/FigureEightStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'major_radius';
info.MatPath{3} = 'minor_radius';
info.MatPath{4} = 'orientation';
info.MatPath{5} = 'frame';
info.MatPath{6} = 'x';
info.MatPath{7} = 'y';
info.MatPath{8} = 'z';
