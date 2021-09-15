// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <vector>
#include <algorithm>

class Same {
public:
	static bool comp(std::vector<int>&a, std::vector<int>&b) {
		size_t i;

		if (a.size() != b.size())
			return false;

		for (int &n: a)
			n = n * n;

		std::sort(a.begin(), a.end());
		std::sort(b.begin(), b.end());

		i = 0;
		for (int an: a) {
			if (an != b[i++])
				return false;
		}
		return true;
	}
};
