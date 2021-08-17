<?php
// SPDX-License-Identifier: GPL-2.0
/*
 * Stats generator for CP_ID repo.
 *
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */


function codewars_katadir_chk($userKataDir): array
{
	$solutions = [];
	$scan = scandir($userKataDir);
	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		if (is_dir($userKataDir."/".$f))
			continue;
		$solutions[] = $f;
	}
	return $solutions;
}


function _genstats_codewars(string $dir): array
{
	$users = [];
	$scan  = scandir($dir);

	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		$f = $dir."/".$f;
		if (!is_dir($f))
			continue;

		$scan2 = scandir($f);
		foreach ($scan2 as $ff) {
			if ($ff === "." || $ff === "..")
				continue;
			$ff = $f."/".$ff;
			if (!is_dir($ff))
				continue;
			$user = basename($ff);
			$kata = basename(dirname($ff));
			$users[$user]["username"] = $user;
			$users[$user]["ss"][$kata] = codewars_katadir_chk($ff);
		}
	}

	usort($users, function ($a, $b) {
		$ca = count($a["ss"]);
		$cb = count($b["ss"]);
		return ($ca > $cb) ? -1 : (($ca < $cb) ? 1 : 0);
	});
	return $users;
}


function genstats_codewars(): void
{
	printf("-------------------------------------------------------\n");
	$users = _genstats_codewars(__DIR__."/Codewars");
	foreach ($users as $v) {
		$buffer = "";
		$count  = 0;
		foreach ($v["ss"] as $kk => $vv) {
			foreach ($vv as $kkk => $vvv) {
				$buffer .= "\t{$kk} ({$vvv})\n";
				$count++;
			}
		}
		printf("%s (%d):\n%s\n", $v["username"], $count, $buffer);
	}
	printf("# Generated at: %s\n", date("c"));
	printf("-------------------------------------------------------\n");
}


function main(?int $argc, ?array $argv): int
{
	$ret = 0;
	if (PHP_SAPI !== "cli") {
		printf("This script can only be run in CLI environment!\n");
		exit(1);
	}

	if (!$argv || !$argv) {
		printf("Invalid argv/argc!\n");
		exit(1);
	}

	if ($argc == 1)
		goto out_usage;

	$tg = strtolower($argv[1]);
	if (!strcmp($tg, "codewars")) {
		genstats_codewars();
		return 0;
	}

	$ret = 1;
	printf("Error: Invalid option %s\n", $argv[1]);
out_usage:
	printf("Usage: php %s [codewars|hackerrank|toki]\n", $argv[0]);
	return $ret;
}

$argv = $_SERVER["argv"] ?? NULL;
$argc = $_SERVER["argc"] ?? NULL;
exit(main($argc, $argv));
