#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st str
 * @s2: 2nd str
 * Return: Positive if bigger, negative is smaller, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
