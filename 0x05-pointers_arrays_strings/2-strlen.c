#include "main.h"

/**
 * _strlen - count length of string
 * @s: adress of string start
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
