#include "main.h"

/**
 * print_last_digit - As the name emplies
 * @n: the number with the wanted digit
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int a = n;

	if (a < 0)
	{
		a = -n;
	}
	a = a % 10;
	return (a);
}
