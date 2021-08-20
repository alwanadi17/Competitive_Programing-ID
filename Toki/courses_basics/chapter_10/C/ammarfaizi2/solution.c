// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <stdio.h>
#include <stdint.h>

static uint32_t rep_rev_uint32(uint32_t n)
{
	uint32_t tmp = n;
	uint32_t ret = 0;

	while (tmp > 0u) {
		ret = (ret * 10) + (tmp % 10);
		tmp = tmp / 10;
	}

	return ret;
}


int main(void)
{
	uint32_t a, b, c;

	if (scanf("%u %u", &a, &b) != 2) {
		puts("EINVAL");
		return 22;
	}

	a = rep_rev_uint32(a);
	b = rep_rev_uint32(b);
	c = rep_rev_uint32(a + b);
	printf("%u\n", c);
	return 0;
}
