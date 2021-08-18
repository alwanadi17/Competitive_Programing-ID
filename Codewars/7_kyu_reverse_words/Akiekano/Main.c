// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */
#include<string>
#include<bits/stdc++.h> 
using namespace std; 

std::string reverse_words(std::string str)
{
  int len=str.length(); 
    int j=0; 
    for(int i=0;i<len;i++) 
    { 
        if(str[i]==' ') 
        { 
            reverse(str.begin()+j,str.begin()+i); 
            j=i+1; 
        } 
        else if(i==len-1) 
        { 
            reverse(str.begin()+j,str.end()); 
        } 
    } 
  return str;
}