// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#define _GNU_SOURCE
#include <string.h>

char *to_alternating_case(const char *_rdi)
{
	char *tmp = strdup(_rdi), *ret = tmp;
	__asm__ volatile(
		".Lloop:\n\t"
		"cmpb    $0, (%[tmp])\n\t"
		"jz      .Lout\n\t"

		// Handle lower case.
		"movb    (%[tmp]), %%al\n\t"
		"cmpb    $'a', %%al\n\t"
		"jb      .Lnot_alpha_low\n\t"
		"cmpb    $'z', %%al\n\t"
		"ja      .Lnot_alpha_low\n\t"
		"andb    $'_', %%al\n\t"
		"movb    %%al, (%[tmp])\n\t"
		"jmp     .Lsync_loop\n\t"

		// Handler upper case.
		".Lnot_alpha_low:\n\t"
		"cmpb    $'A', %%al\n\t"
		"jb      .Lsync_loop\n\t"
		"cmpb    $'Z', %%al\n\t"
		"ja      .Lsync_loop\n\t"
		"orb     $' ', %%al\n\t"
		"movb    %%al, (%[tmp])\n\t"

		".Lsync_loop:\n\t"
		"incq    %[tmp]\n\t"
		"jmp     .Lloop\n\t"
		".Lout:\n\t"
		: [tmp]"+r"(tmp)
		:
		: "rax", "cc", "memory"
	);
	return ret;
}
