#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4
 *
 * Description: Cette fonction utilise `_putchar` pour afficher
 * les chiffres de 0 à 9, en sautant 2 et 4, suivis d'un retour à la ligne.
 * Elle respecte la contrainte d'utiliser `_putchar` seulement deux fois.
 */
void print_most_numbers(void)
{	char numbers[] = "01356789\n";
	char *ptr = numbers;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}
