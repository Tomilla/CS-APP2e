/*!
 * ◆◆
 * Solution to Homework Problem 2.68 (Page 157)
 *
 * // Mask with least significant n bits set to 1
 * // Examples: n = 6 --> 0x2F, n = 17 --> 0x1FFFF
 * // Assume 1 <= n <= w
 *
 * int lower_one_mask(int n);
 * Your function should follow the bit-level integer coding rules (page
 * 120). Be careful of the case n = w.
 */

#include <stdio.h>
#include <assert.h>

int lower_one_mask(int x, int n)
{
//      int mask = ((1 << n - 1) << 1) - 1;
        int mask = (2 << (n - 1)) - 1;

        /* Ideas 1: Clear all but least significant n bit of x */
        return mask & x;

        /* Ideas 2: Set least significant n bit of x into ones */
//      return mask | x;

}

int main(int argc, char **argv)
{
        assert(lower_one_mask(0x7F, 6) == 0x3F);
        assert(lower_one_mask(0x3FFFF, 17) == 0x1FFFF);

        printf("Assertion successful :)\x0A");
        getchar();
        return 0;
}

/*\
 * EPILOGUE
 *
 * In this exercise, I include a cool library <assert.h>, this will be
 * really come in handy when you need check(or diagnostic) expression
 * execution result, If given expression is false, this macro then calls
 * `abort` to terminal execution, ant display some useful information:
 * The source filename and line number(come form the preprocessor macros
 * `__FILE__` and `__LINE__`).
 */
