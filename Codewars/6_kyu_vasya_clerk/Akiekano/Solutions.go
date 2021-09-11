// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */
package kata

func Tickets(peopleInLine []int) string {
  bills := map[int]int{25: 0, 50: 0, 100: 0}
  for _, bill := range peopleInLine {
    bills[bill]++
    change := bill - 25
    for _, b := range [2]int{50, 25} {
      if bills[b] > 0 {
        for bills[b] > 0 && b <= change {
          change -= b
          bills[b]--
        }
      }
    }
    if change != 0 {
      return "NO"
    }
  }
  return "YES"
}
