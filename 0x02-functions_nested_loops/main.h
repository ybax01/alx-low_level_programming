#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);

void print_alphabet_x10(void)
{

}

void print_alphabet(void)
{
	char c="abcdefghijklmnopqrtuvwxyz\n";
	int i=0;

	while (c[i] != '\0')
	{
		_putchar(c);
		i++;
	}
	_putchar(c[i]);
}
