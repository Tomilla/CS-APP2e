/*!
 * ◆◆◆◆
 * Solution to Homework Problem 2.65 (Page 156)
 *
 * Write code to implement the following function:
 *
 * // Return 1 when x contains an odd number of 1s; 0 otherwise.
 * // Assume w = 32.
 *
 * int odd_ones(unsigned x);
 *
 * Your function should follow the bit-level integer coding rules (page
 * 150), except that you may assume that data type int has w = 32 bits.
 * Your code should contain a total of at most 12 arithmetic, bit-wise,
 * and logical operations.
 */

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}


static void echo(char *str)
{
        printf("#Region\n");
        printf("%s\n", str);
        printf("#EndRegion\n");
}

int odd_ones(unsigned  x)
{
        x ^= x >> 16;
        x ^= x >>  8;
        x ^= x >>  4;
        x ^= x >>  2;
        x ^= x >>  1;
        return x & 1;
}

int even_ones(unsigned x)
{
        return !odd_ones(x);
}

int main(void)
{
        int test_hex_0 = 0x10010001; /* 0x1 */

        (odd_ones(test_hex_0)) &&
                (printf("x contains an odd number of 1s.\n"));
        (even_ones(test_hex_0)) &&
                (printf("x contains an even number of 1s.\n"));

        getchar();
        return 0;
}

/*
 * EPILOGUE
 *
 * Those limited operations count are make this problem more interesting
 * , challenging, To solved this problem, we need several tricks that
 * the above code exploits bit-wise exclusive OR recursively compare the
 * parity of all bits. It compare the two half-bits of x, then the two
 * low-order byte, then the low-order 4-bits, and so on;
 *
 * Node that the last compare statement store the result on the least
 * significant bit, here we mask off the high-order bits to get the
 * final result.
 */
