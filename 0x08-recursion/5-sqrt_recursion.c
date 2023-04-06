#include "main.h"
/**
 * _sqrt_recursion_helper - Helper function for _sqrt_recursion
 * @n: Number to find square root of
 * @guess: Guess for square root
 *
 * Return: Square root if found, -1 otherwise
 */
int _sqrt_recursion_helper(int n, int guess)
{
    if (guess * guess == n)
        return (guess);

    if (guess * guess < n)
        return (_sqrt_recursion_helper(n, guess + 1));

    return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find square root of
 *
 * Return: Square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (_sqrt_recursion_helper(n, 0));
}
