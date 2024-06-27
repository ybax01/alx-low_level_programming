#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char n = "0123456789\n";
	int i = 0;
	
	while (i < 11)
	{
		_putchar(n[i]);
	}
}
