// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

package kata

import (
  "fmt"
  "sort"
  "strconv"
  "strings"
)

func HighAndLow(in string) string {
  splt := strings.Split(in, " ")

  sort.SliceStable(splt, func(i, j int) bool {
    i, _ = strconv.Atoi(splt[i])
    j, _ = strconv.Atoi(splt[j])

    return i < j
  })

  return fmt.Sprintf("%s %s", splt[len(splt)-1], splt[0])