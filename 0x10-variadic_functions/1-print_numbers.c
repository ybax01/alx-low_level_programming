#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: This function prints the numbers separated by the given
 * separator string. If the separator is NULL, it won't be printed.
 * A new line is printed at the end of the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

