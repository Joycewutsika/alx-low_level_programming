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
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
  *looped_listint_len - calculates the length of a linked list
  *@head: pointer
  *
  *Return: 0, or number of unique nodes
  */
size_t looped_listint_len(const listint_t *head)
{
	size_t nodes;
	const listint_t *up, *down;

	if (head == NULL || head->next == NULL)
		return (0);

	up = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (up == down)
		{
			up = head;
			while (up != down)
			{
				nodes++;
				up = up->next;
				down = down->next;
			}

			up = up->next;
			while (up != down)
			{
				nodes++;
				up = up->next;
			}
			return (nodes);
		}

		up = up->next;
		down = (down->next)->next;
	}
	return (0);
}


