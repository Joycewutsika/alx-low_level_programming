#include "lists.h"

/**
 *free_listint_safe - frees a linked list
 *@h: pointer
 *
 *Return: number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		temp = current->next;

		if ((void *)current <= (void *)temp)
		{
			free(current);
			*h = temp;
			len++;
		}
		else
		{
			free(current);
			*h = NULL;
			len++;
			break;
		}
	}

	return (len);
}
