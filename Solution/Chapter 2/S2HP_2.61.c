/*!
 * ◆◆
 * Solution to Homework Problem 2.61 (Page 155)
 *
 * Write C expressions that evaluate to 1 when the following conditions
 * are true, and to 0 when they are false. Assume x is of type int.
 *
 * A. Any bit of x equals 1.
 * B. Any bit of x equals 0.
 * C. Any bit in the least significant byte of x equals 1.
 * D. Any bit in the most significant byte of x equals 0.
 *
 * Your code should follow the bit-level integer coding rules (page 120)
 * , with the additional restriction that you may not use equality (==)
 * or inequality (!=) tests.
 */

#include <stdio.h>

static void echo(char *str)
{
        printf("%s\n", str);
}

int test_option_a(int x)
{
        return !!x; /* Or `!~x`*/
}

int test_option_b(int x)
{
        return !x; /* Or !!~x */
}

int test_option_c(int x)
{
        return !!(x & 0xFF);
}

int test_option_d(int x)
{
        return !!(~x & 0xFF);
}

int main(void)
{
        int w = sizeof(int) << 3;

        int any_bit_eql_1 = ~0;
        int any_bit_eql_0 =  0;
        int any_bit_in_lsb_eql_1 = 0xFF;
        int any_bit_in_msb_eql_0 = 0xFF << (w - 8);

        (test_option_a(any_bit_eql_1)) && (printf("Option A pass\n"));
        (test_option_b(any_bit_eql_0)) && (printf("Option B pass\12"));
        (test_option_c(any_bit_in_lsb_eql_1)) &&
                (printf("Option C pass\n"));
        (test_option_d(any_bit_in_msb_eql_0)) &&
                (printf("Option D Pass\n"));

        getchar();
        return 0;
}
