// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>

int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	printf("masing-masing %d\nbersisa %d", a/b, a%b);

	return 0;
}