#include "main.h"

/**
 * _isalpha - Checks if the character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if a character, 0 if not
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
