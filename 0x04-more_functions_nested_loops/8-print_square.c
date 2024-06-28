#include "main.h"

/**
 * print_square - prints a square
 * @n: size
 *
 * Return: Nothing
 */
void print_square(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		while (j < n)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
