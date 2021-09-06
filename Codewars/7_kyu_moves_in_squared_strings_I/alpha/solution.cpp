
// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */
 
 #include <algorithm>

class Opstrings
{
public:
    static std::string vertMirror(const std::string &strng);
    static std::string horMirror(const std::string &strng);
    // your high order function oper
    //... oper(...);
    template<typename Func>
    static std::string oper(Func func, const std::string &s);
};

std::string Opstrings::vertMirror(const std::string &strng)
{
    std::string ret = "", temp = "";
    for (char a : strng) {
      if (a != '\n') temp += a;
      if (a == '\n') {
        reverse(temp.begin(),temp.end());
        ret += temp + '\n';
        temp = "";
      }
    }
    reverse(temp.begin(),temp.end());
  
    return ret += temp;
}

std::string Opstrings::horMirror(const std::string &strng)
{
    std::string temp = strng;
    reverse(temp.begin(),temp.end());
    return Opstrings::vertMirror(temp);
}

template<typename Func>
std::string Opstrings::oper(Func func,const std::string &s)
{
    return func(s);
}
