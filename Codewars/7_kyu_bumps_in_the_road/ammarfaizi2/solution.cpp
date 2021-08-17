// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

#include <string>

std::string bumps(std::string road)
{
	size_t bump_c = 0;
	const char *tmp = road.c_str();
	while (*tmp) {
		char c = *tmp++;
		if (c == 'n')
			bump_c++;
	}
	return bump_c <= 15 ? "Woohoo!" : "Car Dead";
}
