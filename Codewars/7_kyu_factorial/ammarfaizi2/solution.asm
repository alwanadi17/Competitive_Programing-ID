; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

global factorial
section .text

; unsigned __int128 factorial(unsigned num);
factorial:
	cmp	edi, 1
	jbe	.f_out
	mov	eax, edi
	xor	ecx, ecx
	add	edi, -1
	cmp	edi, 2
	jb	.f_outc
.f_loop:
	mov	edx, edi
	imul	rcx, rdx
	mul	rdx
	add	rcx, rdx
	add	edi, -1
	cmp	edi, 2
	jae	.f_loop
.f_outc:
	mov	rdx, rcx
	ret
.f_out:
	mov	eax, 1
	cdq
	ret
