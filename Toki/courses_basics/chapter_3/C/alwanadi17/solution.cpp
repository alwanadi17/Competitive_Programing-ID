// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2023  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <cstdio>
#include <cstring>

int main() {

	char ret[101];
	memset(ret, 0, sizeof(ret));

	scanf("%100[^\n]", ret);

	printf("%s", ret);

	return 0;
}