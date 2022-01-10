#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com>


def last(s):
    s = [i[::-1] for i in s.split(" ") ]
    s.sort(key=lambda elemen:elemen[0])
    return [i[::-1] for i in s]
