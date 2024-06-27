#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9 except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char n = "0123456789\n";
	int i = 0;
	
	while (i < 11)
	{
		if (n[i] == '2' || n[i] == '4')
		{
			continue;
		}
		_putchar(n[i]);
	}
}
