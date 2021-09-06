/*
SPDX-License-Identifier: GPL-2.0-only
Copyright (C) 2021 uClaster <uclasterdev@gmail.com>
*/


int positive_sum(const int* values, size_t count) {
	int sum = 0;
	for (int x = 0; x < count; x++) {
		if (values[x] <= 0)
			continue
		sum += values[x]
	}
	return sum;
}