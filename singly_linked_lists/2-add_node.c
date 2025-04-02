#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node retourne un nouvel element dans la liste 
 *@h: double pointeur vers la tête de liste
 *@str: chaîne a duplique dans le noeud 

 *Return: adresse du nouveau noeud ,ou NULL en cas déchec
 */

list_t *add_node(list_t **head, const char *str)

{
       	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
