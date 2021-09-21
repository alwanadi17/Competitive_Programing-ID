// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <malloc.h>
#include <string.h>
#include <stdint.h>

#define ATOI(A) ((A) - 48)
#define ITOA(I) ((I) + 48)
#define likely(EXP)   __builtin_expect(EXP, 1)
#define unlikely(EXP) __builtin_expect(EXP, 0)

char *add(const char *a, const char *b)
{
	while (*a == '0') a++;
	while (*b == '0') b++;

	if (unlikely(!*a && !*b)) return strdup("0");
	if (unlikely(!*a)) return strdup(b);
	if (unlikely(!*b)) return strdup(a);

	size_t  al   = strlen(a);
	size_t  bl   = strlen(b);
	uint8_t cr   = 0;
	size_t  lp   = ((al > bl) ? al : bl) + 2;
	size_t  pl   = lp;
	char    *ret = (char *)malloc(pl);

	ret[--pl] = '\0';

	while (likely(pl)) {
		uint8_t ac  = al ? ATOI(a[--al]) : 0;
		uint8_t bc  = bl ? ATOI(b[--bl]) : 0;
		uint8_t tmp = ac + bc + cr;

		if (tmp >= 10) {
			cr  = tmp / 10;
			tmp = tmp - (cr * 10);
		} else {
			cr = 0;
		}

		ret[--pl] = ITOA(tmp);
		if (unlikely(!(al | bl))) break;
	}

	if (cr) {
		ret[--pl] = ITOA(cr);
	}

	if (likely(&(ret[pl]) != ret)) {
		memmove(ret, &(ret[pl]), lp);
	}

	return ret;
}
