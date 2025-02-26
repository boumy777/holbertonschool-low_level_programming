#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14
 *
 * Description: Cette fonction affiche les nombres de 0 à 14
 * sur 10 lignes, avec un retour à la ligne après chaque série.
 * Elle utilise `_putchar` seulement 3 fois.
 */
void more_numbers(void)
{	char numbers[] =
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n" \
		"01234567891011121314\n";

	char *ptr = numbers;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}
