#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');  /* Imprimer les chiffres de 0 à 9 */

	for (i = 10; i < 16; i++)
		putchar(i - 10 + 'a');  /* Imprimer les lettres a à f */

	putchar('\n');  /* Nouvelle ligne après l'affichage */
	return (0);
}
