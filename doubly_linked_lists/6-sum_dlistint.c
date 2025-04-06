#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - Calcule la somme des valeurs contenues dans une liste
 *                doublement chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 *
 * Return: La somme des valeurs des nœuds. Retourne 0 si la liste est vide.
 */
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head)
	{
		somme += head->n;
		head = head->next;
	}

	return (somme);
}

