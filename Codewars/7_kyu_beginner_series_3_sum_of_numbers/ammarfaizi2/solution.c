// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
int get_sum(int a, int b)
{
	int i, min, max, ret;
	if (a > b) {
		min = b;
		max = a;
	} else {
		max = b;
		min = a;
	}
	if (min == max)
		return min;
	ret = 0;
	for (i = min; i <= max; i++)
		ret += i;
	return ret;
}
