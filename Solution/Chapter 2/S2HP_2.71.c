/*
 * 2.71 ◆
 * You just started working for a company that is implementing a set of
 * procedures to operate on a data structure where 4 signed bytes are
 * packed into a 32-bit unsigned. Bytes within the word are numbered
 * from 0 (least significant) to 3 (most significant). You have been
 * assigned the task of implementing a function for a machine using
 * two’s-complement arithmetic and arithmetic right shifts with the
 * following prototype:
 *
 * * Declaration of data type where 4 bytes are packed *
 * * into an unsigned. *
 *
 * typedef unsigned packed_t;
 *
 * * Extract byte from word. Return as signed integer *
 *
 * int xbyte(packed_t word, int bytenum);
 *
 * That is, the function will extract the designated byte and sign extend
 * it to be a 32-bit int.
 *
 * Your predecessor (who was fired for incompetence) wrote the following code:
 *
 * * Failed attempt at xbyte *
 * int xbyte(packed_t word, int bytenum)
 * {
 *         return (word >> (bytenum << 3)) & 0xFF;
 * }
 *
 * A. What is wrong with this code?
 * B. Give a correct implementation of the function that uses only left
 *    and right shifts, along with one subtraction.
 */

/*
 * My Answer
 *
 * A: Above program cannot handle negation number.
 *
 * B: Correct solution as following code.
 */
#include <stdio.h>
#include <assert.h>
typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum)
{
        /* Move special byte to the most significant byte */
        int byte = word << ((3 - bytenum) << 3);
        /* sign extend to 32 bit int(signed) */
        return byte >> 24;
}

int main(void)
{
        /* Positive Number */
        assert(xbyte(0x80030201, 0) == 0x01);
        assert(xbyte(0x80030201, 1) == 0x02);
        assert(xbyte(0x80030201, 2) == 0x03);
        /* Negation Number */
        assert(xbyte(0x84030201, 3) == 0xFFFFFF84);

        printf("Evaluate Successful\n\xc");
        getchar();
        return  0;
}
