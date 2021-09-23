// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
std::string crypting(std::string str)
{
  std::string odd = "", even = "", ret = "";
  int len = str.length();
  
  for (int i = 0; i < len; i++) {
    if (i%2 == 1) 
      odd += str[i];
    else if (i%2 == 0)
      even += str[i];
  }
  
  ret += odd;
  ret += even;
  
  return ret;
}

std::string decrypting(std::string str)
{
  std::string odd = "", even = "", ret = "";
  int len = str.length();
  
  for (int i = 0; i < len/2; i++)
    odd += str[i];
  for (int i = len/2; i < len; i++)
    even += str[i];
  
  for (int i = 0; i < len; i++) {
    if (i%2 == 0)
      ret += even[i/2];
    if (i%2 == 1)
      ret += odd[i/2];
  }
  
  return ret;
}

std::string encrypt(std::string text, int n)
{
    std::string ret = text;
  
    for (int i = 0; i < n; i++)
      ret = crypting(ret);
  
    return ret;
}

std::string decrypt(std::string encryptedText, int n)
{
    std::string ret = encryptedText;
  
    for(int i = 0; i < n; i++)
      ret = decrypting(ret);
  
    return ret;
}
