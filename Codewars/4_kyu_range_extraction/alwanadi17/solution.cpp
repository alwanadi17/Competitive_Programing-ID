// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args) {
    std::string ret,tmp;
    int i,len;
    bool mid;
  
    mid = false;
    ret += std::to_string(args[0]);
    len = args.size();
    for (i = 1; i < len; i++) {
        if (args[i]-args[i-1] == 1 && args[i]-args[i+1] == -1
            && args[i] != args[len-1]) {
            mid = true; continue;
        } else {
            if (mid) {
                ret += '-';
                mid = false;
            } else ret += ',';

            ret += std::to_string(args[i]);
        }
    }
  
    return ret;
}