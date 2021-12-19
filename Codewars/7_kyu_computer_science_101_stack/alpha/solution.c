// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdbool.h>
#include <stdlib.h>

// Key definitions
// Please do not modify them - attempts to do so
// may lead to unexpected behavior

// A node in our linked list
typedef struct node {
  int data;
  struct node *next;
} Node;

// Our stack, implemented as a wrapper around our linked list
typedef struct {
  Node *root;
} Stack;

// Modify the code below to implement the key operations for our stack
void stack_push(Stack *stack, int data) {
  Node *newNode = malloc(sizeof(Node));

  newNode->data = data;
  newNode->next = stack->root;
  stack->root = newNode;
}
int stack_pop(Stack *stack) {
  int ret = stack->root->data;
  Node *temp = stack->root;
  stack->root = stack->root->next;
  free(temp);

  return ret;
}
int stack_peek(const Stack *stack) {
  return stack->root->data;
}
bool stack_is_empty(const Stack *stack) {
  if (!(stack->root)) return true;
  return false;
}
