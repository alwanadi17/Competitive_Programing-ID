// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

 #include <cstdio>

int main() {

	int a;

	scanf("%d", &a);

	if(a > 0) printf("positif");
	else if (a == 0) printf("nol");
	else printf("negatif");

	return 0;
}