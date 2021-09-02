; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]

global abbrev_name

; void abbrev_name(const char *name, char *output)
abbrev_name:
	mov	al, byte [rdi]
	test	al, al
	jz	.l_out

	and	al, 0x5f
	mov	byte [rsi], al
	mov	byte [rsi + 1], '.'
	add	rdi, 1
	add	rsi, 2
.l_loop:
	mov	al, byte [rdi]
	cmp	al, ' '
	je	.got_space
	test	al, al
	jz	.l_out
	add	rdi, 1
	jmp	.l_loop
.got_space:
	mov	al, byte [rdi + 1]
	and	al, 0x5f
	mov	byte [rsi], al
	add	rsi, 1
.l_out:
	mov	byte [rsi], 0
	ret
