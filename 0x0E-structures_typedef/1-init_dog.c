#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises the structure of a dog
 * @d: structure type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
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

