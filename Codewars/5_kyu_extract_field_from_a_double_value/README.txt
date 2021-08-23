Task

A double precision floating-point type (double) has the following
format:

> Sign (1 bit)
| > Exponent (11 bits)
| |           > Mantissa (52 bits)
| |           |
s eeeeeeeeeee mmmmmmmmmmmmmmmmm...mm

Given a double value, extract its exponent part and return the value as
an int.


Restrictions

You can't use any of the characters +-*/%&|^~<>#? in your code, which
means:

    You can't do any arithmetic/bitwise operations.
    You can't do any pointer/address operations.
    You can't include any extra files.

Link: https://www.codewars.com/kata/59e5f1b77905df91aa000024
