#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node
 *@head: pointer
 *@idx: index
 *@n: data used
 *
 *Return: pointer, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newly;
	unsigned int x;
	listint_t *jay = *head;

	newly = malloc(sizeof(listint_t));
	if (!newly || head)
		return (NULL);

	newly->n = n;
	newly->next = NULL;

	if (idx == 0)
	{
		newly->next = *head;
		*head = newly;
		return (newly);
	}

	for (x = 0; jay && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newly->next = jay->next;
			jay->next = newly;
			return (newly);
		}
		else
			jay = jay->next;
	}
	return (NULL);
}

