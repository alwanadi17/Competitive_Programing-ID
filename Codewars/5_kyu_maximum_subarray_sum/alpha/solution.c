// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stddef.h>

int maxSequence(const int* array, size_t n) {
    int ret = 0, sum = 0;

    for (size_t i = 0; i < n; i++) {
        sum += array[i];
        if (ret < sum) ret = sum;
        if (sum < 0) sum = 0;
    }

    return ret;
}
