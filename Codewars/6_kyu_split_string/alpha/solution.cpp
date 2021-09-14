// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> ret;
    int i = 0;
    int len = s.length();
    std::string temp;
  
    for (char a : s){
      temp += a;
      i++;
      if (i%2 == 0){
        ret.push_back(temp);
        temp = "";
      }
    }
    if (len%2 == 1){
      temp += "_";
      ret.push_back(temp);
    }
         
    return ret;
}
