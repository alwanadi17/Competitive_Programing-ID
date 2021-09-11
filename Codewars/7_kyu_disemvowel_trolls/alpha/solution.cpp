// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

# include <string>

std::string disemvowel(const std::string& str) {
  int length = str.length();
  std::string temp = str;
  std::string noVowel;
  for(int i = 0; i < length; i++){
    if(!(temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'u' || temp[i] == 'e' || temp[i] == 'o' || temp[i] == 'O' || temp[i] == 'A' || temp[i] == 'I' || temp[i] == 'U' || temp[i] == 'E')){
     noVowel += temp[i];
    }
  }
  return noVowel;
}
