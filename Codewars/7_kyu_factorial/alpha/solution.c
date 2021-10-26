// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

unsigned __int128 factorial(unsigned n)
{
  unsigned __int128 ret = 1;

  for (unsigned i = 1; i <= n; i++)
    ret *= i;

  return ret;
}
