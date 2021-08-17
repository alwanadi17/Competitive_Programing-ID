// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

#include <iostream>
#include <string>
#include <unordered_map>

std::string removeDuplicateWords(const std::string& str)
{
	std::unordered_map<std::string, bool> p;
	std::string ret = "";
	const char *c = str.c_str();
	size_t start = 0, i, j = 0, len = str.length() + 1;

	for (i = 0; i < len; i++) {
		if (c[i] == ' ' || c[i] == '\0') {
			std::string tmp(&c[start], i - start);
			if (p.find(tmp) == p.end()) {
				ret += (j++ ? " " : "") + tmp;
				p[tmp] = true;
			}
			start = i + 1;
		}
	}
	return ret;
}
