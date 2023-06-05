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
	listint_t *new_node;
	unsigned int x;
	listint_t *jay = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; jay && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = jay->next;
			jay->next = new_node;
			return (new_node);
		}
		else
			jay = jay->next;
	}
	return (NULL);
}

