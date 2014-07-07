/*!
 * ◆◆◆
 * Solution to Homework Problem 2.69 (Page 157)
 *
 * Write code for a function with the following prototype:
 *
 * * Do rotating left shift. Assume 0 <= n < w
 * * Examples when x = 0x12345678 and w = 32:
 * *
 * * n=4 -> 0x23456781, n=20 -> 0x67812345
 *
 * unsigned rotate_left(unsigned x, int n);
 * Your function should follow the bit-level integer coding rules (page
 * 154). Be careful of the case n = 0.
 */

#include <stdio.h>
#include <assert.h>

int rotate_left(unsigned x, int n)
{
        int w = sizeof(x) << 3;
//      int right = x & ((~0) >> (w - n - 1)) >> 1;
//      int left  = x & ~((1 << n) - 1);
//      return right << n + left;

        return (x >> n) | ((x << (w - n - 1)) << 1);
}

int main(int argc, char **argv)
{
        assert(rotate_left(0x12345678,  4) == 0x81234567);
        assert(rotate_left(0x12345678, 20) == 0x45678123);

        printf("Assertion successful :)\x0A");
        getchar();
        return 0;
}

