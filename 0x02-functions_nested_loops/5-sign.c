#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: The checked number
 *
 * Return: 1,0,-1 if positive, zero or negative respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
