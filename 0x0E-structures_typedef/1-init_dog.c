#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this func will initialize the dog
 * @d: pointer to the dog
 * @name: pointer to dog name
 * @age: the age of dog
 * @owner: the owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
