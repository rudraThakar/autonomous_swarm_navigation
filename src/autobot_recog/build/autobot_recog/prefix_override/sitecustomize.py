import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rudra/bharatforge/abhiroop/src/autobot_recog/install/autobot_recog'
