#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string
 * @c: The char
 *
 * Return: Pointer to 1st occurence if found, NULL if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
