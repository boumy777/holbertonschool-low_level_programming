#include "main.h"
#include <stdio.h>

int main(void)
{
    int a = 98, b = 42;
    swap_int(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return (0);
}
