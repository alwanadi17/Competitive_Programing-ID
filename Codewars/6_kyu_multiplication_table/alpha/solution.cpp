// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n){
    vector<vector<int>> ret(n, vector<int>(n,0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        ret[i][j] = (i+1)*(j+1);
      }
    }

    return ret;
}
