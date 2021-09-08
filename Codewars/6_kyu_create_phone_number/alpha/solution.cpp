// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <string>

std::string createPhoneNumber(const int arr [10]){
  int i;
  std::string num = "(";
  for(i = 0; i < 3; i++){
    num += (arr[i] + 48);
  }
  num = num + ") ";
  for(i = 3; i < 6; i++){
    num += (arr[i] + 48);
  }
  num = num + "-";
  for(i = 6; i < 10; i++){
    num += (arr[i] + 48);
  }
  return num;
}
