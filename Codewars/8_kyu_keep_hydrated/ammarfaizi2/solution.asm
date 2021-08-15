; SPDX-License-Identifier: GPL-2.0
;
; Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
;

[section .text]

global litres

; int litres(double);
litres:
	mulsd		xmm0, [rel .lt]
	cvttsd2si	eax, xmm0
	ret
.lt:
	dq 0.5
