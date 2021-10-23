// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stddef.h>

int square_sum(const int *values, size_t count){
  int sum = 0;
  
  for (size_t i = 0; i < count; i++,*values++)
    sum += (*values)*(*values);

  return sum;
}
