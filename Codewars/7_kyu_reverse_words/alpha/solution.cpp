// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string reverse_words(std::string str)
{
  uint32_t length = str.length();
  uint32_t word = 0, firstletter = 0;
  std::string ret;
  
  for(uint32_t i = 0; i <= length; i++){
    word = i;
    if(str[i] == ' '){
      while(word > firstletter){
        ret += str[word-1];
        word--;
      }
      ret += ' ';
      firstletter = i+1;
    }
    else if(str[i] == '\0'){
      while(word > firstletter){
        ret += str[word-1];
        word--;
      }
    }
  }
  
  return ret;
}
