#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *now = head;
	list_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now->str);
		free(now);
		now = next;
	}
}
