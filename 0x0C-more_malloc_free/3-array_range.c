#include "main.h"
#include <stdlib.h>

/**
 * array_range - makes array of numbers with a determined range
 * @min: start
 * @max: end
 * Return: pointer to created array, null if error
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
