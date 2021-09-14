// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <vector>
#include <algorithm>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      for (int &n : a) n *= n;
      
      std::sort(a.begin(),a.end());
      std::sort(b.begin(),b.end());
      
      if (a.size() != b.size()) return 0;
      
      int i = 0;
      for (int &n : a) {
        if (n != b[i]) return 0;
        i++;
      }
      
      return 1;
    }
};
