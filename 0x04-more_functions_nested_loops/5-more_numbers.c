#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times, with a newline
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char n = '0';
	int i = 0;

	while (i < 10)
	{
		n = '0';
		while (n <= '9')
		{
			_putchar(n);
			n++;
		}
		n = '0';
		while (n <= '4')
		{
			_putchar('1');
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
