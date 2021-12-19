// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */


#include <string>
#include <algorithm>

std::string add(const std::string& a, const std::string& b) {
    std::string ret, str1 = a, str2 = b;
    size_t len1, len2;
    uint8_t tens = 0, sum = 0;

    if (a.length() > b.length()) std::swap(str1,str2);

    len1 = str1.length();
    len2 = str2.length();

    std::reverse(str1.begin(), str1.end());
    std::reverse(str2.begin(), str2.end());

    for (size_t i = 0; i < len1; i++) {
        sum = (str1[i]-'0')+(str2[i]-'0')+tens;
        ret.push_back(sum%10+'0');
        tens = sum/10;
    }

    for (size_t i = len1; i < len2; i++) {
        sum = (str2[i]-'0')+tens;
        ret.push_back(sum%10+'0');
        tens = sum/10;
    }

    if(tens) ret.push_back(tens+'0');

    reverse(ret.begin(), ret.end());

    return ret;
}
