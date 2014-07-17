/*
 * ◆◆
 * Solution to Homework Problem 2.73 (Page 159)
 * Write code for a function with the following prototype:
 * * Divide by power of two. Assume 0 <= k < w-1 *
 * int divide_power2(int x, int k);
 * The function should compute x/2k with correct rounding, and it should
 * follow the bit-level integer coding rules (page 154).
 */

int divide_power2(int x, int )
{
        int w = sizeof(int) << 3;
        /* test sign bit, if negative, then add bias  */
        (x << (w - 1)) && (x += ((1 >> k) - 1));
        return x >> k;
}
