/*!
 * ◆◆
 * Solution to Homework Problem 2.73 (Page 159)
 *
 * Write code for a fnuction with the following prototype:
 *
 * * Addition that saturates to TMin or TMax *
 * int saturating_add(int x, int y);
 *
 *   Instead of orverflowing tthe way normal two's-complement addition
 * does, saturating addition return TMax when there would be positive
 * overflow , and TMin when there would be negative overflow. Saturating
 * arithmetic is commonly used in programs that perorm digital signal
 * processing.
 *
 *   Your function should follow the bit-level integer coding rule (page
 * 154).
 */
#define TMAX 2147483647
#define TMIN (-TMAX -1)

int staturating_add(int x, int y)
{
        int w = sizeof(x) << 3;
        int sum = x + y;
        int mask = 1 << (w - 1);
        int x_msb = x & mask;
        int y_msb = y & mask;
        int sum_msb = sum & mask;
        int pos_ovf = ~x_msb & ~y_msb & sum_msb;
        int neg_ovf = x_msb & y_msb & !sum_msb;
        (pos_ovf) && (sum = TMAX);
        (neg_ovf) && (sum = TMIN);

        return sum;
}
