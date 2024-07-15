#include <stdio.h>
#include "main.h"

/**
 * create_array - create an arrat with mem allocation
 * @size: size of the array
 * @c: character to initialize
 * Return: pointer to array, or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *p;

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	*p = c;
}
