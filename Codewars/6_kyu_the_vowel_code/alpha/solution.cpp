// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>

std::string encode(const std::string &str) {
  
  std::string ret = str;
  
  for (char &a : ret) {
    if (a == 'a') a = '1';
    else if (a == 'e') a = '2';
    else if (a == 'i') a = '3';
    else if (a == 'o') a = '4';
    else if (a == 'u') a = '5';
  }
  
  return ret;
}

std::string decode(const std::string &str) {
  
  std::string ret = str;
  
  for (char &a : ret) {
    if (a == '1') a = 'a';
    else if (a == '2') a = 'e';
    else if (a == '3') a = 'i';
    else if (a == '4') a = 'o';
    else if (a == '5') a = 'u';
  }
  
  return ret;
}
