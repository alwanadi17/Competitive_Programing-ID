// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int swapNodes(Node **lsPtr1, unsigned int idx1, Node **lsPtr2, unsigned int idx2)
{
    Node *temp;

    while (idx1 > 0) {
        lsPtr1 = &(*lsPtr1)->next;
        idx1--;
        if (!(*lsPtr1)) return 0;
    }

    while (idx2 > 0) {
        lsPtr2 = &(*lsPtr2)->next;
        idx2--;
        if (!(*lsPtr2)) return 0;
    }

    temp = *lsPtr1;
    *lsPtr1 = *lsPtr2;
    *lsPtr2 = temp;

    temp = (*lsPtr1)->next;
    (*lsPtr1)->next = (*lsPtr2)->next;
    (*lsPtr2)->next = temp;

    return 1;
}
