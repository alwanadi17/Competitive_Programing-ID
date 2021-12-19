// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_pangram(const char *str_in) {
    int i,j,len;
    char c,str;

    len = strlen(str_in);

    for (i = 0; i < 26; i++) {
        c = i+97;
        for (j = 0; j < len; j++) {
            if (isalpha(str_in[j])) {
              str = tolower(str_in[j]);
              if (c == str) break;
            }
        }
        if (j == len) return false;
    }

    return true;
}
