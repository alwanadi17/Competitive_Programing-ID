# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2021  Phanatagama <phanatagama@gmail.com>
#

def remove_duplicate_words(words: str) -> str:
    words = words.split(' ')
    words = set(words)
    words = ' '.join(words)
    return words
    