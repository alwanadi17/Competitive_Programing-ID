// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string uint32_to_ip(uint32_t ip)
{
    if (!ip) return "0.0.0.0";

    int i;
    std::string ret,tmp;
    uint8_t bits = 0;

    for (i = 31; i >= 0; i--)
        tmp += (ip >> i) & 1u ? '1' : '0';

    i = 0;
    for (char c : tmp) {
        i++;
        bits <<= 1;
        if (c - '0') bits++;
        if (i == 8) {
            ret += std::to_string(bits) + '.';
            bits = 0;
            i = 0;
        }
    }
    ret.pop_back();

    return ret;
}
