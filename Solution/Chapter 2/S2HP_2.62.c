/*!
 * ◆◆◆
 * Solution to Homework Problem 2.62 (Page 155)
 *
 * Write a function int_shifts_are_logical() that yields 1 when run on a
 * machine that uses logical right shifts for data type int and yields 0
 * otherwise. Your code should work on a machine with any word size.
 * Test your cod on several machines.
 */

#include <stdio.h>

int int_shifts_are_arithmetic(void)
{
        int x = ~0; /* All 1's */

        return (x >> 1) == x;
}

int int_shifts_are_logical(void)
{
        int x = ~0;
        x >>= 1;

        return !!(~x);
}

int main(void)
{
        printf("Current C program running on the ");

        (int_shifts_are_logical()) &&
                (printf("machine that use logical shifts.\n"));

        (int_shifts_are_arithmetic()) &&
                (printf("machine that use arithmetic shifts.\n"));

        getchar();
        return 0;
}

/*!
 * EPILOGUE
 *
 * There are many solutions to solve this problem, but it's a little bit
 * tricky to write one that works for any word size. The above code is
 * our solution that perform a right shift of a word in which all bits
 * are sit to 1. If the shift mode is arithmetic, the resulting word
 * will still have all bits set to 1.
 */
