#include "main.h"

/**
 * rev_string - reverse string
 * @s: adress of string start
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *c;

	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	i--;
	j = 0;
	while (i != -1)
	{
		s[j] = c[i];
		i--;
		j++;
	}
	s[j] = '\0';
}
