// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

 struct node
{
  int value;
  struct node* left;
  struct node* right;
};


int sumTheTreeValues(struct node* root)
{
    if (root == 0) return 0;
    int ret = 0;
    ret += root->value;
  
    return ret + sumTheTreeValues(root->left) +
    	sumTheTreeValues(root->right);
} 
