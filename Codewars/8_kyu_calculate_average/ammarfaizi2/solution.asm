; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
global find_average

; double find_average(double*, int);
find_average:
	xorpd	xmm0, xmm0
	test	esi, esi
	jz	.l_out
	xor	ecx, ecx
.l_loop:
	addsd	xmm0, qword [rdi + (8 * rcx)]
	add	rcx, 1
	cmp	rcx, rsi
	jne	.l_loop
	cvtsi2sd	xmm1, esi
	divsd	xmm0, xmm1
.l_out:
	ret
