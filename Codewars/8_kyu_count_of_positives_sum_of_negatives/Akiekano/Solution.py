#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com> 
def count_positives_sum_negatives(arr):
    return [sum(x > 0 for x in arr), sum(y for y in arr if y < 0)] if arr else []