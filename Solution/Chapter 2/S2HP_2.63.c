/*!
 * ◆◆◆
 * Solution to Homework Problem 2.63 (Page 155)
 *
 * Fill in code for the following C functions. Function `srl` performs
 * a logical right shift using an arithmetic right shift (given by value
 * xsra), followed by other operations not including right shifts or
 * division. You may use the computation `8 * sizeof(int)` to determine
 * a `w`, the number of bits in data type int, the shift amount k can
 * can range from 0 to `w - 1`.
 */

#include <stdio.h>

#define OK 0
#define NO -1
#define w sizeof(int) << 3

unsigned srl(unsigned x, int k)
{
        /* performs shift arithmetically */
        unsigned xsra = (int) x >> k;

        /* First masking bits constructor */
        unsigned mask = (unsigned) ~0 >> k;

        /* Second masking bits constructor */
        //unsigned mask = ~(~0 << (w - k - 1) << 1);

        /* Third masking bits constructor */
        //unsigned mask = (1 << (w - k - 1));
        //mask += mask -1;

        return xsra & mask;
}

unsigned sra(unsigned x, int k)
{
        /* performs shift logically */
        int xsrl = (unsigned) x >> k;
        int sign = x & 1 << (w - 1);
        int mask = ((1 << k) - 1) << (w - k);
        (sign) && (xsrl |= mask);

        return xsrl;
}

int main(void)
{
        int shift_bits = 3;
        int test_hex_0 = 0x80000000;
        int logical_shift = (unsigned) test_hex_0 >> shift_bits;

        !(logical_shift ^ srl(test_hex_0, shift_bits)) &&
                (printf("Logical shifts simulate successful\n"));

        shift_bits = 7;
        int test_hex_1 = 0xFFFFFFF; /* 0x70000000 */
        int arithmetic_shift = (int) test_hex_1 >> shift_bits;

        !(arithmetic_shift ^ sra(test_hex_1, shift_bits)) &&
                (printf("Arithmetic shifts simulate successful\n"));

        getchar();
        return OK;
}

/*
 * EPILOGUE
 *
 * These problems are fairly tricky.They require generating masks based
 * on the shift amounts. Shift value k equal to 0 must be handled as a
 * special case, since otherwise we would me generating the mask by
 * performing a left shift by 32.
 */
