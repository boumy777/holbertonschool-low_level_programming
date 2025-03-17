#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
