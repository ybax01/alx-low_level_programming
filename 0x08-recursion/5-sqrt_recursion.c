#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root
 * @n: The number
 *
 * Return: The natural square root of n, or -1 it doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root of n.
 * @n: The number
 * @x: The current guess
 *
 * Return: same as main sqrt function
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_helper(n, x + 1));
}
