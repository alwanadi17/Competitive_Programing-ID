// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node *head)
{
  int ret = 0;

  while(head) {
      head = head->next;
      ret++;
  }

  return ret;
}

int Count(Node *head, int data)
{
    int ret = 0;

    while(head) {
        if (data == head->data) ret++;
        head = head->next;
    }

    return ret;
}
