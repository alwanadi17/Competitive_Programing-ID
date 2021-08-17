# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
#

def smallest_product(a):
    it = 0
    for i in a:
        tmp = 1
        for j in i:
            tmp *= j
        if it == 0:
            smallest = tmp
        elif tmp < smallest:
            smallest = tmp
        it += 1
    return smallest
