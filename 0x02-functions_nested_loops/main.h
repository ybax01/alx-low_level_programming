#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);

void print_alphabet(void)
{
	char c='a';

	while (c=!('z'+1))
	{
		_putchar(c);
		c[0]=c[0]+1;
	}
	_putchar('\n');
}
