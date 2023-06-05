#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
  *print_listint_safe - prints list safely
  *@head: pointer
  *
  *Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t jay, index =0;

	jay = looped_listint_len(head);

	if (jay == 0)
	{
		for (; head != NULL; jay++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < jay; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (jay);
}

/**
  *looped_listint_len - calculates the length of a linked list
  *@head: pointer
  *
  *Return: 0, or number of unique nodes
  */
size_t looped_listint_len(const listint_t *head)
{
	size_t jay;
	const listint_t *up, *down;

	if (head == NULL || head->next == NULL)
		return (0);

	up = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (up == down)
		{
			up == head;
			while (up != down)
			{
				jay++;
				up = up->next;
				down = down->next;
			}

			up = up->next;

			while (up != down)
			{
				jay++;
				up = up->next;
			}
			return (jay);
		}

		up = up->next;
		down = (down->next)->next;
	}
	return (0);
}


