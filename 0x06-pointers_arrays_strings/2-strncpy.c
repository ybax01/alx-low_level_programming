#include "main.h"

/**
 * _strncpy - Copies a max of n bytes to a string from another
 * @dest: destination
 * @src: source
 * @n: Max number of bytes to copy
 * Return: New string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- > 0 && *src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	return (dest);
}
