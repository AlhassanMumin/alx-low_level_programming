#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;

	new_Dog = malloc(sizeof(dog_t));
	if (new_Dog == NULL)
		return (NULL);
	new_Dog->name = name;
	new_Dog->owner = owner;
	new_Dog->age = age;
	return (new_Dog);
}
