// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
#include <vector>

std::vector<int> solution(std::vector<int> nums)
{
	size_t len = nums.size(), i, j;
	for (i = 0; i < len; i++) {
		bool is_sorted = true;
		for (j = 0; j < (len - 1); j++) {
			if (nums[j] > nums[j + 1]) {
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
				is_sorted = false;
			}
		}
		if (is_sorted)
			break;
	}
	return nums;
}
