#include <stdio.f>
#include <lists.h> 

 /**
  *print_list - Affiche tous les éléments d'une liste de type list_t
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Le nombre de nœuds
 */

	size_t print_list (const list_t*h)
{
	size_t count=0
		while(h)
	{
		count++;
		h=h - >next;

	}

	return (0);

}
