// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <string>

std::string add_format(int i, int val, uint8_t &sign) {
    std::string ret;

    switch(i) {
        case 0 : ret += std::to_string(val) + " year"; break;
        case 1 : ret += std::to_string(val) + " day"; break;
        case 2 : ret += std::to_string(val) + " hour"; break;
        case 3 : ret += std::to_string(val) + " minute"; break;
        case 4 : ret += std::to_string(val) + " second"; break;
    }
    if (val > 1) ret += 's';
    if (sign > 2) ret += ", ";
    else if (sign == 2) ret += " and ";
    sign--;

    return ret;
}

std::string format_duration(int seconds) {
    if (!seconds) return "now";

    std::string ret;
    int times[5];
    uint8_t sign = 0;

    times[0] = seconds/31536000;
    times[1] = (seconds/86400)%365;
    times[2] = (seconds/3600)%24;
    times[3] = (seconds/60)%60;
    times[4] = seconds%60;

    for (int n : times) if (n) sign++;
    for (int i = 0; i < 5; i++) {
        if (times[i]) {
            ret += add_format(i,times[i],sign);
        }
    }

    return ret;
}
