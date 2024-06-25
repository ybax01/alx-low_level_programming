#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int j=0;
	while(j != 10)
	{
		print_alphabet();
		j++;
	}
}

void print_alphabet(void)
{
	char c[]="abcdefghijklmnopqrtuvwxyz\n";
	int i=0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar(c[i]);
}
