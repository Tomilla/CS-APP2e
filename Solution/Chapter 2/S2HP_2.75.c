/*
 * 2.75 ◆◆◆
 * Suppose we want to compute the complete 2w-bit representation of x . y,
 * where both x and y are unsigned, on a machine for which data type unsigned
 * is w bits. The low-order w bits of the product can be computed with the
 * expression x*y, so we only require a procedure with prototype unsigned
 *
 * int unsigned_high_prod(unsigned x, unsigned y);
 *
 * that computes the high-order w bits of x . y for unsigned variables.
 *   We have access to a library function with prototype
 *
 * int signed_high_prod(int x, int y);
 *
 * that computes the high-order w bits of x . y for the case where x and
 * y are in two’s-complement form. Write code calling this procedure to
 * implement the function for unsigned arguments. Justify the correctness
 * of your solution.
 *
 *   Hint: Look at the relationship between the signed product x . y and
 * the unsigned product x . y in the derivation of Equation 2.18.
 */

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
        int w = sizeof(int) << 3;
        return signed_high_prod(x, y) +
               ((int) y >> (w - 1)) & x + /* lower w-bit */
               ((int) x >> (w - 1)) & y;  /* higher w-bit */
}

