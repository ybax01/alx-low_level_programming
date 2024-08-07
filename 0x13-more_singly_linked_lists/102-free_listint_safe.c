#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list that can contain loops.
 * @h: double pointer to the head of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;
	listint_t *nodes[1024]; /* array to store pointers to nodes */
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == current)
			{
				*h = NULL;
				return (count);
			}
		}

		nodes[count] = current;
		count++;

		temp = current->next;
		free(current);
		current = temp;
	}

	*h = NULL;
	return (count);
}

