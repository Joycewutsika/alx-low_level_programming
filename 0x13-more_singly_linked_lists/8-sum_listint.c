#include "lists.h"

/**
  *sum_listint - computes the sum
  *@head: first node
  *
  *Return: sum
  */
int sum_listint(listint_t *head)
{
	listint_t *jay = head;
	int sum = 0;

	while (jay)
	{
		sum += jay->n;
		jay = jay->next;
	}
	return (sum);
}
