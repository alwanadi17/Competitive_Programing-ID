// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

 #include <cstdio>

int main(){

	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	a = a - c;
	b = b - d;

	if (a < 0) a *= -1;
	if (b < 0) b *= -1;

	printf("%d", a + b);

	return 0;
}