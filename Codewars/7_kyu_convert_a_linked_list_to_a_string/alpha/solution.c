// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

// Main Solution
char *stringify(Node *list) {
    char *ret = malloc(2048);
    char num[11];

    memset(ret,0,2048);
    while (list != NULL) {
        sprintf(num,"%d",list->data);
        if (*ret == 0) strcpy(ret,num);
        else strcat(ret,num);
        strcat(ret," -> ");
        list = list->next;
    }
    if (*ret == 0) strcpy(ret,"NULL");
    else strcat(ret,"NULL");

    return ret;
}
