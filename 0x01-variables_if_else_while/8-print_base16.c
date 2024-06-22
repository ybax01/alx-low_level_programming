#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *   Prints all hexadecimal digits in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';

	/* Print digits '0' to '9' */
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	/* Print lowercase letters 'a' to 'f' */
	digit = 'a';
	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
