// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>

int main() {

	int n;

	scanf("%d", &n);

	for (int i = n; i > 0; i--)
		if (!(n%i)) printf("%d\n", i);

	return 0;
}