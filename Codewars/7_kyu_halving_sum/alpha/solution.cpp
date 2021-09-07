// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 unsigned halving_sum(unsigned n) {
  uint32_t ret = n;
  while(n >>= 1 != 0) ret += n;
  return ret;
}
