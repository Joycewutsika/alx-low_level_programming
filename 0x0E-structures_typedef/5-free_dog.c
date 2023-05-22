#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for the dog structure
 * @d: structure of dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

