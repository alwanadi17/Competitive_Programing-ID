<?php
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
function isAlt($s)
{
	$s = preg_replace(["/[aiueo]/", "/[^1]/"], ["1", "0"], $s);
	$b = $s[0];
	echo $s. " ";
	foreach(str_split(substr($s, 1)) as $q) {
		if ($q == $b) return false;
		$b = $q;
	}
	return true;
}
