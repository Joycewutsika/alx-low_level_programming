#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: the allocated memory pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (x < (size * nmemb))
	{
		ptr[x] = 0;
		x++;
	}

	return (ptr);
}
