 // SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdlib.h>

size_t mem = 0;

void *mem_alloc(size_t size) {
    void *temp = malloc(size);
    if(!temp) return NULL;
    else mem += size;
    return temp;
}

unsigned long long report_total_allocated(void) {
  return mem;
}