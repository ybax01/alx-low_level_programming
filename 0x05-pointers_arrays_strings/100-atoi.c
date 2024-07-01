#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: The string in question
 *
 * Return: The resulting integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		else if (s[i] == '+')
		{

		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (found)
		{
			break;
		}
		i++;
	}
	return (result);
}
