#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com>

def save(sizes, hd): 
    [sizes.pop(-1) if sum(sizes) > hd  else 1 for i in range(0,len(sizes))]
    print(sizes)
    return len(sizes)
