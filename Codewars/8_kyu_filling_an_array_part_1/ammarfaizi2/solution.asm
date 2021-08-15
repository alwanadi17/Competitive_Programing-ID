; SPDX-License-Identifier: GPL-2.0
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;
[section .text]

extern malloc
global fill_arr

; int32_t *fill_arr(size_t);
fill_arr:
	push	rbp
	mov	rbp, rdi  ; Save the length.
	shl	rdi, 2    ; rdi = rdi * sizeof(int32_t)
	call	malloc    ; rax = malloc(rdi)
	xor	rcx, rcx
._loop:
	cmp	rcx, rbp
	jge	._ret
	mov	[rax + rcx * 4], ecx
	inc	rcx
	jmp	._loop
._ret:
	pop	rbp
	ret
