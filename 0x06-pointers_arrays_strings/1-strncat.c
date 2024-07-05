#include "main.h"

/**
 * _strncat - Concatenates two strings but has a max of n bytes concatenated
 * @dest: destination
 * @src: source
 * @n: Max number of bytes to add
 * Return: New string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
