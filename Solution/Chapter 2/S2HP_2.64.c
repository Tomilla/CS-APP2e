/*!
 * ◆
 * Solution to Homework Problem 2.64 (Page 156)
 *
 * Write code to implement the following functions:
 *
 * // Return 1 when any even bit of x equals 1; 0 otherwise
 * // Assume w = 32;
 *
 * int odd_one(unsigned x);
 *
 * Your function should follow the bit-level integer coding rules (page
 * 150), except that you may assume that data type int has w = 32 bits.
 */

#include <stdio.h>

int even_one(unsigned x)
{
        /* offset form 0, 0th bit is first even bit */
        return !!(x & 0x55555555);
}

int odd_one(unsigned x)
{
        /* offset form 0, 1st bit is first odd bit */
        return !!(x & 0xAAAAAAAA);
}

/* test driver */
int main(void)
{
        int test_hex_0 = 0x2; /* Or 0x1 */

        printf("the even position of the bit patterns of x ");

        (even_one(test_hex_0)) &&
                (printf("have include one."));
        (odd_one(test_hex_0)) &&
                (printf("haven't include one."));

        getchar();
        return 0;
}

/*
 * EPILOGUE
 *
 * a simple implement of exploits bit-wise AND operations execute bit
 * patterns matching.
 */
