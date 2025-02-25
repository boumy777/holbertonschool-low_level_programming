#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre (0 à 9).
 * @c: Le caractère à tester.
 *
 * Return: 1 si c est un chiffre, 0 sinon.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

