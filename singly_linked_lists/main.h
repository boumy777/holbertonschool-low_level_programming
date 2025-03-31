#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_s - Liste simplement chaînée
 * @str: Chaîne de caractères (allouée avec malloc)
 * @len: Longueur de la chaîne
 * @next: Pointe vers le nœud suivant
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /*LISTS_H*/
