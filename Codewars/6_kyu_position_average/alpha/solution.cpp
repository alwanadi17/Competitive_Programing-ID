// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>
#include <vector>
#include <cmath>

double posAverage(const std::string &s)
{
  std::vector<std::string> str;
  std::string temp = "";
  int len = 0,i = 0,k = 0;
  double ret = 0,sum = 0,op = 0;
  
  for (char a : s) {
    if (a == ',')
      continue;
    if (a == ' ') {
      str.push_back(temp);
      temp = "";
      continue;
    }
    temp += a;
  }
  str.push_back(temp);
  
  len = str.size();
  
  for (i = 0; i < len-1; i++) {
    for (int j = i+1; j < len; j++) {
      std::string temp = str[j];
      for (char a : str[i]) {
        if (a == temp[k])
          sum++;
        k++;
        op++;
      }
      k = 0;
    }
  }
  
  ret = sum*100/op;
  
  return ret;
}
