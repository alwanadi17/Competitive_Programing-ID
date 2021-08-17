; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;
[section .text]

extern malloc
extern sprintf
global range_extraction

range_extraction:
	push	r14
	push	r13
	mov	r13, rdi
	lea	rdi, [rsi+rsi*4]
	push	r12
	sal	rdi, 2
	push	rbp
	mov	rbp, rsi
	push	rbx
	call	malloc
	mov	r12, rax
	test	rbp, rbp
	je	.L1
	mov	rdi, rax
	xor	r8d, r8d
.L2:
	lea	rbx, [r8+1]
	mov	r9d, dword [r13+0+r8*4]
	cmp	rbp, rbx
	jbe	.L3
	mov	eax, r9d
	jmp	.L5
.L26:
	lea	rdx, [rbx+1]
	cmp	rbp, rdx
	jbe	.L25
	mov	rbx, rdx
.L5:
	mov	edx, eax
	mov	eax, dword [r13+0+rbx*4]
	lea	rsi, [rbx-1]
	lea	ecx, [rax-1]
	cmp	ecx, edx
	je	.L26
	mov	rax, rsi
	sub	rax, r8
	test	r8, r8
	je	.L14
.L27:
	mov	byte [rdi], 44
	lea	r14, [rdi+1]
	test	rax, rax
	je	.L7
.L28:
	cmp	rax, 1
	je	.L8
	mov	ecx, dword [r13+0+rsi*4]
	mov	edx, r9d
	mov	esi, .LC2
.L23:
	mov	rdi, r14
	xor	eax, eax
	call	sprintf
	mov	r8, rbx
	movsx	rdi, eax
	add	rdi, r14
.L10:
	cmp	rbp, rbx
	ja	.L2
.L1:
	pop	rbx
	mov	rax, r12
	pop	rbp
	pop	r12
	pop	r13
	pop	r14
	ret
.L25:
	mov	rsi, rbx
	mov	rbx, rdx
	mov	rax, rsi
	sub	rax, r8
	test	r8, r8
	jne	.L27
.L14:
	mov	r14, rdi
	test	rax, rax
	jne	.L28
.L7:
	mov	rdi, r14
	mov	edx, r9d
	mov	esi, .LC0
	xor	eax, eax
	call	sprintf
	mov	r8, rbx
	movsx	rdi, eax
	add	rdi, r14
	jmp	.L10
.L8:
	mov	ecx, dword [r13+0+rsi*4]
	mov	edx, r9d
	mov	esi, .LC1
	jmp	.L23
.L3:
	test	r8, r8
	je	.L15
	mov	byte [rdi], 44
	lea	r14, [rdi+1]
	jmp	.L7
.L15:
	mov	r14, rdi
	mov	ebx, 1
	jmp	.L7

.LC0: db "%d",0
.LC1: db "%d,%d",0
.LC2: db "%d-%d",0
