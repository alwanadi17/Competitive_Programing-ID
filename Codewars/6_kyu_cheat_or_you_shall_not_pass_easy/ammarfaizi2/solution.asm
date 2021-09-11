
; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

global solution, rand

[section .text]

; unsigned solution();
solution:
	xor eax, eax
	ret

rand:
	xor eax, eax
	ret
