// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Muhammad Willdhan Arya Putra <aryaputrascorpio@gmail.com>
 */
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    int sumLastThree;
    
    if (n != 0 && n >= 3)
    {
      for (int i = 0; i < signature.size(); i++)
        result.push_back(signature[i]);
    }
    else
    {
      for (int i = 0; i < n; i++)
        result.push_back(signature[i]);
    }
    
    if (n > 0 && result.size() >= 3)
    {
      for (int i = 0; i < n - 3; i++)
      {
        for (int j = 0; j < 3; j++)
          sumLastThree += result[j+i];
        result.push_back(sumLastThree);
        sumLastThree = 0;
      }  
    }
    
      
    return result;
}

