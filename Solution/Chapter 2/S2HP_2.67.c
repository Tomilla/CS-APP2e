/*!
 * ◆◆
 * Solution to Homework Problem 2.67 (Page 156)
 *
 * You are given the task of writing a procedure int_size_is_32() that
 * yields 1 when run on a machine for which an int is 32 bits, and yields
 * 0 otherwise. You are not allowed to use the sizeof operator. Here is
 * a first attempt:
 *
 *  1 // The following code does not run properly on some machines
 *  2 int bad_int_size_is_32() {
 *  3         // Set most significant bit (msb) of 32-bit machine
 *  4         int set_msb = 1 << 31;
 *  5         // Shift past msb of 32-bit word
 *  6         int beyond_msb = 1 << 32;
 *  7
 *  8         // set_msb is nonzero when word size >= 32
 *  9         // beyond_msb is zero when word size <= 32
 * 10         return set_msb && !beyond_msb;
 * 11 }
 *
 * When compiled and run on a 32-bit SUN SPARC, however, this procedure
 * returns 0. The following compiler message gives us an indication of
 * the problem:
 *
 * warning: left shift count >= width of type
 *
 * A. In what way does our code fail to comply with the C standard?
 * B. Modify the code to run properly on any machine for which data type
 *    int is at least 32 bits.
 * C. Modify the code to run properly on any machine for which data type
 *    int is at least 16 bits.
 */

/* MY ANSWERS
 *
 * A: the 32-bits machines undefined bit-wise 32-times.
 *
 * > Quote:
 *   In ISO C99 Chapter 6.5.7, have such description:
 *
 *   If the value of the right operand is negative or is greater than or
 *   equal to the width of of the promoted left operand, the behavior is
 *   undefined.
 *
 * B: We can use `0x10 << 31` or 2 * (0x1 << 31) , this forms expression
 * subtlety avoid compiler secure warning.
 *
 * C:
 *
 * int best_size_is_32(void)
 * {
 *        int set_msb = INT_MIN;
 *        int beyond_msb = 1 << 15;
 *        beyond <<= 15;
 *        beyond <<=  2;
 *        result set_msb && !beyond_msb;
 *  }
 */
