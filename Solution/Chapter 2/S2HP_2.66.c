/*!
 * ◆◆◆
 * Solution to Homework Problem 2.66 (Page 156)
 *
 * Write code to implement the following function:
 *
 * // generate mask indeciating leftmost 1 in x. Assume w = 32.
 * // For example 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
 * // If x = 0, then return 0.
 *
 * int leftmost_one(unsigned x);
 *
 * Your function should follow the bit-level integer codinng rules (page
 * 120), except that you may assume that data type int has w = 32 bits.
 *
 * Your code should contain a total of at most 15 arithmetic, bit-wise,
 * logical operations.
 *
 * Hint: First transform x into a bit vector of the form [0...011...1].
 */

#include <stdio.h>

int leftmost_one(unsigned x)
{
        // set the range that from least significant bit to leftmost one
        // bits to zero, i.e. set 0x7F00 to 0x7FFF.
        x |= x >> 16;
        x |= x >>  8;
        x |= x >>  4;
        x |= x >>  2;
        x |= x >>  1;

        /* then generate mask indeciating leftmost 1 in x*/
        /* i.e. 0x7FFF ^ 0x3FFFF = 0x4000 */
        return x ^ (x >> 1);
}

int main(void)
{
        int test_hex_0;
        int assert_ret;

        test_hex_0 = 0XFF00;
        assert_ret = 0x8000;
        !(assert_ret ^ leftmost_one(test_hex_0)) &&
                printf("First example test pass!\n");

        test_hex_0 = 0x6600;
        assert_ret = 0x4000;
        !(assert_ret ^ leftmost_one(test_hex_0)) &&
                printf("Second example test pass!\n");

        getchar();
        return 0;
}

/*
 * EPILOGUE
 */
