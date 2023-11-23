#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int len_name, len_owner;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return NULL;
    len_name = strlen(name);
    len_owner = strlen(owner);

    dog->name = malloc(sizeof(len_name));
    if (dog->name == NULL)
    {
        free(dog);
        free(dog->name);
        return NULL;
    }

    dog->owner = malloc(sizeof(len_owner));
    if (dog->owner == NULL)
    {
        free(dog);
        free(dog->owner);
        return NULL;
    }
    strcpy(dog->name, name);
    strcpy(dog->owner, owner);
    dog->age = age;
    return (dog);
}