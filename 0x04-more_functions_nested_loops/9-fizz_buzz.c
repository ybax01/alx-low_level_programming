#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
		i++;
	}
	return (0);
}
