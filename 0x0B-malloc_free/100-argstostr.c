#include "main.h"
#include <stdlib.h>
/**
 * argstostr - converts parameters to string
 * @ac: the argument count
 * @av: the argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, x = 0, y = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			y++;
	}
	y += ac;

	p = malloc(sizeof(char) * y + 1);
	if (p == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		p[x] = av[m][n];
		x++;
	}
	if (p[x] == '\0')
	{
		p[x++] = '\n';
	}
	}
	return (p);
}

