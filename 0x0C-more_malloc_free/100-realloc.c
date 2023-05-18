#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - uses malloc and free to reallocate a memory
 * @ptr: pointer to the memory
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory
 *
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrnew;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptrnew = malloc(new_size);
	if (!ptrnew)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptrnew[x] = old_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptrnew[x] = old_ptr[x];
	}

	free(ptr);
	return (ptrnew);
}

