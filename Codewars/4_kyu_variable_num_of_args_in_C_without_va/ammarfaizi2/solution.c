// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

int n_sum(int n, int esi, int edx, int ecx, int r8d, int r9d, ...)
{
  int eax = 0;
  char *paddr = (char *)__builtin_frame_address(0) + 16;

  for (int i = 0; i < n; ++i) {
    switch (i) {
      case 0: eax += esi; break;
      case 1: eax += edx; break;
      case 2: eax += ecx; break;
      case 3: eax += r8d; break;
      case 4: eax += r9d; break;
      default: {
        eax   += *((int *)paddr);
        paddr += 8;
      } break;
    }
  }

  return eax;
}
