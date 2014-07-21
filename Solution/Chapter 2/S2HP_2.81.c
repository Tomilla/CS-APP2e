/*
 * ◆
 * Solution to Homework Problem 2.81 (Page 160)
 *
 * We are running programs on a machine where values of type int are 32-
 * bits. Theyare represented in two’s complement, and they are right shifted
 * arithmetically. Values of type unsigned are also 32 bits.
 *
 * We generate arbitrary values x and y, and convert them to unsigned values as
 * follows:
 *
 * * Create some arbitrary values *
 * int x = random();
 * int y = random();
 *
 * * Convert to unsigned *
 * unsigned ux = (unsigned) x;
 * unsigned uy = (unsigned) y;
 *
 * For each of the following C expressions, you are to indicate whether or
 * not the expression always yields 1. If it always yields 1, describe the underlying
 * mathematical principles. Otherwise, give an example of arguments that make it
 * yield 0.
 *
 * A. (x<y) == (-x>-y)
 * B. ((x+y)<<4) + y-x == 17*y+15*x
 * C. ~x+~y+1 == ~(x+y)
 * D. (ux-uy) == -(unsigned)(y-x)
 * E. ((x >> 1) << 1) <= x
 */

/*
 * My Answer
 *
 * A: FALSE, i.e. 1 > INT_MIN != -1 < -INT_MIN
 * B: TRUE. Suffice multiple distribution.
 * C: FALSE. ~(1100) + ~(1100) != ~(11000)
 * D: TRUE. Unsigned and sign numeral bit pattern is completely identical.
 * E: TRUE. Arithmetically shift right clear the least significant bit, even
 *    numeral is not changed, but old numeral decreasing 1.
 */
