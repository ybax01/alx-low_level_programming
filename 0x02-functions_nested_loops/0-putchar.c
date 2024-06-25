#include "_putchar.c"

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	char d[] = "_putchar";
	int i = 0;

	while (i != 8)
	{
		_putchar(d[i]);
		i++;
	}
	return (0);
}
