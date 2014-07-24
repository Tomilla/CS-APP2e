/* ◆
 * Solution to Homework Problem 2.84 (Page 162)
 *
 * Given a floating-point format with a k-bit exponent and an n-bit fraction,
 * write formulas for the exponent E, significand M, the fraction f , and
 * the value V for the quantities that follow. In addition, describe the
 * bit representation.
 *
 * A. The number 5.0
 * B. The largest odd integer that can be represented exactly
 * C. The reciprocal of the smallest positive normalized value
 */

/*
 * My Answer
 *
 * A: E = 2, M = 1.25, f = 0.25, V = 101
 * B: E = n, M = 1.1...1, f = 1...1, V = 2^E * M (2^(k-1) > n)
 * C: E = -2^(k-1) + 2, M = 1, f = 0, V = 2^(2-2^(k-1))
 *
 */
