#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lists the number of elements in a linked list
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; h = h->next)
		x++;
	return (x);
}

