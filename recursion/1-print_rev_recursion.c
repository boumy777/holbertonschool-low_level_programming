#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s) /* Vérifie si le caractère n'est pas '\0' */
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
