#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array with specific character
 * @size: size of array
 * @c: char to be in the array
 *
 * Return: pointer to array filled
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}

