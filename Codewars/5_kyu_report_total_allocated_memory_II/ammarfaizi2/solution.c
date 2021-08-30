// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <stdlib.h>
#include <stdint.h>
static size_t n = 0;

#define ULL_SIZE sizeof(unsigned long long)

unsigned long long get_currently_allocated_size(void)
{
	return n;
}

void *mem_alloc(size_t size)
{
	void *p = malloc(size + ULL_SIZE);
	*(unsigned long long *)p = size;
	n += size;
	return (void *)((uintptr_t)p + ULL_SIZE);
}

void mem_free(void* p)
{
	void *frp;
	if (p) {
		frp = (void*)((uintptr_t)p - ULL_SIZE);
		n -= *(unsigned long long *)frp;
		free(frp);
	}
}
