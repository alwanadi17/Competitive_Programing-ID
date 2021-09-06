// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

#include <string.h>
#include <stdlib.h>

char *vertMirror(char *str)
{
  const char *p = str, *last = p, *tmp;
  char *orig, *ret = malloc(strlen(str) + 1);
  orig = ret;

  while ((last = strchr(p, '\n'))) {
    tmp = last;
    while (last > p)
      *ret++ = *--last;
    p = tmp;
    while (*p == '\n')
      *ret++ = *p++;
  }

  last = p + strlen(p);
  while (last > p)
    *ret++ = *--last;
  *ret = '\0';
  return orig;
}

char *horMirror(char *str)
{
  size_t len = strlen(str);
  const char *p = str, *last, *tmp;
  char *ret = malloc(len + 1), *orig = ret;

  memset(ret, 0xff, len + 1);

  ret[len] = '\0';
  ret += len - 1;

  while ((last = strchr(p, '\n'))) {
    tmp = last + 1;
    while (last > p)
      *ret-- = *--last;
    *ret-- = '\n';
    p = tmp;
  }

  last = p + strlen(p) - 1;
  while (last >= p)
    *ret-- = *last--;

  return orig;
}


typedef char *(*generic_func_t) (char*);
char *oper(generic_func_t f, char *s)
{
  return f(s);
}
