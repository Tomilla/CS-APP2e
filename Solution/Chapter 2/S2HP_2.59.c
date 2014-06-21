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

/* Run in the big-endian machine */
//int mask_msb(int x, int y)
//{
//    return (x & 0xFF) | (y & ~0xFF);
//}

/* Run in the little-endian machine */
int mask_msb(int x, int y)
{
    int w = sizeof(int) << 3;
    return ( x & ~0xFF) | (y & (0xFF));
}

int main(void)
{
    int testNum_0 = 0x89ABCDEF;
    int testNum_1 = 0X76543210;

    printf("%X\n", mask_msb(testNum_0, testNum_1));

    getchar();
    return 0;
}
