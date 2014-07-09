/*!
 * ◆◆
 * Solution to Homework Problem 2.70 (Page 157)
 *
 * Write code for the function with the following prototype:
 *
 * * Write return 1 when x can represented as an n-bit, 2's complement
 * * number; 0 otherwise
 * * Assume 1 <= n <= w
 *
 * int fits_bits(int x, int n)
 *
 * Your functions should follow the bit-level integer coding rules(page
 * 154).
 */

#include <stdio.h>
#include <assert.h>

int fits_bits(int x, int n)
{
        /* we construct a bit-pattern <w ... n ... 0>, in witch *
         * <w ... n> is all ones, <n - 1  ... 0> is all zero.   */
        int mask = ~((1 << (n - 1)) - 1);
        /* clear all but higher (w-n) bits of `x` */
        x &= mask;
        /* return true if x bit-pattern is all zero, or all one */
        return !x || x == mask;
}

int main(void)
{
        assert(fits_bits(0xFFFF, 16));
        assert(fits_bits(0x1001, 13));
        assert(fits_bits(0x70000001, 31));

        printf("evaluate successful!");
        getchar();
        return  0;
}
