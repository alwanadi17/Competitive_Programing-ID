// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string to_alternating_case(const std::string& strng)
{
  int length = strng.length();
  std::string str = strng;
  
  for(int i = 0; i < length; i++){
    if(str[i] >= 'a' && str[i] <= 'z') str[i] = (str[i]-'a')+'A';
    else if(str[i] >= 'A' && str[i] <= 'Z') str[i] = (str[i]-'A')+'a';
  }
  
  return str;
}
