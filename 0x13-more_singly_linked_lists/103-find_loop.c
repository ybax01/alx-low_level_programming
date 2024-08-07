#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			listint_t *entry = head;
			while (entry != slow)
			{
				entry = entry->next;
				slow = slow->next;
			}
			return (entry);
		}
	}

	return (NULL);
}

