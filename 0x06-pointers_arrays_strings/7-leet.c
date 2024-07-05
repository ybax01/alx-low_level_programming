#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: String
 * Return: Result
 */
char *leet(char *str)
{
	char *ptr = str;
	char leettab[] = "4307143071";
	char letters[] = "aeotlAEOTL";
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (*ptr == letters[i])
			{
				*ptr = leettab[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
