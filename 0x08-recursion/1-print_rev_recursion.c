#include "main.h"

/**
 * _puts_recursion_reverse - prints a string in reverse
 * @s: pointer to string
 */
void _puts_recursion_reverse(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_puts_recursion_reverse(s + 1);
		_putchar(*s);
	}
}
