#include "main.h"

/**
 * print_last_digit - As the name emplies
 * @n: the number with the wanted digit
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	if (n<0)
	{
		return ((-n) % 10);
	}
	else
	{
		return (n % 10);
	}
}
