// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

std::string get_middle(std::string input) 
{
  std::string ret;
  uint8_t length = input.length();
  
  if((length%2) == 0){
    ret += input[(length/2)-1];
    ret += input[length/2];
  } else ret += input[length/2];
  
  return ret;
}
