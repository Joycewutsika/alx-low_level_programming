#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
	dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
