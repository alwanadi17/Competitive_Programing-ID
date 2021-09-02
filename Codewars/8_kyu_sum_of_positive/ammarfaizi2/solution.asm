; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
global positive_sum

; int positive_sum(const int *values, size_t count);
positive_sum:
	xor	eax, eax
	test	rsi, rsi
	jz	.l_out
.l_loop:
	mov	edx, [rdi]
	test	edx, edx
	js	.l_chk
.l_not_negative:
	add	eax, edx
.l_chk:
	add	rdi, 4
	sub	rsi, 1
	jnz	.l_loop
.l_out:
	ret
