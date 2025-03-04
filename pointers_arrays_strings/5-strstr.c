#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strstr - Trouve `needle` dans `haystack`
 * @haystack: Chaîne principale
 * @needle: Sous-chaîne recherchée
 *
 * Return: Pointeur vers `needle`, ou NULL
 */
char *_strstr(char *haystack, char *needle)
{	char *h, *n;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
