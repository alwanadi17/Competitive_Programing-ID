 // SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdbool.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

typedef struct {
  Node *front, *back;
} Queue;

// Modify the code below to implement the key 
// operations for queues
void queue_enqueue(Queue *queue, int data) {
    Node *new = malloc(sizeof(Node));
    new->data = data;
    
    if (!queue->front) queue->front = new;
    else queue->back->next = new;
    queue->back = new;
}

int queue_dequeue(Queue *queue) {
    int ret = queue->front->data;
  
    Node *tmp = queue->front;
    queue->front = queue->front->next;
    free(tmp);
  
    return ret;
}

int queue_front(const Queue *queue) {
    return queue->front->data;
}

bool queue_is_empty(const Queue *queue) {
    if (!queue->front) return true;
    return false;
}