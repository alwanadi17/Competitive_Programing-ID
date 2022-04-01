// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <string>

std::string multiply(std::string a,
                     std::string b)
{
    int len1 = a.size();
    int len2 = b.size();
    if (!len1 || !len2) return "0";

    std::vector<int> res(len1 + len2, 0);
    int i1 = 0,
        i2 = 0;
  
    for (int i = len1-1; i >= 0; i--) {
        uint8_t carry = 0;
        uint8_t n1 = a[i] - '0';
        i2 = 0;

        for (int j = len2-1; j >= 0; j--) {
            uint8_t n2 = b[j] - '0';
            uint8_t sum = n1*n2 + res[i1 + i2] + carry;
            carry = sum/10;
            res[i1 + i2] = sum%10;
          
            i2++;
        }
        if (carry) res[i1 + i2] += carry;
        i1++;
    }
    int i = res.size()-1;
    while (res[i] == 0 && i >= 0) i--;
  
    if (i == -1) return "0";
  
    std::string ret = "";
    while (i >= 0) ret += std::to_string(res[i--]);
    
    return ret;
}