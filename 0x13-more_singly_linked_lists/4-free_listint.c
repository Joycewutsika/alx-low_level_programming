#include "lists.h"

/**
  *free_listint - frees linked lists
  *@head: list to be freed
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
