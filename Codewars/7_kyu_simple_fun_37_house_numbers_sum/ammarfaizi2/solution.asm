; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
global house_numbers_sum

; unsigned house_numbers_sum(const unsigned *houses, size_t len);
house_numbers_sum:
	xor	eax, eax
	test	rsi, rsi
	jz	.l_out
	xor	edx, edx
.l_loop:
	mov	ecx, dword [rdi + rdx * 4]
	test	ecx, ecx
	jz	.l_out
	add	eax, ecx
	add	rdx, 1
	cmp	rdx, rsi
	jb	.l_loop
.l_out:
	ret
