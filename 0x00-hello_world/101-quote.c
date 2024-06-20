#include <unistd.h>

/**
 * main - entry point
 * Return: 1 if successful
 */
int main(void)
{
	char mess[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, mess, sizeof(mess) - 1);
	return (1);
}
