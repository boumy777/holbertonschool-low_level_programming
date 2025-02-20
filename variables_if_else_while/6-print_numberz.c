#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num; /* Variable de type int pour stocker les chiffres */

	for (num = 0; num < 10; num++)
		putchar(num + '0'); /* Convertit l'entier en caractère et l'affiche */

	putchar('\n'); /* Ajoute une nouvelle ligne après l'affichage des chiffres */

	return (0);
}
