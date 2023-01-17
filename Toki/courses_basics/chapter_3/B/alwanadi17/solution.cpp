// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstdint>

int main() {
	uint8_t a, b;

	scanf("%hhd %hhd", &a, &b);

	printf("%d", a+b);

	return 0;
}