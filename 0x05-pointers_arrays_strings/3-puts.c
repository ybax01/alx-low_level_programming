#include "main.h"

/**
 * _puts - prints string
 * @s: adress of string start
 *
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
