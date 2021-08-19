; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]
global data_reverse

;
;  unsigned char *data_reverse(
;	unsigned char *rdata,
;	const unsigned char *data,
;	size_t nblk
;  );
;
data_reverse:
	mov	rax, rdi
	test	rdx, rdx
	jz	.l_out
	sub	rdx, 1
.l_loop:
	mov	rcx, qword [rsi + rdx * 8]
	mov	qword [rdi], rcx
	add	rdi, 8
	sub	rdx, 1
	test	rdx, rdx
	jns	.l_loop
.l_out:
	ret
