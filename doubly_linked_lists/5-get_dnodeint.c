#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint - Returns the node at a specific index in a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: The index of the node, starting from 0
 *
 * Return: The node at the given index, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}

