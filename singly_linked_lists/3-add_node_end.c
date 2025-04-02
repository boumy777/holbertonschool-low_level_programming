#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Ajoute un nœud à la fin d'une liste chaînée
 * @head: Pointeur vers le pointeur du premier nœud de la liste
 * @str: Chaîne de caractères à dupliquer et stocker dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}

