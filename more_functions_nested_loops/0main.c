#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = 'H';
    printf("%c est %s\n", c, _isupper(c) ? "une majuscule" : "une minuscule");

    c = 'h';
    printf("%c est %s\n", c, _isupper(c) ? "une majuscule" : "une minuscule");

    return (0);
}

