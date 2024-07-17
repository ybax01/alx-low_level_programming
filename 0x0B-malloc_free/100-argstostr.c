#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j;
	int total_len = 0;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_len++;
			j++;
		}
		total_len++;
	}

	concat = malloc((total_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat[index++] = av[i][j++];
		}
		concat[index++] = '\n';
	}
	concat[index] = '\0';

	return (concat);
}
