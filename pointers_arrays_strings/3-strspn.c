#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strspn - Mesure le préfixe de `s` composé uniquement de `accept`
 * @s: Chaîne à analyser
 * @accept: Ensemble de caractères autorisés
 *
 * Return: Nombre d'octets du préfixe valide
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
