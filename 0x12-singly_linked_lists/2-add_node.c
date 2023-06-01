#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to the list_t list
 * @str: string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *newly = malloc(sizeof(list_t));

	if (newly == NULL)
		return (NULL);

	newly->str = strdup(str);
	if (newly->str == NULL)
	{
		free(newly);
		return (NULL);
	}

	newly->len = strlen(str);
	newly->next = *head;
	*head = newly;

	return (newly);
}
