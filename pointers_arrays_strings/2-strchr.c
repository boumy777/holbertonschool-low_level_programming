#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne
 * @s: Pointeur vers la chaîne de caractères
 * @c: Caractère à rechercher
 *
 * Return: Pointeur vers la première occurrence de `c` dans `s`, ou NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0') /* Vérifie si on cherche le caractère nul */
		return (s);

	return (NULL);
}
