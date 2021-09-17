; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

; The program should return the different number in rax.
; The pointer to the array will be passed in rdi, 
; the number of items in rsi.
[section .text]
global stray

; int stray(int *arr, int num);
stray:
	movsx	r9, esi
	mov	edx, [rdi]
	test	r9d, r9d
	jle	.lskip
	lea	ecx, [r9 - 1]
	xor	eax, eax
.lloop:
	mov	esi, eax
	cmp	rax, rcx
	je	.lskip
	add	rax, 1
	mov	r8d, [rdi + rax * 4]
	cmp	r8d, edx
	je	.lloop
	test	esi, esi
	jne	.llskip2
	cmp	[rdi + 8], edx
	cmovne	r8d, edx
	mov	eax, r8d
	ret
.lskip:
	mov	r8d, [rdi - 4 + r9 * 4]
.llskip2:
	mov	eax, r8d
	ret
