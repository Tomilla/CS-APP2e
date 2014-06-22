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
        return ( x & ~(0xFF << (i << 3))) | (b << (i << 3));
}

int main(void)
{
        int result;
        result = replaced_byte(0x12345678, 0xAB, 2);
        printf("%X\n", result);

        result = replaced_byte(0x12345678, 0xab, 0);
        printf("%X\n", result);

        getchar();
        return 0;

}

