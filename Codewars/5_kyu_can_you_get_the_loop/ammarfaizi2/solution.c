// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

typedef struct node_t Node;
struct node_t {
	Node* next;
};

int getLoopSize(Node *startNode)
{
	int cycle = 1;
	Node *tortoise = startNode;
	Node *hare = startNode->getNext();

	while (tortoise != hare) {
		tortoise = tortoise->getNext();
		hare = hare->getNext()->getNext();
	}

	tortoise = tortoise->getNext();
	while (tortoise != hare) {
		cycle++;
		tortoise = tortoise->getNext();
	}

	return cycle;
}
