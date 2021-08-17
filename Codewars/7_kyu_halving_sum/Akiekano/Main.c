// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

unsigned halving_sum(unsigned n) {
  unsigned a = n;
  while(a > 1){
    a = a/2;
    n = n+a;
  }
  return n;
}