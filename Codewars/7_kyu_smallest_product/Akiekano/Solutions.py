#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com> 
def smallest_product(a):
    array = []
    for x in a:
        dec = 1
        for y in x:
            dec = dec*y
        array.append(dec)
    return min(array)