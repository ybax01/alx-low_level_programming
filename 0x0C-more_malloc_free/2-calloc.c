#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: numb of blocks
 * @size: block size
 * Return: pointer to new array, null if a problem occurs
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
