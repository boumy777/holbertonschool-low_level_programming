#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)  /* Loop through 0-8 for the first digit */
	{
		putchar(i + '0');      /* Print the first digit */
		putchar(',');           /* Print the comma */
		putchar(' ');           /* Print the space */
	}

	putchar(9 + '0');            /* Print the last digit, 9 */
	putchar('\n');               /* New line at the end */

	return (0);
}
