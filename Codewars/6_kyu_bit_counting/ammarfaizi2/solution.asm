; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;
[section .text]
global count_bits

; Counts the number of set bits in arg0.
; arg0         = (uint64_t) The number to check.
; return value = (uint64_t) The number of set bits.
count_bits:
	popcnt	rax, rdi
	ret
