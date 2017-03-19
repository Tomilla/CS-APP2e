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

int test_option_d(int x) {
        /*
                if sizeof(int) == 4

                4 - 1 = 3
                3 << 3

                011 << 3 = 011000
                011000 = 16 + 8 = 24 (32 - 8)
        */
        int shift_val = (sizeof(int) - 1) << 3;
    
        /*
                E.x: 32bit representation

                int 5
                0000 0000 0000 0000 0000 0000 0000 0101 >> 24
                We get the last byte (eight bits) = 0000 0000

                0000 0000 & 1111 1111 = 0000 0000

                int -5
                1111 1111 1111 1111 1111 1111 1111 1011  >> 24
                We get the last byte (eight bits) = 1111 1111

                1111 1111 & 1111 1111 = 1111 1111
        */
        
        return !(x >> shift_val);
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

/*!
 * EPILOGUE
 *
 * This exercises require thinking about the logical operation `!` in a
 * nontraditional way. Normally we think of it as logical negation. More
 * generally, it detects weather there is any nonzero bit in a word.
 */
