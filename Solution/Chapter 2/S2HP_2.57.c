/*!
 * ◆
 * Solution to Homework Problem 2.57 (page 153)
 *
 * Write procedures `show_short`, `show_long`, and `show_double` that
 * print the byte representations of C objects of types short int, long
 * int, and double, respectively, Try these out on several machines.
 *
 * This exercise should be a straightforward variation on the existing
 * code
 */

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_short(short int x)
{
    show_bytes((byte_pointer) &x, sizeof(short int));
}

void show_long(long int x)
{
    show_bytes((byte_pointer) &x, sizeof(long int));
}

void show_double(double x)
{
    show_bytes((byte_pointer) &x, sizeof(double));
}

/*
 * esisting code
 *
    void show_int(int x)
    {
        show_bytes((byte_pointer) &x, sizeof(int));
    }
    void show_float(float x)
    {
        show_bytes((byte_pointer) &x, sizeof(float));
    }

    void show_pointer(void *x)
    {
        show_bytes((byte_pointer) &x, sizeof(void *));
    }
*/

int main(void)
{
    short int s_int =    7;
    long int l_int =    77;
    double d_flt =     777;

    show_short(s_int);
    show_long(l_int);
    show_double(d_flt);

    getchar();
    return 0;
}
