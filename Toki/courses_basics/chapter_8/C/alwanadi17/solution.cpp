// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstdint>

int main() {

	uint8_t n;

	scanf("%hhd", &n);

	for(uint8_t i = 1; i <= n; i++) {
		if (i%10 == 0) continue;
		if (i == 42) {
			printf("ERROR\n");
			break;
		}

		printf("%d\n", i);
	}

	return 0;
}