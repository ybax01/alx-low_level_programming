#include <stdio.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argv[1] * argv [2]);
	return (0);
}
