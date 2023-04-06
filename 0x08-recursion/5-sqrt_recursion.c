#include "main.h"

/**
 * sqrt_helper - finds the square root of a number
 * @n: the number to find the square root of
 * @g: the guess to check
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int g)
{
    if (g * g == n)
        return (g);
    if (g * g > n)
        return (-1);
    return (sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqrt_helper(n, 0));
}
