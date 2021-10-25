// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Muhammad Willdhan Arya Putra <aryaputrascorpio@gmail.com>
 */
std::string likes(const std::vector<std::string> &names)
{
    std::string str = names.size() > 1 ? "like this" : "likes this";

    for (int i = 0; i < names.size(); i++)
    {
      if (names.size() == 1)
        return names[i] + " " + str;
      else if (names.size() == 2)
        return names[i] + " and " + names[i+1] + " " + str;
      else if (names.size() == 3)
        return names[i] + ", " + names[i+1] + " and " + names[i+2] + " " + str;
      else if (names.size() >= 4)
        return names[i] + ", " + names[i+1] + " and " + std::to_string(names.size() - 2) + " others " + str;
    }

    return "no one likes this"; // Do your magic!
}
