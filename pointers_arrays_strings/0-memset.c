#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec un octet constant
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: Valeur constante à copier
 * @n: Nombre d'octets à remplir
 *
 * Return: Pointeur vers la zone mémoire `s`
 */
char *_memset(char *s, char b, unsigned int n)
{	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;/* Ajout des parenthèses autour du retour */
}
