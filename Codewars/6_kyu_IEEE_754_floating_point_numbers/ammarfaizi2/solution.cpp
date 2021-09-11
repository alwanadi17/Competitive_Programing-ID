// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

#include <string.h>

std::string fp32_to_ieee754(float num)
{
    int i;
    uint32_t mm;
    std::string ret = "";

    memcpy(&mm, &num, sizeof(mm));
    ret += (mm & (1u << 31)) ? "1 " : "0 ";
    for (i = 30; i > (30 - 8); i--)
      ret += (mm & (1u << i)) ? "1" : "0";
    ret += " ";
    for (i = 22; i >= 0; i--)
      ret += (mm & (1u << i)) ? "1" : "0";
    return ret;
}

std::string fp64_to_ieee754(double num)
{
    int i;
    uint64_t mm;
    std::string ret = "";

    memcpy(&mm, &num, sizeof(mm));

    // Extract the sign bit.
    ret += (mm & (63ull << 63ull)) ? "1 " : "0 ";

    // Extract the exponent
    for (i = 62; i > (62 - 11); i--)
      ret += (mm & (1ull << i)) ? "1" : "0";

    // Add space
    ret += " ";

    // Extract the mantissa
    for (i = 51; i >= 0; i--)
      ret += (mm & (1ull << i)) ? "1" : "0";

    return ret;
}
