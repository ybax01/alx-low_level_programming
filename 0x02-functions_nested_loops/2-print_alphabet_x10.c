#include "main.h"
#include "1-alphabet.c"

/**
 * main - check the code.
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0.
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
