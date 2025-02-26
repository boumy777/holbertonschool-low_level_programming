#include "main.h"

/**
 * print_square - Dessine un carré sur le terminal
 * Description: Si la taille est supérieure à 0 la fonction imprime un carré
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)  /* Pour chaque ligne */
	{
		for (j = 0; j < size; j++)  /* Pour chaque caractère de la ligne */
		{
			_putchar('#');  /* Affiche le caractère # */
		}
		_putchar('\n');
	}
}

