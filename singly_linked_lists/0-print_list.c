#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste de type list_t
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}
