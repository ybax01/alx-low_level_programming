#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints 2nd half of the string
 * @str: adress of string
 *
 */
void puts_half(char *str)
{
	int n = _strlen(str);
	int i;

	if (n % 2 == 0)
	{
		i = n / 2;
	}
	else
	{
		i = (n + 1) / 2
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
