// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

package kata

func DigitalRoot(n int) int {
  if n < 10 {
    return n
  }
  
  buffer := 0
  for n != 0{
    buffer += n % 10
        n /= 10
    }
    return DigitalRoot(buffer)
}