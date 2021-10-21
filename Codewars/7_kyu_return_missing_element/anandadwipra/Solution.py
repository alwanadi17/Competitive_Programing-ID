#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def get_missing_element(seq): 
    return sum([i if i not in seq else 0 for i in range(0,10) ])