import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ryangpaiva/px4_minimal_ws/install/px4_offboard'
