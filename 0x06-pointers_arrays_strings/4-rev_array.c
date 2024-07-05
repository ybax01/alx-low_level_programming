#include "main.h"

/**
 * reverse_array - self explanatory
 * @a: adress of array start
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k;

	while (i < n / 2)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
		i++;
	}
}
