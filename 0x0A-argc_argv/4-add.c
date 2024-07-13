#include <stdio.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
