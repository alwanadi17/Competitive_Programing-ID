#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

import re
def zero_plentiful(arr):
    a=[(1 if i.count('0')>=4 else 9) for i in re.findall("0+","".join([(str(i) if i*9==0 else str(8)) for i in arr]))]
    return 0 if 9 in  a else sum(a)