#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = '5';

    if (_isdigit(c))
        printf("%c est un chiffre.\n", c);
    else
        printf("%c n'est pas un chiffre.\n", c);

    return (0);
}


