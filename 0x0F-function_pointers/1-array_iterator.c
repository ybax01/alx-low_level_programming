#include <stddef.h>

/**
 * array_iterator - Executes a function on each array element
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: Pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
