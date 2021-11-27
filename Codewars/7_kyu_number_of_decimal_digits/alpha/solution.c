// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdint.h>

int digits(uint64_t n) {
  int ret;
  for (ret = 1; n >= 10; ret++,n /= 10);
  return ret;
}
