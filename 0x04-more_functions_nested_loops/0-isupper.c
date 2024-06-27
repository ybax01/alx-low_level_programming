#include "main.h"

/**
 * _isupper - Checks if the character is uppercase
 * @c: The character to check
 *
 * Return: 1 if yes, 0 if no
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
