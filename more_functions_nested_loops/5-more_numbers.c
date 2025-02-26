#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14
 *
 * Description: Cette fonction affiche les nombres de 0 à 14
 * sur 10 lignes, avec un retour à la ligne après chaque série.
 * Elle utilise `_putchar` seulement 3 fois.
 */
void more_numbers(void)
{	 int i, j;
	char buffer[32]; /* Un buffer assez grand pour stocker 0-14 + '\n' */
	char *ptr;

	for (i = 0; i < 10; i++)
	{
		ptr = buffer;
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				*ptr++ = (j / 10) + '0'; /* Stocke la dizaine */
			*ptr++ = (j % 10) + '0'; /* Stocke l’unité */
		}
		*ptr++ = '\n'; /* Ajoute le retour à la ligne */
		*ptr = '\0'; /* Termine la chaîne */
		/* Utilise _putchar seulement 3 fois */
		for (ptr = buffer; *ptr; ptr++)
			_putchar(*ptr);
	}
}
