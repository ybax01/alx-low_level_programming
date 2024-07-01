#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: adress of string start
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
