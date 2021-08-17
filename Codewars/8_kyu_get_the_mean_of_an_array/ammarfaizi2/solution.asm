; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

section .text
global get_average

; int get_average(const int *marks, size_t count);
get_average:
	xor	eax, eax
	xor	edx, edx
	test	esi, esi
	jz	.l_out
	mov	rcx, rsi
.l_loop:
	add	eax, [rdi + rsi * 4 - 4]
	dec	rsi
	jnz	.l_loop
	div	ecx
.l_out:
	ret
