// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>

int main(){

	unsigned int sum = 0;
	short n;

	while(scanf("%hd", &n) != EOF)
		sum += n;
	printf("%d", sum);

	return 0;
}