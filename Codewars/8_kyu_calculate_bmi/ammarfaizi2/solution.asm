; SPDX-License-Identifier: GPL-2.0-only
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .rodata]
align 8
_case1:
	dq 18.5
_case2:
	dq 25.0
_case3:
	dq 30.0
_str1:
	db "Underweight",0
_str2:
	db "Normal",0
_str3:
	db "Overweight",0
_str4:
	db "Obese",0

[section .text]
global bmi
; const char *__bmi(int, double);
; // Weight is placed in EDI
; // Height is placed in xmm0 - the number format is double
__bmi:
	cvtsi2sd	xmm1, edi
	mulsd		xmm0, xmm0
	divsd		xmm1, xmm0

	lea		rax, [rel _str1]
	movsd		xmm0, [rel _case1]
	ucomisd		xmm1, xmm0
	jbe		.l_out

	lea		rax, [rel _str2]
	movsd		xmm0, [rel _case2]
	ucomisd		xmm1, xmm0
	jbe		.l_out

	lea		rax, [rel _str3]
	movsd		xmm0, [rel _case3]
	ucomisd		xmm1, xmm0
	jbe		.l_out

	lea		rax, [rel _str4]
.l_out:
	ret
bmi:
	jmp	__bmi
