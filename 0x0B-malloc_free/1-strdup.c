#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	char *p;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	p = malloc(sizeof(char) * (x + 1));

	if (p == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		p[y] = str[y];

	return (p);
}

