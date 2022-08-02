#include <stdio.h>
#include "dog.h"
/**
 * print_dog - it will print the struct dog
 * @d: pointer to dog variable
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
