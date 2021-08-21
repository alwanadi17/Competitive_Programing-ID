; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
extern strdup
global rmurlahr
rmurlahr:
	call	strdup
	mov	rdi, rax
	xor	rcx, rcx
.cmp_loop:
	mov	r9b, [rdi + rcx]
	cmp	r9b, '#'
	je	.got_c
	test	r9b, r9b
	jz	._ret
	inc	rcx
	jmp	.cmp_loop
.got_c:
	mov	byte [rdi + rcx], 0
._ret:
	ret
