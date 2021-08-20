<?php
// SPDX-License-Identifier: GPL-2.0
/*
 * Stats generator for CP_ID repo.
 *
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

function dir_has_readme_txt(string $dir)
{
	return file_exists($dir."/README.txt");
}


function fetch_solutions(string $dir): array
{
	$ret = [];
	$scan = scandir($dir);
	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		$ret[] = $f;
	}
	return $ret;
}


function fetch_users(array &$ret, string $basedir, string $dir)
{
	$scan = scandir($dir);
	$rldir = explode($basedir."/", $dir, 2)[1];
	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		$user = $f;
		$f = $dir."/".$f;
		if (is_dir($f))
			$ret[$user][$rldir] = fetch_solutions($f);
	}
}


function _scan_user_p(array &$ret, string $basedir, string $dir): void
{
	$scan = scandir($dir);
	foreach ($scan as $f) {
		if ($f === "." || $f === "..")
			continue;
		$f = $dir."/".$f;
		if (is_dir($f)) {
			if (dir_has_readme_txt($f))
				fetch_users($ret, $basedir, $f);
			else
				_scan_user_p($ret, $basedir, $f);
		}
	}
}


function scan_user_p(array &$ret, string $basedir): void
{
	_scan_user_p($ret, $basedir, $basedir);	
}


function genstats_codewars(string &$readmeStub, string $basedir,
			   string $hashFile): int
{
	$oldHash = file_exists($hashFile) ? trim(file_get_contents($hashFile)) : "";

	$ret = [];
	scan_user_p($ret, $basedir);
	ob_start();
	printf("-------------------------------------------------------\n");	
	foreach ($ret as $k => $v) {
		$buffer = "";
		$count  = 0;
		foreach ($v as $kk => $vv) {
			foreach ($vv as $kkk => $vvv) {
				$buffer .= "\t{$kk} ({$vvv})\n";
				$count++;
			}
		}
		printf("%s (%d):\n%s\n", $k, $count, $buffer);
	}
	printf("# Generated at {{generated_at}}\n");
	printf("-------------------------------------------------------");
	$out = ob_get_clean();

	$newHash = sha1($out);
	if ($oldHash !== $newHash)
		file_put_contents($hashFile, $newHash."\n");

	$out = str_replace("{{generated_at}}", date("c"), $out);
	$readmeStub = str_replace("{{codewars_stats}}", $out, $readmeStub);
	return ($oldHash === $newHash);
}


function genstats_toki(string &$readmeStub, string $basedir,
		       string $hashFile): int
{
	$oldHash = file_exists($hashFile) ? trim(file_get_contents($hashFile)) : "";

	$ret = [];
	scan_user_p($ret, $basedir);
	ob_start();
	printf("-------------------------------------------------------\n");	
	foreach ($ret as $k => $v) {
		$buffer = "";
		$count  = 0;
		foreach ($v as $kk => $vv) {
			foreach ($vv as $kkk => $vvv) {
				$buffer .= "\t{$kk} ({$vvv})\n";
				$count++;
			}
		}
		printf("%s (%d):\n%s\n", $k, $count, $buffer);
	}
	printf("# Generated at {{generated_at}}\n");
	printf("-------------------------------------------------------");
	$out = ob_get_clean();

	$newHash = sha1($out);
	if ($oldHash !== $newHash)
		file_put_contents($hashFile, $newHash."\n");

	$out = str_replace("{{generated_at}}", date("c"), $out);
	$readmeStub = str_replace("{{toki_stats}}", $out, $readmeStub);
	return ($oldHash !== $newHash);
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

	if ($argc > 1)
		goto out_usage;

	$readmeStub = file_get_contents(__DIR__."/README.stub.md");
	$ret |= genstats_codewars(
		$readmeStub,
		__DIR__."/Codewars",
		__DIR__."/.stat_hash/Codewars.lock"
	);
	$ret |= genstats_toki(
		$readmeStub,
		__DIR__."/Toki",
		__DIR__."/.stat_hash/Toki.lock"
	);

	if ($ret)
		file_put_contents(__DIR__."/README.md", $readmeStub);

	return 0;
out_usage:
	printf("Usage: php %s\n", $argv[0]);
	return $ret;
}

$argv = $_SERVER["argv"] ?? NULL;
$argc = $_SERVER["argc"] ?? NULL;
exit(main($argc, $argv));
