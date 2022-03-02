 // SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string push(int n, std::string str)
{
    if (n == 1)
        return str + "H," + str + "T,";

    return push(n-1,str + "H") + push(n-1,str + "T");
}

std::string coin(int n) {
    std::string ret = push(n,"");
    ret.pop_back();
    return ret;
}