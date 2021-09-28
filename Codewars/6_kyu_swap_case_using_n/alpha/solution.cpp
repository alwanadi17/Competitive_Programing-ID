// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 #include <string>

std::string binary(int n)
{
  std::string ret = "",temp = "";
  int len = 0;
  
  while (n != 0) {
    temp += n%2+'0';
    n >>= 1;
  }
  
  len = temp.length();
  for (int i = len-1; i >= 0; i--)
    ret += temp[i];
  
  return ret;
}

std::string swap(std::string s, int n) {
  std::string bin = binary(n),ret = s;
  int len = s.length(),binlen = bin.length();
  
  for (int i = 0; i < len-binlen; i++)
    bin += bin[i];
  
  int j = 0;
  for (char &a : ret) {
    if (bin[j] == '1' && a >= 'A' && a <= 'Z')
      a = a-'A'+'a';
    else if (bin[j] == '1' && a >= 'a' && a <= 'z')
      a = a-'a'+'A';
    else if (!(a >= 'A' && a <= 'Z') && !(a >= 'a' && a <= 'z'))
      continue;
    j++;
  }
  
  return ret;
}
