#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def smallest_product(a,res=1):
    return min([eval("*".join([str(x) for x in i])) for i in a])