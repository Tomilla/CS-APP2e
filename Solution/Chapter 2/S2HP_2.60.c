/*!
 * ◆◆
 * Solution to Homework Problem 2.69 (Page 154)
 *
 * Suppose we number the bytes in a w-bits from 0 (least significant) to
 * w / 8 - 1 (most significant). Write code for the following C function,
 * which will return an unsigned value in which byte i of argument x
 * have been replaced by byte b:
 *
 * unsigned put_byte (unsigned x, unsigned char b, int i);
 *
 * Here is some examples showing how the function should work:
 *
 * replaced_byte(0x12345678, 0xAB, 2) --> 0x12AB5678
 * replaced_byte(0x12345678, 0xab, 0) --> 0x123456AB
 */

#include <stdio.h>

int replaced_byte(unsigned x, unsigned char b, int i)
{

        int i_times_8 = i << 3;
        unsigned mask = 0xFF << i_times_8;
        return (x & ~mask) | (b << i_times_8);

        /* one-line compact version */
        //return ( x & ~(0xFF << (i << 3))) | (b << (i << 3));
}

int main(void)
{
        int assert_result;

        assert_result = 0x12AB5678;
        !(assert_result ^ replaced_byte(0x12345678, 0xAB, 2)) &&
                (printf("First example test successful!\n"));

        assert_result = 0x123456AB;
        !(assert_result ^ replaced_byte(0x12345678, 0xAB, 0)) &&
                (printf("Second example test successful!\n"));

        getchar();
        return 0;
}

/*
 * EPILOGUE
 *
 * Byte extraction and insertion code is useful in many contexts. Being
 * able to write this sort of code is an important skill to foster.
 */
