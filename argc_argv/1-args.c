#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments (non utilisé)
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{	(void)argv; /* Évite un avertissement de variable non utilisée */
	
	printf("%d\n", argc - 1);
	return (0);
}
