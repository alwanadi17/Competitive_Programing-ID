// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

std::string bumps(std::string road){
  uint8_t length = road.length();
  uint8_t jeglugan = 0;
  
  for(uint8_t i = 0; i < length; i++){
    if(road[i] == 'n') jeglugan++;
  }
  if(jeglugan <= 15) return "Woohoo!";
  else return "Car Dead";
}
