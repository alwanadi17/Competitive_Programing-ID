#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def high_and_low(numbers):
    list=[int(i) for i in numbers.split(" ")]
    list.sort()
    return f"{list[-1]} {list[0]}"