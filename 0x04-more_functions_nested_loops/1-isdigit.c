#include "main.h"

/**
 * _isdigit - Checks if the character is a digit
 * @c: The character to check
 *
 * Return: 1 if yes, 0 if no
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
