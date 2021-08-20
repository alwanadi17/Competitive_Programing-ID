// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */


package kata

func Solution(str string) []string {
	result := []string{}

	for len(str) != 0 {
		if len(str) > 1 {
			result = append(result, str[0:2])
			str = str[2:]
		} else if len(str) == 1 {
			result = append(result, str[0:1]+"_")
			str = str[1:]
		}
	}

	return result
}