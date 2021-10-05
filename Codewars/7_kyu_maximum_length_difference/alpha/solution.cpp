// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
int maxlen(std::vector<std::string> str)
{
  int ret = 0, len = 0;  
  for (std::string a : str){
    len = a.length();
    if (ret < len)
      ret = len;
  }
  return ret;
}

int minlen(std::vector<std::string> str)
{
  int ret = str[0].length(), len = 0;  
  for (std::string a : str){
    len = a.length();
    if (ret > len)
      ret = len;
  }
  return ret;
}

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
    {
      int alen1 = a1.size(),alen2 = a2.size();
      
      if (alen1 == 0 || alen2 == 0)
        return -1;
      
      int xmin = minlen(a1),xmax = maxlen(a1),ymin = minlen(a2),ymax = maxlen(a2);
      
      return (xmax-ymin) > (ymax-xmin) ? xmax-ymin : ymax-xmin;
    }
};
