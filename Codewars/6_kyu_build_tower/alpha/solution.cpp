// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <iostream>
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> ret;
        std::string temp;

        for (int i = 0; i < nFloors; i++) {
            for (int j = 0; j < nFloors-i-1; j++) temp += ' ';
            for (int j = 0; j < (i+1)*2-1; j++) temp += '*';
            for (int j = 0; j < nFloors-i-1; j++) temp += ' ';
            ret.push_back(temp);
            temp.clear();
        }

        return ret;
    }
};
