/*
 * ◆◆
 * Solution to Homework Problem 2.80 (Page 160)
 *
 * Write C expressions to generate the bit patters than follow, where a^n
 * represents n repetitions of symbol a. Assume a w-bit data type. Your
 * code may contain a parameter representing w.
 *
 * A: 1^w-n 0^n
 * B: 0^w-n 1^n 0^m
 */

/*
 * My Solution
 *
 * A: (~0) << n or ~((1 << n) - 1)
 * B: ((1 << n) - 1) << m
 */

