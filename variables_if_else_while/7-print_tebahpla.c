#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter); /* Affiche chaque lettre en minuscule à l'envers */

	putchar('\n'); /* Ajoute une nouvelle ligne après l'affichage */

	return (0);
}
