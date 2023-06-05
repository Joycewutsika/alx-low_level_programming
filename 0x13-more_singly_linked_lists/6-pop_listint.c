#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: pointer
 *
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *jay;
	int fig = 0;

	if (!head || !*head)
		return (0);

	fig = (*head)->n;
	jay = (*head)->next;
	free(*head);
	*head = jay;

	return (fig);
}

