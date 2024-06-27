#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char n = "0123456789\n";

	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
