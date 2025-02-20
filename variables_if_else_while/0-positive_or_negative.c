#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
/*Initialise le générateur de nombres aléatoires*/
n = rand() - RAND_MAX / 2;
/*Génère un nombre aléatoire*/

if (n > 0)
{
printf("%d is positive\n", n);
/*Si n est positif*/
}
else if (n == 0)
{
printf("%d is zero\n", n);
/*Si n est égal à zéro*/
}
else
{
printf("%d is negative\n", n);
/*Si n est négatif*/
}

return (0);
}
