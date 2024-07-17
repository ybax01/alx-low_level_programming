#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k;
	int word_count = 0;
	int len = 0;
	int index = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;

		for (len = 0; str[i + len] != ' ' && str[i + len] != '\0'; len++)
			;

		words[index] = malloc((len + 1) * sizeof(char));
		if (words[index] == NULL)
		{
			for (k = 0; k < index; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[index][j] = str[i++];
		words[index][j] = '\0';
		index++;
	}

	words[index] = NULL;

	return (words);
}
