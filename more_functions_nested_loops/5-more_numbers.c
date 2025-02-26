#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14
 *
 * Description: Cette fonction affiche les nombres de 0 à 14
 * sur 10 lignes, avec un retour à la ligne après chaque série.
 */
void more_numbers(void)
{	int i, j;

	for (i = 0; i < 10; i++)  /* Boucle pour 10 lignes */
	{
		for (j = 0; j <= 14; j++)  /* Boucle pour 0 à 14 */
		{
			if (j >= 10)  /* Si le nombre a deux chiffres, afficher le premier */
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');  /* Afficher le chiffre des unités */
		}
		_putchar('\n');  /* Nouvelle ligne après chaque série */
	}
}
