#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string to a newly allocated space in memory.
 * @dest: The destination where the string is copied.
 * @src: The source string to be copied.
 *
 * Return: The pointer to the destination string.
 */
char *_strcopy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * create_copy - Creates a copy of a string.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the newly allocated space in memory with the copied
 * string, or NULL if memory allocation fails.
 */
char *create_copy(char *src)
{
	char *copy;

	if (src == NULL)
		return (NULL);

	copy = malloc(_strlen(src) + 1);
	if (copy == NULL)
		return (NULL);

	_strcopy(copy, src);

	return (copy);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog in years.
 * @owner: The name of the dog's owner.
 *
 * Return: A pointer to the newly created dog_t, or NULL if the function fails.
 *
 * Description: This function allocates memory for a new dog_t structure
 * and copies the provided name and owner strings into the structure.
 * If any allocation fails, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_name = create_copy(name);
	if (name != NULL && new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Allocate memory and copy the owner */
	new_owner = create_copy(owner);
	if (owner != NULL && new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/* Initialize the new dog structure */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}

