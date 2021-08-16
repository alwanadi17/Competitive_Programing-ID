; SPDX-License-Identifier: GPL-2.0
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

section .text
global hero

; Returns true if the hero will survive an encounter given a specific number of bullets and dragons.
; arg0         = (uint32_t) The number of bullets.
; arg1         = (uint32_t) The number of dragons.
; return value = (bool)     True if the hero survives, false otherwise.
hero:
	xor	eax, eax
	mov	ecx, 1
	shl	esi, cl
	cmp	edi, esi
	cmovge	eax, ecx
	ret
