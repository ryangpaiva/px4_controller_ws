function [data, info] = actuatorOutputs
%ActuatorOutputs gives an empty data for px4_msgs/ActuatorOutputs
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ActuatorOutputs';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.NUM_ACTUATOR_OUTPUTS, info.NUM_ACTUATOR_OUTPUTS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 16, [NaN]);
[data.NUM_ACTUATOR_OUTPUT_GROUPS, info.NUM_ACTUATOR_OUTPUT_GROUPS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
[data.noutputs, info.noutputs] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.output, info.output] = ros.internal.ros2.messages.ros2.default_type('single',16,0);
info.MessageType = 'px4_msgs/ActuatorOutputs';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'NUM_ACTUATOR_OUTPUTS';
info.MatPath{3} = 'NUM_ACTUATOR_OUTPUT_GROUPS';
info.MatPath{4} = 'noutputs';
info.MatPath{5} = 'output';
