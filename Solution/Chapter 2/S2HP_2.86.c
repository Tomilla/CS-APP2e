/*
 * ◆
 * Solution to Homework Problem 2.86 (page 163)
 *
 * Consider a 16-bit floating-point representation based on the IEEE floating-point
 * format, with one sign bit, seven exponent bits (k = 7), and eight fraction bits
 * (n = 8). The exponent bias is 27−1 − 1 = 63.
 * Fill in the table that follows for each of the numbers given, with the following
 * instructions for each column:
 *
 * Hex:    The four hexadecimal digits describing the encoded form.
 * M:      The value of the significand. This should be a number of the
 *         form x or xy , where x is an integer, and y is an integral
 *         power of 2. Examples include: 0, , 67/64 and 1 / 256.
 * E:      The integer value of the exponent.
 * V:      The numeric value represented. Use the notation x or
 *         x × 2z , where x and z are integers.
 */
/*
 * As an example, to represent the number 8 7 , we would have s = 0, M = 7 4 , and
 * E = −1. Our number would therefore have an exponent field of 0x3E (decimal
 * value 63 − 1 = 62) and a significand field 0xC0 (binary 110000002 ), giving a hex
 * representation 3EC0.
 * You need not fill in entries marked “—”.
 *
 * Description                              HEX      M       E       V
 * −0                                                                _
 * Smallest value > 2
 * 512                                                               _
 * Largest denormalized
 * −∞                                                _       _       _
 * Number with hex representation 3BB0      ___
 */

/*
 * My Answer
 *
 * 1)   0x8000        0               -62        -
 * 2)   0x3F01        257/256         0          257 * 2^-8
 * 3)   0x4700        1               63         -
 * 4)   0x00FF        255/256         -62        2^70 * 255
 * 5)   0xFF00        -               -          -
 * 6)   -             13/8            -5         13 * 2^-8
 */


