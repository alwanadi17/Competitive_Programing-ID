// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */
package kata

func Factorial(n int) int {
  if n<=1 {
    return 1
  }
  return Factorial(n-1) * n
}