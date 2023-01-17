// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

 #include <cstdio>

int main() {

	int a;

	scanf("%d", &a);

	if (a < 10) printf("satuan");
	else if (a < 100) printf("puluhan");
	else if (a < 1000) printf("ratusan");
	else if (a < 10000) printf ("ribuan");
	else printf("puluhribuan");

	return 0;
}