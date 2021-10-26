// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Muhammad Willdhan Arya Putra <aryaputrascorpio@gmail.com>
 */
bool XO(const std::string& str)
{
  // your code here
  int num[2] = {0, 0}, len = str.length();
  
  for (int i = 0; i < len; i++)
  {
    if (str[i] == 'o' || str[i] == 'O')
      num[0]++;
    else if (str[i] == 'x' || str[i] == 'X')
      num[1]++;
  }
  return num[0] == num[1];
}
