// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Muhammad Willdhan Arya Putra <aryaputrascorpio@gmail.com>
 */
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = 1; j < numbers.size(); j++)
    {
      if (numbers[i] + numbers[j] == target)
        return std::make_pair(i, j);
    }
  }
  return std::make_pair(0, 0);
}
