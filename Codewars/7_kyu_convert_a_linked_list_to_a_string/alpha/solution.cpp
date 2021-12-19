// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */


#include <string>

std::string stringify(Node* list)
{
    std::string ret;

    while (list != NULL) {
        ret += std::to_string(list->data) + " -> ";
        list = list->next;
    }
    ret += "nullptr";

    return ret;
}
