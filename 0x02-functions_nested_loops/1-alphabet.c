#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints the entire alphabet in lowercase
 *
 * Return: Always 0.
 */
 
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
}
