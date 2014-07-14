/*!
 * ◆◆
 * Solution to Homework Problem 2.74 (Page 159)
 *
 * Write a function with the following prototype:
 *
 * * Determine whether arguments can be subtracted without overflow *
 * int tsu_ok(int x, int y)
 *
 * This function should return 1 if the computation x -  y does not overflow.
 */
#include <limits.h>

int tsub_ovf(int x, int y)
{
        int pos_ovf = (x & INT_MIN) && !(y & INT_MIN) &&
                !((x - y) & INT_MIN);
        int neg_ovf = !(x & INT_MIN) && (y & INT_MIN) &&
                ((x - y) & INT_MIN);

        return pos_ovf || neg_ovf;
}
