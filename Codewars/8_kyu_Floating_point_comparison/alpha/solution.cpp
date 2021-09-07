// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  return (a-b) <= 0.001 && (a-b) >= -0.001 ? true : false;
}
