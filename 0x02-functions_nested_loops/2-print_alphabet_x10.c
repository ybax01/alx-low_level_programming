#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: NULL
 */
void print_alphabet_x10(void)
{
	int j = 0;
	while(j != 10)
	{
		print_alphabet();
		j++;
	}
}
