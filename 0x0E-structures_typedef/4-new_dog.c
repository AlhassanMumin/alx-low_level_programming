#include "dog.h"
#include <stdlib.h>
/**
 * new_dig - the new dog to create
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;

	if (name == NULL || age < 0 || owner == NULL)
			return (NULL);
	
	new_Dog = malloc(sizeof(dog_t));
	if (new_Dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	free(new_Dog);	
	new_Dog->name = name;
	new_Dog->owner = owner;
	new_Dog->age = age;
	return (new_Dog);
}
