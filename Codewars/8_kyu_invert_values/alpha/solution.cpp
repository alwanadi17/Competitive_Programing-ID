// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  for (int& num : values)
    num *= -1;
  return values;
}
