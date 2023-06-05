#include "lists.h"

/**
  *free_listint_safe - frees a linked list
  *@h: pointer
  *
  *Return: number
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *jay;
	int less;
	size_t length = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		less = *h - (*h)->next;
		if (less > 0)
		{
			jay = (*h)->next;
			free(*h);
			*h = jay;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
