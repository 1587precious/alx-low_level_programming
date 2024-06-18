#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: If the node does not exist, return NULL.
 *         Otherwise, return the nth node where index starts from 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}
