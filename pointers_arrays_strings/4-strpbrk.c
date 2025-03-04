#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strpbrk - Trouve le premier caractère dans `s` qui est dans `accept`
 * @s: Chaîne à analyser
 * @accept: Ensemble de caractères recherchés
 *
 * Return: Pointeur vers le premier caractère trouvé ou NULL si aucun
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
