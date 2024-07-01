#include "main.h"

/**
 * swap_int - swaps two vars values
 * @a: first var
 * @b: second var
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
