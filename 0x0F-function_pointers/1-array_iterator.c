#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array of elements
 * @array: the array
 * @size: size of array
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
