#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string
 * @accept: the str with stuff to match
 *
 * Return: The number of bytes
 */
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing characters to match in s.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
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

	return count;
}
