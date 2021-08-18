// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

std::string bumps(std::string road){
  int nabrak_jeglongan = 0;
  for(auto sembarang:road){
    if (sembarang == 'n'){
      nabrak_jeglongan++;
    }
  }
    return nabrak_jeglongan>15?"Car Dead":"Woohoo!";
}