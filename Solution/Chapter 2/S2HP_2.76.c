/*
 * ◆◆
 * Solution to Homework Problem 2.76 (Page 160)
 *
 * Suppose we are given the task of generating code to multiply integer variable x
 * by various different constant factors K. To be efficient, we want to use only the
 * operations +, -, and <<. For the following values of K, write C expressions to
 * perform the multiplication using at most three operations per expression.
 *
 * A. K = 5:
 * B. K = 9:
 * C. K = 30:
 * D. K = −56:
 */

/*
 * My Answer
 *
 * A. K = x << 2 + x;
 * B. K = x << 3 + x;
 * C. K = (x << 5) - (x << 1);
 * D. K = (x << 3) - (x << 6);
 */
