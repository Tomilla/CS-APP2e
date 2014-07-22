/*
 * ◆◆
 * Solution to Homework Problem 2.82 (Page 161)
 *
 * Consider numbers having a binary representation consisting of an infinite
 * string of the form 0.y y y y y y . . ., where y is a k-bit sequence. For
 * example, the binary representation of 1 3 is 0.01010101 . . . (y = 01),
 * while the representation of 5 1 is 0.001100110011 . . . (y = 0011).
 *
 * A. Let Y = B2U k (y), that is, the number having binary representation y.
 * Give a formula in terms of Y and k for the value represented by the
 * infinite string.
 * Hint: Consider the effect of shifting the binary point k positions to the right.
 *
 * B.What is the numeric value of the string for the following values of y?
 *
 * (a) 101
 * (b) 0110
 * (c) 010011
 */

/*
 * My Answer
 *
 * A: We let x as the loop sequence, get following formula
 *    x << k = x + Y, so easy to infer x = Y / (2^k - 1).
 *
 *   Verify:
 *   x =  Y/2^k + Y/2^2k + Y/2^3k + ... + Y/2^nk
 *     = Y(1/2^k  + 1/2^2k + 1/2^3k + ... + 1/2^nk)
 *
 *   include math formula: Y(1/2k * (1 -(1/2^k)^n)
 *
 *   Since (1/2^k)^n -->> 0
 *   So that x = Y/(2^k-1)
 *
 * B:
 *   (a) 1/7
 *   (b) 3/5
 *   (c) 7/63 1/9
 *
 */
