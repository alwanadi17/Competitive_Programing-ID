// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include<string>

std::string numberFormat(long long n){
  std::string temp = std::to_string(n),ret = "";
  int len = temp.length();
  
  reverse(temp.begin(),temp.end());
  for (int i = 0; i < len; i++) {
    if (i%3 == 0 && i != 0 && temp[i] != '-') 
      ret += ',';
    ret += temp[i];
  }
  reverse(ret.begin(),ret.end());
  
  return ret;
}
