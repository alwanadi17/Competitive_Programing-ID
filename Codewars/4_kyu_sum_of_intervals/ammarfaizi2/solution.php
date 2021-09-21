<?php
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
function sum_intervals(array $ints): int {
	$arr = [];
	foreach ($ints as $int) {
		for ($i = $int[0]; $i < $int[1]; $i++)
			$arr[$i] = 1;
	}
	return array_sum($arr);
}
