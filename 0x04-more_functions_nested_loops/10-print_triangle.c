#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size using the # character.
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
