#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def solution(args):
    args.sort()
    arg=""
    x=0
    for i in range(0,len(args)):
        if i==len(args)-1:
            if x>1 and x!=0:
                arg+="-"
            elif x==1:
                arg+=","
            arg+=str(args[i])
        elif i+1 != len(args):
            if args[i]+1 != args[i+1]: 
                if x>1 and x!=0:
                    arg+="-"
                elif x==1:
                    arg+=","
                arg+=str(args[i])+","
                x=0
            else:
                if x==0:
                    arg+=str(args[i])
                x+=1
    return arg