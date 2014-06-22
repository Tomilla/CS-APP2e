/*!
 * ◆◆
 * Solution to Homework Problem 2.59 (Page 154)
 *
 * Write a C expression that will yield a word consisting of of the
 * least significant byte of y and the remaining bytes of x. For
 * operands x = 0x89ABCDEF and y = 0x76543210, this would give
 * 0x89ABCD10.
 */

/*
 * This is a simple exercise in masking and bit manipulation. It is
 * important to mention that `~0xFF` is a way to generate a mask that
 * selects all but the least significant byte that work for any word
 * size.
 */

#include <stdio.h>

int is_litter_endian(void)
{
        /* MSB = 0, LSB = 1 */
        int x = 1;
        /* Return MSB when big-endian, LSB when little-endian */
        return (int) (* (char *) &x);
}

/* Run in the big-endian machine */
int mask_lsb(int x, int y)
{
        return (x & 0xFF) | (y & ~0xFF);
}

/* Run in the little-endian machine */
int mask_msb(int x, int y)
{
        int w = sizeof(int) << 3;
        return ( x & ~0xFF) | (y & (0xFF));
}

int main(void)
{
        int test_hex_0 = 0x89ABCDEF;
        int test_hex_1 = 0X76543210;
        int result = mask_lsb(test_hex_0, test_hex_1);

        (is_litter_endian()) &&
                (result = mask_msb(test_hex_0, test_hex_1));
        printf("%X\n", result);

        getchar();
        return 0;
}
