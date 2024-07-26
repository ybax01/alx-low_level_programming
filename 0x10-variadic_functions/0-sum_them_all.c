#include <stdarg.h>

/**
 * sum_them_all - function that sums all its arguments
 * @n: the numbers
 * Return: sum if good, 0 if not
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
