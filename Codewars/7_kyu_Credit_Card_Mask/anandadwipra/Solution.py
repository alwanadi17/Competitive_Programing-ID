#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

# return masked string
def maskify(cc):
    mask=""
    cclen=len(cc)-4
    for i in range(0,cclen):
        mask+='#'
    mask+=cc[-4:]
    return mask
