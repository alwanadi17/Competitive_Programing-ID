#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def is_isogram(string):
    return sum(list((ord(char)) for char in set(string.lower()))) == sum(list((ord(char)) for char in string.lower()))
