// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */
#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  *negativesSum = 0;
  *positivesCount = 0;
  for(size_t let = 0; let < count; let++){
    if(values [let] < 0){
      *negativesSum += values[let];
    } else if(values [let] > 0){
      *positivesCount += 1;
    }
  }
}  