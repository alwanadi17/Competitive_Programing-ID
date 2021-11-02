// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <math.h>

class VolTank
{
public:
    static int tankVol(int h, int d, int vt)
    {
      double deg = 0.0, r = 0.0, t = 0.0, dm = d, ret = 0.0;

      r = dm/2;
      if (h > r) t = r+h-d;
      else if (h == r) return vt/2;
      else if (h < r) t = r-h;

      deg = acos(t/r)*(180/M_PI);
      ret = (((((2*deg)/360)*(M_PI*r*r))-(2*(0.5*(sin(deg*M_PI/180))*r*t)))/(M_PI*r*r))*vt;

      return h > r ? vt-ret : ret;
    }
};
