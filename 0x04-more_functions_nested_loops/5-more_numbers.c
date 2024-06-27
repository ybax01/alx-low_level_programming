#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times, with a newline
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char n[] = "01234567891011121314\n";
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 21)
		{
			_putchar(n[j]);
		}
		i++;
	}
}
