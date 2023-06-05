#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node at a specific index
  *@head: pointer
  *@index: index
  *
  *Return: 1 (success), -1 (fail)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now = NULL;
	unsigned int x = 0;
	listint_t *jay = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(jay);
		return (1);
	}

	while (x < index - 1)
	{
		if (!jay || !(jay->next))
			return (-1);
		jay = jay->next;
		x++;
	}

	now = jay->next;
	jay->next = now->next;
	free(now);
	return (1);
}
