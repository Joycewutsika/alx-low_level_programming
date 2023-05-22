#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all attributes of a dog
 * @d: dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

