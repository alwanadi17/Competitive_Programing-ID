// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstdint>

int main() {

	uint8_t n;
	int a, b, num;

	scanf("%hhd", &n);
	scanf("%d", &a);
	b = a;

	for (uint8_t i = 1; i < n; i++) {
		scanf("%d", &num);
		if (num > a) a = num;
		if (num < b) b = num;
	}

	printf("%d %d", a, b);

	return 0;
}