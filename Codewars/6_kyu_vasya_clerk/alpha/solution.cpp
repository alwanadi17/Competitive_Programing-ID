// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <string>
#include <vector>

std::string tickets(const std::vector<int>& money) {
  int a = 0, b = 0;
  if (money[0] != 25) return "NO";
  
  for (int m : money){
    if (m == 50 && a == 0) return "NO";
    if (m == 100 && (a == 0 || b == 0) && a < 3) return "NO";
    
    if (m == 25) a++;
    else if (m == 50 && a >= 1) {
        a--;
        b++;
    } else if (m == 100 && a >= 1 && b >= 1) {
        a--;
        b--;
    } else if (m == 100 && b == 0 && a >= 3) a -= 3;
  }
  
  return "YES";
}
