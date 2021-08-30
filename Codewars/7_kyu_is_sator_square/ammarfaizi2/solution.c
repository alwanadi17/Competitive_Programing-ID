// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <stdbool.h>
#include <stddef.h>

bool is_sator_square(size_t n, const char arr[n][n]) {
	char c;
	size_t i1, j1, i2, j2, i3, j3, k, l;
	j1 = 0;
	i2 = n - 1;
	j3 = n - 1;
	k = 0;
	while (k < n) {
		i1 = 0;
		j2 = n - 1;
		i3 = n - 1;
		l = 0;
		while (l < n) {
			c = arr[k][l];
			if (c != arr[i1][j1]) return false;
			if (c != arr[i2][j2]) return false;
			if (c != arr[i3][j3]) return false;
			i1++;
			j2--;
			i3--;
			l++;
		}
		j1++;
		i2--;
		j3--;
		k++;
	}
	return true;
}
