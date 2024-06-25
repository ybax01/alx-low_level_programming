#include "main.h"

/**
 * _islower - Checks if char is lowercase
 * @c: The char to check
 *
 * Return: 1 if yes, 0 if no
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
