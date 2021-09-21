// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 class Opstrings1
{
public:
    static std::string rot(const std::string &strng)
    {
      std::string ret = strng;
      reverse(ret.begin(),ret.end());
      return ret;
    }
    static std::string selfieAndRot(const std::string &strng)
    {
      std::string ret = "";
      std::string temp = "";
      int len = 0;
      
      while (strng[len] != '\n') len++;
      
      for (char a : strng) {
        if (a == '\n') {
          for (int i = 0; i < len; i++) ret += '.';
        }
        ret += a;
      }
      for (int i = 0; i < len; i++) ret += '.';
      
      temp = ret;
      reverse(temp.begin(),temp.end());
      ret += '\n';
      
      return ret += temp;
    }
  
    template<typename Func>
    static std::string oper(Func f, const std::string &s)
    {
      return f(s);
    }
};
