#include "lists.h"

/**
  *get_nodeint_at_index - returns the index of te node
  *@head: first node
  *@index: index of node
  *
  * Return: pointer, otherwise NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *jay;
	unsigned int x = 0;

	while (jay && x < index)
	{
		jay = jay->next;
		x++;
	}
	return (jay ? jay : NULL);
}
