// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 std::string even_or_odd(int number) 
{
  int modulus = number%2;
  if(modulus == 0) return "Even";
  else return "Odd";
}
