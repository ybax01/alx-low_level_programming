#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times to print '_'
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
