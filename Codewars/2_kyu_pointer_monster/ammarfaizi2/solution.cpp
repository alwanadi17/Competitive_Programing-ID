// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <cstdio>

char a[4][7] = {"Common", "Point", "Boost", "Better"};
__typeof__(*a) *b[] = {a+3, a+1, a, a+2};

__typeof__(b) *C(void)
{
	return &b;
}

__typeof__(*b) *d(void)
{
	return C()[1] - 3;
}

char buf[256];

char *pointer_monster(__typeof__(d) f)
{
	int len;
	len  = sprintf(buf, "%s", *f()[0]);
	len += sprintf(buf + len, "%s ", *((**f)()-1)[0]+4);
	len += sprintf(buf + len, "%s", (*f())[0]-4);
	len += sprintf(buf + len, "%s", f()[1][2]+3);
	len += sprintf(buf + len, "%s", *((**f)()-1)[0]+4);
	return buf;
}
