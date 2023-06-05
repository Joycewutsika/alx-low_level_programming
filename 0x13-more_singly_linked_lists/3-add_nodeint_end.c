#include "lists.h"

/**
 *add_nodeint_end - adds a node at the end
 *@head: pointer
 *@n: data used
 *
 *Return: pointer, otherwise NULL at failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newly = (listint_t *)malloc(sizeof(listint_t));

	if (newly == NULL)
	{
		return (NULL);
	}

	newly->n = n;
	newly->next = NULL;

	if (*head == NULL)
	{
		*head = newly;
		return (newly);
	}

	listint_t *now = *head;

	while (now->next != NULL)
	{
		now = now->next;
	}
	now->next = newly;

	return (newly);
}

