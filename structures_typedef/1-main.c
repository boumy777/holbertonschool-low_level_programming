#include <stdio.h>
#include "dog.h"  /* Inclusion correcte */

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob"); /* Appel correct */

    printf("Dog: %s, Age: %.1f, Owner: %s\n", my_dog.name, my_dog.age, my_dog.owner);
    return (0);
}
