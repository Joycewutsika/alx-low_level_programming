#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string to get the length of
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
