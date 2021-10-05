// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string hex (int &byte)
{
  std::string ret = "",temp = "";
  int mod = 0, len = 0;
  
  if (byte <= 0) return "00";
  else if (byte >= 255) return "FF";
  
  while (byte != 0) {
    mod = byte%16;
    
    if (mod == 10) temp += 'A';
    else if (mod == 11) temp += 'B';
    else if (mod == 12) temp += 'C';
    else if (mod == 13) temp += 'D';
    else if (mod == 14) temp += 'E';
    else if (mod == 15) temp += 'F';
    else temp += mod+'0';
    
    byte /= 16;
  }
  
  len = temp.length();
  if (len == 1) {
    ret += '0';
    ret += temp;
  } else if (len == 2) {
    for (int i = 1; i >= 0; i--) 
      ret += temp[i];
  }
  
  return ret;
}

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b)
  {
    std::string ret = "";
    ret += hex(r);
    ret += hex(g);
    ret += hex(b);
    return ret;
  }
};
