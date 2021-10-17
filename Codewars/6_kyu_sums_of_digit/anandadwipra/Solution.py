#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def digital_root(n):
    return  sum([int(y) for y in list(str(n))]) if len(list(str(sum([int(y) for y in list(str(n))])))) == 1 else digital_root(sum([int(y) for y in list(str(n))]))
