#include "main.h"

/**
 * print_line - Dessine une ligne droite sur le terminal
 * @n: Nombre de fois que le caractère _ doit être imprimé
 *
 * Description: Si n est supérieur à 0, la fonction affiche
 * une ligne droite avec le caractère '_'. Si n est 0 ou moins,
 * la fonction imprime seulement un retour à la ligne.
 */
void print_line(int n)
{	int i;  /* Déclare la variable i avant la boucle */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)  /* Utilise la variable i dans la boucle */
	{
		_putchar('_'); /* Affiche le caractère _ */
	}
	_putchar('\n'); /* Ajoute le retour à la ligne à la fin */
}
