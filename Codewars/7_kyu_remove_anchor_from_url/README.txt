Complete the function/method so that it returns the url with anything
after the anchor (#) removed.


Examples

```
url1:  db    `www.codewars.com#about\0`
url2:  db    `www.codewars.com?page=1\0`
    
    mov rdi, url1
    call rmurlahr    ; RAX <- `www.codewars.com\0`
    
    mov rdi, url2
    call rmurlahr    ; RAX <- `www.codewars.com?page=1\0`
```

Link: https://www.codewars.com/kata/51f2b4448cadf20ed0000386
