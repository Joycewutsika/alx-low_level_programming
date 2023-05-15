#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: first string to concantenate
 * @s2: second string to concatenate
 * Return: the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	str = malloc(sizeof(char) * (x + y + 1));

	if (str == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		str[x] = s2[y];
		x++, y++;
	}
	str[x] = '\0';
	return (str);
}

