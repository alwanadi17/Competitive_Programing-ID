// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>
using namespace std;

string rot13(string msg)
{
  string ret = "";
  for (char a : msg) {
    if (a >= 'a' && a <= 'z' && a+13 > 'z') ret += a-13;
    else if (a >= 'A' && a <= 'Z' && a+13 > 'Z') ret += a-13;
    else if (a < 'A') ret += a;
    else ret += a+13;
  }
  return ret;
}
