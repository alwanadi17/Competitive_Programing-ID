// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstdint>

int main() {

	uint16_t a,t;

	scanf("%hd %hd", &a, &t);
	printf("%.2lf", 0.5*a*t);

	return 0;
}