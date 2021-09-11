'''
SPDX-License-Identifier: GPL-2.0-only
Copyright (C) 2021 uClaster <uclasterdev@gmail.com>
'''


def positive_sum(arr):
	return sum(filter(lambda n: n > 0, arr))
