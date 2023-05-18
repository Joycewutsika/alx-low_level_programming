#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - uses malloc to allocate memory
 * @b: number of bytes
 *
 * Return: the pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

