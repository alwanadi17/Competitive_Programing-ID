; SPDX-License-Identifier: GPL-2.0
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

section .text
global get_count

; uint32_t get_count(const char *src);
get_count:
	xor	eax, eax
	mov	sil, [rdi]
	test	sil, sil
	jz	.l_out

.do_loop:	
	cmp	sil, 'a'
	je	.do_eax_inc
	cmp	sil, 'i'
	je	.do_eax_inc
	cmp	sil, 'u'
	je	.do_eax_inc
	cmp	sil, 'e'
	je	.do_eax_inc
	cmp	sil, 'o'
	je	.do_eax_inc
	jmp	.skip_eax_inc
.do_eax_inc:
	inc	eax
.skip_eax_inc:
	inc	rdi
	mov	sil, [rdi]
	test	sil, sil
	jnz	.do_loop
.l_out:
	ret
