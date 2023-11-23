#include "dog.h"
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    if(d->name == NULL)
        printf("Name: (nil)");
    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}