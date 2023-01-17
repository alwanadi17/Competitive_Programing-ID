// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstring>

int main(){

	char str[101];
	memset(str, 0, sizeof(str));

	while(scanf("%100s", str) != EOF)
		printf("%s\n", str);

	return 0;
}