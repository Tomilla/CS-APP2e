/*
 * ◆◆◆
 * Solution to Homework Problem 2.79 (Page 155)
 *
 * Write code for a function fiveeighths that , for integer argugments x,
 * computes the value of 5x/8, rounded toward zero. It should not overflow,
 * Your function should follow the bit-level integer coding rules(page 154)
 */

int fiveeigthths(int x)
{
        return (x >> 3) + (x >> 1);
}
