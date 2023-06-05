#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *jay;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		jay = (*head)->next;
		free(*head);
		*head = jay;
	}

	*head = NULL;
}
