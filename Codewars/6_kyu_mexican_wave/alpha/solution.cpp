// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cctype>

std::vector<std::string> wave(std::string y){
    std::vector<std::string> ret;
    std::string temp = y;

    for (char &c : temp) {
        temp = y;
        if (isalpha(c)) {
            c = toupper(c);
            ret.push_back(temp);
        }
    }

    return ret;
}
