#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of the number, or -1 if the number does not
 * have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - a helper function to calculate the square root
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of the number, or -1 if the number does not
 * have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}
