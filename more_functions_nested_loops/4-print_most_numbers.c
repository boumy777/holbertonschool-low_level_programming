#include "main.h"

void print_most_numbers(void)
{	char numbers[] = "01356789\n";
	char *ptr = numbers;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}
