#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    srand(time(0));  // Initialisation de la fonction aléatoire
    n = rand() - RAND_MAX / 2;  // Génère un nombre aléatoire positif ou négatif

    // Vérification et affichage du signe du nombre
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return (0);
}
