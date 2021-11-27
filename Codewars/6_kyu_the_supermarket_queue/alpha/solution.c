// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <stdlib.h>

int queue_time(const int *customers, int customers_length, int n)
{
  if (customers_length <= 0) return 0;

  int ret = 0;
  const int *p = customers;

  if (n > customers_length) {
    for (int i = 0; i < customers_length; i++)
      if (ret < p[i])
        ret = p[i];

    return ret;
  }

  if (n == 1) {
    for (int i = 0; i < customers_length; i++)
      ret += p[i];

    return ret;
  }

  //if n < customers_length
  int *queue = malloc(n*sizeof(int));
  int *min = queue;

  for (int i = 0; i < n; i++)
    queue[i] = customers[i];

  for (int i = n; i < customers_length; i++) {
    for (int j = 0; j < n; j++) {
      if (*min > queue[j])
        min = &queue[j];
    }
    *min += customers[i];
  }

  for (int i = 0; i < n; i++)
    if (ret < queue[i]) ret = queue[i];

  free(queue);
  return ret;
}
