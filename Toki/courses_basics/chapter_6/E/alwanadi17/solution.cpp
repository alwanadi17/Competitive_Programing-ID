// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>

int main(){

	unsigned int num;

	scanf("%d", &num);

	while(num%2 != 1)
		num >>= 1;

	if (num == 1) printf("ya");
	else printf("bukan");

	return 0;
}