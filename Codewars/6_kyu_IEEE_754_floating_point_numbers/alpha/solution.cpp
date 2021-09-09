// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 #include <cstring>

std::string fp32_to_ieee754(float num)
{
    uint32_t mm;
    std::string ret = "";

    memcpy(&mm, &num, sizeof(mm));
    
    for (int i = 31; i >= 0; i--){
        ret += (mm >> i) & 1 ? '1' : '0';
        if (i == 31 || i == 23) ret += " ";
    }
  
    return ret;
}


std::string fp64_to_ieee754(double num)
{
    uint64_t mm;
    std::string ret = "";

    memcpy(&mm, &num, sizeof(mm));
    
    for (int i = 63; i >= 0; i--){
        ret += (mm >> i) & 1 ? '1' : '0';
        if (i == 63 || i == 52) ret += " ";
    }
  
    return ret;
}
