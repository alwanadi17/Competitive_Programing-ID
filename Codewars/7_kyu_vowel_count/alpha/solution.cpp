// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for (char a : inputStr) {
    if (a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o') num_vowels++;
  }
  return num_vowels;
}
