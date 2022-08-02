#ifndef DOG_H
#define DOG_H
/**
 * struct dog -this is about my dog
 * @name: the name of my dog
 * @age: the age of my dog
 * @owner: the owner fo the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
#endif
