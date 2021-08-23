// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */

 func main(n){
    sum := 0
    for i := 0; i < n; i++ {
        if(i%3 == 0)||(i%5 ==0){
            sum = sum + i
        }
    }
    return sum
 }