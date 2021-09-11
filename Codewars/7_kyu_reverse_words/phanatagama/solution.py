# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2021  Phanatagama <phanatagama@gmail.com>
#

def reverse_words(words: str) -> str:
    words = words.split(' ')
    words = map(lambda word: word[::-1], words)
    words = ' '.join(words)
    return words
    