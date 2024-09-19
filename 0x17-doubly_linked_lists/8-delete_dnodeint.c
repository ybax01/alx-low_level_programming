#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Special case: delete the head node */
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node before the deletion point */
	current = *head;
	for (count = 0; current != NULL && count < index; count++)
	{
		current = current->next;
	}

	/* If the index is out of range */
	if (current == NULL)
		return (-1);

	/* Adjust the pointers to delete the node */
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
