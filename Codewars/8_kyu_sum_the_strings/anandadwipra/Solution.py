i#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def sum_str(a, b):
    return str(sum([int(i) if i  else 0 for i in [a,b]]))
