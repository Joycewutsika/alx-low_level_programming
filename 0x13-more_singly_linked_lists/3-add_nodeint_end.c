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
	listint_t *new_node;
	listint_t *now = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (now->next)
		now = now->next;

	now->next = new_node;

	return (new_node);
}

