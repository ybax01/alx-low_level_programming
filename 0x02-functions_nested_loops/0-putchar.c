#include "main.h"

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	char d[] = "_putchar\n";
	int i = 0;

	while (d[i] != '\0')
	{
		_putchar(d[i]);
		i++;
	}
	return (0);
}
