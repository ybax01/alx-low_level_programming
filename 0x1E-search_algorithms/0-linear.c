#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}
	return (-1);
}
