#  SPDX-License-Identifier: GPL-2.0-only
# 
#   Copyright (C) 2021  anandadwipra <anandabiru04@gmail.com> 

def mcast_ip_to_mac(ip_string):
    biner="".join([bin(int(i)).split('b')[1].zfill(8) for i in ip_string.split('.')]) # Convertion biner
    splitbiner= [biner[i:i+4] for i in range(0, len(biner), 4)] # split biner 
    splitbiner.pop(1) # delete biner 1
    splitbiner[1]=splitbiner[1][1:] # Lose biner
    hexa="01005"+"".join([hex(int(i,2)).split('x')[1].upper() for i in splitbiner]) # biner to hexa
    return ":".join([hexa[i:i+2] for i in range(0, len(hexa), 2)]) # to Multicast MAC