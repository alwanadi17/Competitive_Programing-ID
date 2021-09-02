; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]

extern malloc
global borrow


; size_t my_strlen(const char *str);
my_strlen:
	xor	eax, eax
	cmp	byte [rdi], 0
	je	.l_out
.l_loop:
	add	rax, 1
	add	rdi, 1
	cmp	byte [rdi], 0
	jne	.l_loop
.l_out:
	ret


; char *borrow(const char *src);
borrow:
	push	rbp
	mov	rbp, rdi
	call	my_strlen
	lea	rdi, [rax + 1]
	call	malloc
	mov	rsi, rax

	mov	dl, byte [rbp]
	test	dl, dl
	jz	.l_out

.chk_lower:
	cmp	dl, 'a'
	jb	.chk_upper
	cmp	dl, 'z'
	jbe	.do_assign
.chk_upper:
	cmp	dl, 'A'
	jb	.skip_assign
	cmp	dl, 'Z'
	ja	.skip_assign
.l_tolower:
	or	dl, 0x20
.do_assign:
	mov	byte [rsi], dl
	add	rsi, 1
.skip_assign:
	add	rbp, 1
	mov	dl, byte [rbp]
	test	dl, dl
	jnz	.chk_lower
.l_out:
	mov	byte [rsi], 0
	pop	rbp
	ret
