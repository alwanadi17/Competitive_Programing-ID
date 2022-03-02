 // SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

class Solution
{
  public:
    static int maxSum(TreeNode* root)
    {
      if (!root) return 0;
      return (root->value) + maxSum(root->left) > (root->value) + maxSum(root->right) ?
        (root->value) + maxSum(root->left) : (root->value) + maxSum(root->right);
    }
};