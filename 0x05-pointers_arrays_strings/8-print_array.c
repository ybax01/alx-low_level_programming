#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array with ',' in between
 * @a: The array
 * @n: num of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
