/*!
 * ◆◆
 * Solution to Homework Problem 2.78 (Page 156)
 *
 * Write code for a function mul5div8
 * but following the bit-level integer coding rules (page 154)
 * replicate the fact that the computation 3*x can cause overflow.
 */

int mul5div8(int x)
{
        // here we invoked previous exercise function */
        return divide_power2((x << 2) + x, 1 << 3);
}
