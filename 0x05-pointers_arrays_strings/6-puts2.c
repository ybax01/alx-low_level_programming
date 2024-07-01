#include "main.h"

/**
 * puts2 - prints every other char of string string with 1st one
 * @s: adress of string start
 *
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
