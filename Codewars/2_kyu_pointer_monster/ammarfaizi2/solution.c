// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <stdio.h>

char a[4][7] = {"Common", "Point", "Boost", "Better"};
const char (* b[4])[7] = {a+3, a+1, a, a+2};

const char (*(*c(void))[4])[7]
{
	return &b;
}

const char (**d(void)) [7]
{
	return c()[1] - 3;
}

char buf[256];

char *pointer_monster(const char (** (*f)(void))[7])
{
	int len;
	len  = sprintf(buf, "%s", *f()[0]);
	len += sprintf(buf + len, "%s ", *((**f)()-1)[0]+4);
	len += sprintf(buf + len, "%s", (*f())[0]-4);
	len += sprintf(buf + len, "%s", f()[1][2]+3);
	len += sprintf(buf + len, "%s", *((**f)()-1)[0]+4);
	return buf;
}
