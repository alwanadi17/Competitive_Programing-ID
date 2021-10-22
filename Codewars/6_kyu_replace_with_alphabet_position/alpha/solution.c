// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text)
{
  char *ret, *p;
  size_t len, i;

  len = strlen(text);
  ret = malloc(len * 4 + 1);
  if (!ret)
    return NULL;

  p = ret;
  for (i = 0; i < len; i++) {
    char c = text[i];
    if (isalpha(c))
      p += (size_t)sprintf(p, "%d ", c & 31);
  }

  if (p[-1] == ' ')
    p[-1] = '\0';

  return ret;
}
