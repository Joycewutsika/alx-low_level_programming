#include "lists.h"

/**
  *get_nodeint_at_index - checks the nodes of a certain index
  *@head: pointer
  *@index: index
  *
  *Return: pointer to node, otherwise NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *jay = head;

	while (jay && x < index)
	{
		jay = jay->next;
		x++;
	}

	return (jay ? jay : NULL);
}
