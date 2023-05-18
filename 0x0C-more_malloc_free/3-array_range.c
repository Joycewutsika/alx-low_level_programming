#include <stdlib.h>
#include "main.h"

/**
 * *array_range - prints an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}

