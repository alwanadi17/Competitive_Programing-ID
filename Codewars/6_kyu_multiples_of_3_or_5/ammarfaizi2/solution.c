// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
int solution(int n)
{
	int ret = 0;
	while (n-- > 0) {
		if (n % 3 == 0 || n % 5 == 0)
			ret += n;
	}
	return ret;
}
