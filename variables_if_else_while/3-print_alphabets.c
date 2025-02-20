#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

/* Affichage des lettres minuscules */
for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

/* Affichage des lettres majuscules */
for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

/* Affichage d'un retour à la ligne */
putchar('\n');

return (0);
}
