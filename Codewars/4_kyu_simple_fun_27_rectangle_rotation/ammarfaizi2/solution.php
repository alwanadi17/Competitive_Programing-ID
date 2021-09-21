<?php
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
function rectangle_rotation($a, $b): int
{
	$sqrt = sqrt(2);
	$w = (int)($a / $sqrt);
	$h = (int)($b / $sqrt);
	
	if (1 === ($w + $h) % 2)
		return ($w + 1 )* $h + $w * ($h + 1);

	return $w * $h + ($w + 1) * ($h + 1);
}
