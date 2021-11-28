// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stddef.h>

int adjacentElementsProduct(int inputArray[], size_t input_size) 
{
  int ret = inputArray[0]*inputArray[1];

  for (size_t i = 1; i < input_size-1; i++) {
    if (ret < inputArray[i]*inputArray[i+1])
      ret = inputArray[i]*inputArray[i+1];
  }

  return ret;
}
