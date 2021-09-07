// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

int solution(int n) 
{
  int ret = 0;
  while(n-- >= 3){
    if(n % 3 == 0 || n % 5 == 0) ret += n;
  }
  return ret;
}
