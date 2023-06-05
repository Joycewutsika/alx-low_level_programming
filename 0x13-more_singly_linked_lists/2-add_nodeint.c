#include "lists.h"

/**
 *add_nodeint - adds new node at the beginning
 *@head: pointer
 *@n: data for the new node
 *
 *Return: pointer, otherwise NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

