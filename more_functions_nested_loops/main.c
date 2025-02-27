#include "main.h"
#include <unistd.h>

void _putchar(char c)
{
    write(1, &c, 1);  /* Affiche un caractère sur la sortie standard*/
}
