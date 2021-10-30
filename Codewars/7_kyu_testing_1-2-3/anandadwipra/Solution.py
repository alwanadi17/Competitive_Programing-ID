#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def number(lines):
    return [ str(i+1)+": "+str(x) for i,x in enumerate(lines)] if lines else lines