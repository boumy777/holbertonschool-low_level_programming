#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strspn - Calcule la longueur du préfixe de `s` contenant uniquement `accept`
 * @s: La chaîne d'entrée
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return (count);
}

