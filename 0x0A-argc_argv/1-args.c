#include <stdio.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
