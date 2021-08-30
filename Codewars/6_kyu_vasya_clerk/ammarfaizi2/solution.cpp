// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <string>
#include <vector>

std::string tickets(const std::vector<int> &vi)
{
	unsigned m25 = 1, m50 = 0, m100 = 0;
	int r, j, i = 0;

	if (vi[0] != 25)
		goto no;

	for (int n : vi) {
		if (!i)
			 goto next;

		switch (n) {
		case 100: m100++; break;
		case 50: m50++; break;
		case 25: m25++; goto next;
		}

		r = n - 25;
		switch (r) {
		case 75:
			if (m50 && m25) {
				m50--; m25--;
				goto next;
			 }
			 if (m25 >= 3) {
				m25 -= 3;
				goto next;
			 }
			 goto no;

		case 25:
			if (m25) {
				m25--;
				goto next;
			}
			goto no;
		}
	next:
		i++;
	}
	return "YES";
no:
	return "NO";
}
