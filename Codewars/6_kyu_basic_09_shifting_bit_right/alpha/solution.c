// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

int previous_power_of_2 (int n)
{
    if (n == 0) return -1;

    int bin = 0;
    int num = n;

    if (num < 0) num = -num;

    while (num != 1) {
        num >>= 1;
        bin++;
    }

    num <<= bin;
    if (n > 0) return num == n ? num >> 1 : num;
    else return (num << 1)*-1;
}
