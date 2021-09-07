# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2021  Phanatagama <phanatagama@gmail.com>
#

def smallest(arrays: list):
    strList = map(str, arrays[0])
    formula = '*'.join(strList)
    prod = eval(formula)
    if len(arrays) == 1 or prod < smallest(arrays[1:]):
        return prod
    return smallest([1:])
    