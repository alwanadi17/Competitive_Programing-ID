 Given a node object representing a binary tree:

struct node
{
  int value;
  node* left;
  node* right;
}

write a function that returns the sum of all values,
including the root. Absence of a node will be
indicated with a null value.

Examples:

10
| \
1  2
=> 13

1
| \
0  0
    \
     2
=> 3

Link:
https://www.codewars.com/kata/5800580f8f7ddaea13000025