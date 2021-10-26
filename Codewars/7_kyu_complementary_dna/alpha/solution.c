// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
  size_t len;
  char *p,*ret;

  len = strlen(dna);
  ret = malloc(len+1);
  if(!ret)
    return NULL;

  p = ret;
  while (*dna != '\0') {
    if (*dna == 'A') *p = 'T';
    else if (*dna == 'T') *p = 'A';
    else if (*dna == 'G') *p = 'C';
    else if (*dna == 'C') *p = 'G';
    dna++;
    p++;
  }
  *p = '\0';

  return ret;
}
