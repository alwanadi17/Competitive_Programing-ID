; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
extern malloc
extern strlen
global greet

; @param const char *name
%define len01 (.str02 - .str01)
%define len02 (.str03 - .str02)
greet:
	push	rbp
	push	rbx
	push	rdx
	mov	rbp, rdi

	call	strlen
	mov	rbx, rax

	lea	rdi, [rax + len01 + len02]
	call	malloc

	mov	rdi, rax
	lea	rsi, [rel .str01]
	mov	rcx, len01
	rep	movsb

	mov	rsi, rbp
	mov	rcx, rbx
	rep	movsb

	lea	rsi, [rel .str02]
	mov	rcx, len02
	rep	movsb

	pop	rdx
	pop	rbx
	pop	rbp
	ret
.str01:
	db "Hello, "
.str02:
	db " how are you doing today?",0
.str03:
