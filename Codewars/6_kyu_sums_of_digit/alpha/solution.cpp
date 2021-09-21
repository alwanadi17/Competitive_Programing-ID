// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 int digital_root(int n)
{
    if (n%9 == 0 && n > 0) return 9;
    return n%9;
}
