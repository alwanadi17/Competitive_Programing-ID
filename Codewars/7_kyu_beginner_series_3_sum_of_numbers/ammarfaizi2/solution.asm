; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
global get_sum

get_sum:
	cmp	edi, esi
	jg	.lskip
	mov	eax, edi
	je	.lout
	mov	eax, esi
	mov	esi, edi
	mov	edi, eax
.lskip:
	xor	eax, eax
.lloop:
	add	eax, esi
	add	esi, 0x1
	cmp	edi, esi
	jge	.lloop
.lout:
	ret
