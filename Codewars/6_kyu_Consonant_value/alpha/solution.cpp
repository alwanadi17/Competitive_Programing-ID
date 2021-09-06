// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <string>

int solve(const std::string &s)
{
  int length = s.length();
  int sum = 0, num = 0;
  uint8_t base = 96; //to convert to decimal
  
  for (int i = 0; i < length; i++) {
    while (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
      i++;      //skip vowel
      sum = 0;  //and set back sum to 0
    }
    sum += s[i]-base; //sum chars between vowel
    if (sum > num) num = sum;  //input to num, and replace when found the highest
    if (i == length) return num; //break if the vowel in last char
  }
  
  return num;
}
