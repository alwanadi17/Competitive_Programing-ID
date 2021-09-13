
Task

Write the function n_sum that takes the number of integers n and n
additional integer (C int) arguments, and returns the sum of all
arguments except the first argument n.


Examples
```
n_sum(0) == 0
n_sum(1, 10) == 10
n_sum(2, 3, 5) == 8
n_sum(5, 1, 2, 3, 4, 5) == 15
```
Restrictions

You can't use # character in your code, which means that you can't use
#include <stdarg.h> for reading in variable-length arguments.

You can't use the "built-in" constructs such as __builtin_va_list either.
This will be checked by existence of the string va.

There are also some more hidden anti-cheat tests, which will block any
approaches trying to bypass the restrictions; you should read the
arguments directly from the call stack.

Also, your code should be under 1KB (1024 bytes).

Hint
The compiler for the Codewars system follows the Linux x86-64 calling
convention.

Link: https://www.codewars.com/kata/59f3f88c25d57513d600014f
