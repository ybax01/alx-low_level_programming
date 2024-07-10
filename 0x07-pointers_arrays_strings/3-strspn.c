#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string
 * @accept: the str with stuff to match
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int count = 0;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (!*p)
			break;
		s++;
	}

	return (count);
}
