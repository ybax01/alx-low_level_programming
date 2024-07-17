#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup_str = malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
