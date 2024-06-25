#include "main.h"

/**
 * _islower - Checks if char is lowercase
 *
 * Return: 1 if yes, 0 if no
 */
int _islower(int c)
{
	if (c<='z' && c>= 'a')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
