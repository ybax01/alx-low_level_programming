#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, handling loops.
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 * If the function fails, exits the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *nodes[1024]; /* array to store pointers to nodes */
	size_t count = 0;
	size_t i;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		nodes[count] = current;
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}

