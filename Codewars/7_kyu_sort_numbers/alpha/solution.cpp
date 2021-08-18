// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <vector>

std::vector<int> solution(std::vector<int> nums) {
  int i, j, temp;
  i = j = temp = 0;
  int length = nums.size();
  
  for(i = 0; i < length; i++){
    for(j = i; j < length; j++){
      if(nums[i] > nums[j]){
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
  
  return nums;
}
