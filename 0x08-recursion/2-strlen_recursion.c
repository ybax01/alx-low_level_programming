#include "main.h"

/**
 * _strlen_recursion - calculate string's length
 * @s: pointer to string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
