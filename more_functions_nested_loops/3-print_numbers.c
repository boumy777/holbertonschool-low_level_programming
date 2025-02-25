#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivi d'une nouvelle ligne
 */
void print_numbers(void)
{
	int i;

	/* Boucle pour afficher les chiffres de 0 à 9 */
	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
