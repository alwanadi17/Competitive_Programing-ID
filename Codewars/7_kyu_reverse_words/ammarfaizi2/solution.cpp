// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

#include <string>
#include <stdio.h>
#include <cstddef>
#include <cstring>

std::string reverse_words(std::string str)
{
	const char *p = str.c_str(), *last = p, *tmp;
	std::string ret = "";
	ret.reserve(str.length());

	while ((last = strchr(p, ' '))) {
		tmp = last;
		while (last > p)
			ret += *--last;
		p = tmp;
		while (*p == ' ')
			ret += *p++;
	}

	last = p + strlen(p);
	while (last > p)
		ret += *--last;

	return ret;
}
