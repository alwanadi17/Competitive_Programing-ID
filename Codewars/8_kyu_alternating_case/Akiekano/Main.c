// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Akiekano <hello.akiekano@gmail.com>
 */

#include<stdlib.h>
char *to_alternating_case(const char *s) {
  int count = 0;
  int i = 0;
   for(int i = 0; s[i] != '\0'; i++){
      count++;
   }
  char *str;
  str =malloc(count+1);
  for(i = 0; s[i] != '\0'; i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      str[i] = s[i] - 32;
    }else if(s[i] >= 'A' && s[i] <= 'Z'){
      str[i] = s[i] + 32;
    } else{
      str[i] = s[i];
    }
  }
  return (str); // TODO
}