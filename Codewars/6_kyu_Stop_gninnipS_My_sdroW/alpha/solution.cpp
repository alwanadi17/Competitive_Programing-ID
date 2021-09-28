// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
std::string spinWords(const std::string &str)
{
  std::string ret = "", temp = "";
  int len = 0;
  
  for (char a : str) {
    len = temp.length();
    if (len >= 5 && a == ' ') {
      reverse(temp.begin(),temp.end());
      ret += temp;
      ret += ' ';
      temp = "";
      continue;
    } else if (len < 5 && a == ' ') {
      ret += temp;
      ret += ' ';
      temp = "";
      continue;
    }
    temp += a;
  }
  
  len = temp.length();
  if (len >= 5) {
      reverse(temp.begin(),temp.end());
      ret += temp;
  } else if (len < 5)
      ret += temp;
  
  return ret;
}
