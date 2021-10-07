// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <cstdint>
#include <string>

std::string binary (std::string str)
{
  std::string ret = "";
  int temp = stoi(str);
  
  for (int i = 7; i >= 0; i--) 
    ret += (temp >> i) & 1u ? '1' : '0';
  
  return ret;
}

uint32_t ip_to_int32(const std::string& ip) {
  uint32_t ret = 0;
  std::string bin = "",temp = "";
  
  for (char a : ip) {
    if (a == '.') {
      bin += binary(temp);
      temp = "";
      continue;
    }
    temp += a;
  }
  bin += binary(temp);
  
  for (char a : bin) {
    ret <<= 1;
    if (a == '1')
      ret += 1;
  }
  
  return ret;
} 
