<?php
// SPDX-License-Identifier: GPL-2.0
/*
 * Stats generator for CP_ID repo.
 *
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

const EINVAL = 22;
const EBADMSG = 74;
const C_RED = "\033[39m\033[41m";
const C_GREEN = "\033[39m\033[42m";
const C_END = "\e[0m";

$__verbose = true;


function cut_bs_dir(string $str): string
{
	$l = strlen(__DIR__);
	if (substr($str, 0, $l + 1) === __DIR__."/")
		return substr($str, $l + 1);
	return $str;
}


function pr_debug(string $fmt, ...$args): int
{
	global $__verbose;
	return $__verbose ? printf($fmt, ...$args) : 1;
}


function _code_chk(string $file): bool
{
	$ret = true;
	$content = file_get_contents($file);
	$file = cut_bs_dir($file);

	if (strpos($content, "SPDX-License-Identifier:") === false) {
		printf("%s[BAD] %s File %s is missing SPDX License Identifier!\n",
			C_RED, C_END, $file);
		$ret = false;
	}

	if (stripos($content, "Copyright (C)") === false) {
		printf("%s[BAD] %s File %s is missing copyright!\n", C_RED,
			C_END, $file);
		$ret = false;
	}

	if ($ret)
		pr_debug("%s[GOOD]%s File %s\n", C_GREEN, C_END, $file);

	return $ret;
}


function code_chk(string $dir)
{
	$ret  = 0;
	$scan = scandir($dir);
	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		$f = $dir."/".$f;
		if (is_dir($f))
			$ret |= code_chk($f);
		else if (preg_match("/\.(c|cpp|py|asm|go|php|s)$/i", $f)) {
			$ret |= !_code_chk($f);
		}
	}
	return $ret;
}



function main(?int $argc, ?array $argv): int
{
	global $__verbose;
	$ret = 0;
	if (PHP_SAPI !== "cli") {
		printf("This script can only be run in CLI environment!\n");
		exit(1);
	}

	if (!$argv || !$argv) {
		printf("Invalid argv/argc!\n");
		exit(1);
	}

	if ($argc > 1)
		goto out_usage;

	$ret |= code_chk(__DIR__."/Codewars");
	$ret |= code_chk(__DIR__."/Toki");
	return $ret;

out_usage:
	printf("Usage: php %s\n", $argv[0]);
	return $ret;
}


$argv = $_SERVER["argv"] ?? NULL;
$argc = $_SERVER["argc"] ?? NULL;
exit(main($argc, $argv));
