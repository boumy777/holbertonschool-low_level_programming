#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère une liste chaînée de type list_t
 * @head: Pointeur vers le premier élément de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
