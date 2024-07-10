
#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
