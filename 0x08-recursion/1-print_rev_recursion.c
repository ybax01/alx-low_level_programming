#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	_prr(s);
	_putchar('\n');
}
void _prr(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_prr(s + 1);
		_putchar(*s);
	}
}
