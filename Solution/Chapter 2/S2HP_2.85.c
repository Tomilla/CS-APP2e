/*
 * ◆
 * Solution to Homework Problem 2.84 (Page 162)
 * Intel-compatible processors also support an “extended precision” floating-
 * point format with an 80-bit word divided into a sign bit, k = 15 exponent
 * bits, a single integer bit, and n = 63 fraction bits. The integer bit is
 * an explicit copy of the implied bit in the IEEE floating-point represent-
 * ation. That is, it equals 1 for normalized values and 0 for denormalized
 * values. Fill in the following table giving the approximate values of some
 * “interesting” numbers in this format:
 *
 *                                                      Extended precision
 * Description                                          Value    Decimal
 *
 * Smallest positive denormalized                       _____    _______
 * Smallest positive normalized                         _____    _______
 * Largest normalized                                   _____    _______
 */

/*
 * My Answer
 *
 * 1) 2^-63 * 2^(-2^14+2)               3.6452e-4951
 * 2) 2^(-2^14+2)                       3.3621e-4932
 * 3) (1-2^-64) * 2^2^14                1.1897e+4932
 */
