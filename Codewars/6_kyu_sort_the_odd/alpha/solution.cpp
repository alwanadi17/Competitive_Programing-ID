// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        for (int &i : array) {
            if (i%2) {
                for (int &j : array) {
                    if (j%2 && i < j) std::swap(i,j);
                }
            }
        }
        return array;
    }
};
