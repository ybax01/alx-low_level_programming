#include "main.h"

/**
 * puts2 - prints every other char of string string with 1st one
 * @str: adress of string start
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
