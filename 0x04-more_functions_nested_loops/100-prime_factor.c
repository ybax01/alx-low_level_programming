#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest = 0;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			largest = factor;
			number = number / factor;

			while (number % factor == 0)
			{
				number = number / factor;
			}
		}
		factor++;
	}

	printf("%ld\n", largest);

	return (0);
}
