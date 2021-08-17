; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

section .text
global count_positives_sum_negatives

; void count_positives_sum_negatives(int *vec, size_t sz, unsigned *poscnt, int *negsum);
count_positives_sum_negatives:
	xor	r8d, r8d  ; Positive counter
	xor	r9d, r9d  ; Negative sum
	test	rsi, rsi
	; If this jump is taken, we got an
	; empty array in @vec.
	jz	.lout
.lloop:
	mov	eax, [rdi]
	; Note that zero doesn't count as positive.
	cmp	eax, 1
	jl	.got_negative_or_zero
	inc	r8d
	jmp	.chk_lloop
.got_negative_or_zero:
	add	r9d, eax
.chk_lloop:
	add	rdi, 4
	dec	rsi
	; If rsi == 0, we are done!
	jnz	.lloop
.lout:
	mov	[rdx], r8d
	mov	[rcx], r9d
	ret
