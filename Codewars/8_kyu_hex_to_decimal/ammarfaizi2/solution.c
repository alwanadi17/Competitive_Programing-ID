// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

#include <string.h>

int hex_to_dec(const char *s)
{
	const char *orig = s;
	int ret = 0, mul;
	unsigned i = 0;
	static const char hex_tbl[] = {
		['0'] = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		['a'] = 10, 11, 12, 13, 14, 15
	};

	s += strlen(s) - 1;
	while (s != (orig - 1)) {
		mul = (i == 0) ? 1 : 16u << (4u * (i - 1));
		ret += hex_tbl[(size_t)*s] * mul;
		s--; i++;
	}
	return ret;
}
