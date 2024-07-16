#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * create_array - create an arrat with mem allocation
 * @size: size of the array
 * @c: character to initialize
 * Return: pointer to array, or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
