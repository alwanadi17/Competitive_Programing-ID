// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
std::string likes(const std::vector<std::string> &names)
{
  int len = names.size();
  
  if (len == 0) 
    return "no one likes this";
  
  if (len == 1)
    return names[0] + " likes this";
  
  if (len == 2)
    return names[0] + " and " + names[1] + " like this";
  
  if (len == 3)
    return names[0] + ", " + names[1] + " and " + names[2] + " like this";
  
  if (len >= 4)
    return names[0] + ", " + names[1] + " and " + std::to_string(len-2) + " others like this";

  return 0;
}
