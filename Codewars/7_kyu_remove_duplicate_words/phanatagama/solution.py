# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2021  Phanatagama <phanatagama@gmail.com>
#

def remove_duplicate_words(words: str) -> str:
    result = []
    for word in words.split(' '):
      if word not in result: result.append(word)
    return ' '.join(result)
    