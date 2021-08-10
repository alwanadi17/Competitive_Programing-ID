; SPDX-License-Identifier: GPL-2.0
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

section .rodata
hex_tbl:
	times 49 db 0x0
	db 1,2,3,4,5,6,7,8,9
	times 39 db 0x0
	db 10,11,12,13,14,15

section .text
global hex_to_dec

my_strlen:
	xor	eax, eax
	cmp	byte [rdi], 0
	je	._out
._my_loop:
	inc	rax
	inc	rdi
	cmp	byte [rdi], 0
	jne	._my_loop
._out:
	ret


hex_to_dec:
	push	rbp
	mov	rbp, rdi
	call	my_strlen
	mov	rdi, rax

	; rdx will be the end condition for rdi
	lea	rdx, [rbp - 1]

	; Now we got the tail of string.
	lea	rdi, [rdi + rbp - 1]

	; Start the value to be returned from zero.
	xor	eax, eax

	; If we get rdx = rdi here, this means we got an empty string.
	cmp	rdx, rdi
	je	._out

	; rsi will be the cycle counter
	xor	esi, esi

	lea	r8, [rel hex_tbl]

	; We don't need rbp anymore, we can reuse it for byte load.
	movzx	ebp, byte [rdi]
	or	ebp, ' '
	movzx	eax, byte [r8 + rbp]

	; If rdx = rdi, we are done!
	dec	rdi
	cmp	rdx, rdi
	je	._out

._loop:
	; Whee...
	imul	ecx, esi, 4
	mov	r9d, 16
	shl	r9d, cl
	movzx	ebp, byte [rdi]
	or	ebp, ' '
	movzx	ebp, byte [r8 + rbp]
	imul	ebp, r9d
	add	rax, rbp

	; If rdx = rdi, we are done!
	dec	rdi
	inc	rsi
	cmp	rdx, rdi
	jne	._loop
._out:
	pop	rbp
	ret
