#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num; /* Déclaration de la variable */

	for (num = 0; num < 10; num++) /* Boucle pour afficher 0 à 9 */
		putchar(num + '0'); /* putchar pour convertir en caractère */

	putchar('\n'); /* Ajoute une nouvelle ligne */

	return (0);
}

