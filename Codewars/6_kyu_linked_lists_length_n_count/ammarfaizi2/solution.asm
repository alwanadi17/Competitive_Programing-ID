; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;
global length, count

struc node
	.data:	resd 1
	alignb  8
	.next:	resq 1
endstruc

[section .text]

; size_t length(struct node *list);
length:
	xor	eax, eax
	test	rdi, rdi
	jz	.l_out
	jmp	.l_start_loop
.l_loop:
	mov	rdi, rsi
.l_start_loop:
	add	rax, 1
	mov	rsi, qword [rdi + node.next]
	test	rsi, rsi
	jnz	.l_loop
.l_out:
	ret


; size_t count(struct node *list, int data);
count:
	xor	eax, eax
	test	rdi, rdi
	jz	.l_out
	jmp	.l_start_loop
.l_loop:
	mov	rdi, rdx
.l_start_loop:
	cmp	dword [rdi + node.data], esi
	jne	.l_skip_add
	add	rax, 1
.l_skip_add:
	mov	rdx, qword [rdi + node.next]
	test	rdx, rdx
	jnz	.l_loop
.l_out:
	ret
