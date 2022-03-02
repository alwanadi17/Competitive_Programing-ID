 // SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

int sumTheTreeValues(node* root) {
    return root == NULL ? 0 : root->value +
    sumTheTreeValues(root->right) +
    sumTheTreeValues(root->left); 
}