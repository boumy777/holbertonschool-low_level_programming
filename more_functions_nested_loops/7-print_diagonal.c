#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal
 * @n: Nombre de fois que le caractère '\' doit être imprimé
 *
 * Description: Si n est supérieur à 0, la fonction affiche une
 * diagonale en décalant chaque '\' d'un espace supplémentaire.
 * Si n est 0 ou moins, elle imprime seulement un retour à la ligne.
 */
void print_diagonal(int n)
{	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' '); /* Ajoute les espaces pour le décalage */
		_putchar('\\'); /* Affiche le caractère '\' */
		_putchar('\n'); /* Passe à la ligne suivante */
	}
}
