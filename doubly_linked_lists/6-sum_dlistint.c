#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Renvoie le nœud à l'index donné dans une liste
 *                          doublement chaînée.
 * @head: Pointeur vers le début de la liste
 * @index: L'index du nœud (commence à 0)
 *
 * Return: Le nœud à l'index donné, NULL si l'index n'existe pas,
 *         ou 0 si la liste est vide.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}

