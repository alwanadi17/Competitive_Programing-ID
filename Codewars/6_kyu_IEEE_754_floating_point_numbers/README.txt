IEEE 754 is a standard for representing floating-point numbers (i.e. numbers that can have a fractional part and emulate real numbers).

It is now used by most recent programming languages implementations.

The 2 most widely used IEEE 754 formats are called the single precision (SP, encoded on 32 bits) and double precision (DP, encoded on 64 bits) formats.

    In C/C++, these correspond respectively to the types float and double, in most (but not all) implementations, including the Codewars' system.
    The default Python implementation, CPython, is written in C and represents Python floats internally as C doubles, and thus as IEEE 754 DP values on most platforms, including Codewars.
    In JavaScript, all Numbers, including integers and special values like NaN, are IEEE 754 DP values.
    In Rust, these correspond respectively to the types f32 and f64.
    In Java, these correspond respectively to the types float and double.

As you can see on the images below, IEEE 754 numbers are divided into 3 fields :

    a sign bit;
    an exponent encoded on 8 (SP) or 11 (DP) bits;
    a mantissa (also called significand) encoded on 23 (SP) or 52 (DP) bits.

The IEEE 754 double-precision encoding scheme The IEEE 754 double-precision encoding scheme

Your task is to write the functions :

std::string fp64_to_ieee754(double number);
std::string fp32_to_ieee754(float number);

that take as parameter a floating point number, and shall return the binary IEEE 754 encoding of this number as a std::string, with fields separated by spaces for readability.
Example

fp64_to_ieee754 (15.875)

should return

"0 10000000010 1111110000000000000000000000000000000000000000000000"

fp32_to_ieee754 (15.875)

should return

"0 10000010 11111100000000000000000"

Note

If you find yourself writing overly complex code, you are probably on the wrong path. This kata is agnostic regarding floating-point approximations.

Think about the specific features of C++.

Link:
https://www.codewars.com/kata/5efcaedf95d7110017896ced
