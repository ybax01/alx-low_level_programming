#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, here in particular, it's printf the source's filename
 * Return: Usual stuff
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
