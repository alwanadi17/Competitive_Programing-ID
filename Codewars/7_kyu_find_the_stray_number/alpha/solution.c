// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stddef.h>

int stray(size_t n, int arr[n]) {
  if (arr[0] != arr[1] && arr[1] == arr[2])
    return arr[0];

  for (size_t i = 1; i < n; i++)
    if (arr[i] != arr[i-1] && arr[i] != arr[i+1])
      return arr[i];
  return 0;
}
