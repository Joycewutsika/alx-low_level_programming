#include "lists.h"

/**
 *print_listint - it prints all elements in the list
 *@h: thetype of list
 *
 *Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t fig = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		fig++;
		h = h->next;
	}
	return (fig);
}
