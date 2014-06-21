/*!
 * ◆◆
 * Solution to Homework Problem 2.58 (Page 153)
 *
 * Write a Procedure is_big_endian that will return 1 when compiled and 
 * run on a big-endian- machine, and will return 0 when compiled and run
 * on a little-endian machine. This program should run on any machine,
 * regardless of its word size.
 */

/*
 * There are many ways to solve this problem. The basic idea is to
 * create some multi-byte datum with different values for the most and
 * least-significant bytes. We then read byte 0 and determine which byte
 * it is.
 *
 * In The following solution is to create an int with value 1. We then
 * access its first byte and convert it to an int. Tis byte will equal
 * `0` an big-endian machine and `1` on little-endian machine.
 */

#include <stdio.h>

int is_litter_endian(void)
{
    /* MSB = 0, LSB = 1 */
    int x = 1;
    /* Return MSB when big-endian, LSB when little-endian */
    return (int) (* (char *) &x);
}

int is_big_endian(void)
{
    int w = sizeof(int) << 3;
    /* MSB = 1, LSB = 0 */
    int x = 1 << (w - 8);
    return (int) (* (char *) &x);
}

int main(void)
{
    printf("Current C program run in the ");

    is_litter_endian() && printf("little-endian machine.\n");
    is_big_endian() && printf("big-endian machine.\n");

    getchar();
    return 0;
}
