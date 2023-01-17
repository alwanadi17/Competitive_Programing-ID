// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>

int main() {

	int a;

	scanf("%d", &a);

	if((a > 0) && !(a % 2)) printf("%d", a);

	return 0;
}