#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal
 * @n: Nombre de fois que le caractère '\' doit être imprimé
 *
 * Description: Si n est supérieur à 0, la fonction affiche une diagonale
 * Si n est 0 ou moins, la fonction imprime uniquement un retour à la ligne.
 */
void print_diagonal(int n)
{	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)  /* Pour chaque ligne */
	{
		for (j = 0; j < i; j++)  /* Affiche des espaces avant '\' */
		{
			_putchar(' ');
		}
		_putchar('\\');  /* Affiche le caractère '\' */
		_putchar('\n');
	}
}
