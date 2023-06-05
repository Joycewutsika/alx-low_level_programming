#include "lists.h"

/**
 *listint_len - prints the number of elements
 *@h: type of linked list
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t fig = 0;

	while (h != NULL)
	{
		fig++;
		h = h->next;
	}
	return (fig);
}
