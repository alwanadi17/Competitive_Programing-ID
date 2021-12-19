// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */


#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char *add(char *a, char *b) {
    char *ret = malloc(1024);
    char *tmp;
    int len1,len2,len;
    uint8_t carry = 0, sum = 0;
    char c[2],temp;

    memset(ret,0,1024);
    memset(c,0,2);
    if (strlen(a) > strlen(b)) {
        tmp = a;
        a = b;
        b = tmp;
    }

    len1 = strlen(a);
    len2 = strlen(b);

    for (int i = len1-1; i >= 0; i--) {
        sum = (a[i]-'0')+(b[i+len2-len1]-'0')+carry;
        carry = sum/10;
        *c = (sum%10)+'0';
        if (*ret == 0) strcpy(ret,c);
        else strcat(ret,c);
    }

    for (int i = len2-len1-1; i >= 0; i--) {
        sum = (b[i]-'0')+carry;
        carry = sum/10;
        *c = (sum%10)+'0';
        if (*ret == 0) strcpy(ret,c);
        else strcat(ret,c);
    }

    *c = carry+'0';
    if (carry) strcat(ret,c);

    len = strlen(ret);
    for (int i = 0; i < len/2; i++) {
        temp = ret[i];
        ret[i] = ret[len-i-1];
        ret[len-i-1] = temp;
    }

    return ret;
}
