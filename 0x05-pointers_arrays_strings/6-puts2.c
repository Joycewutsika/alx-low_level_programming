#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
	y++;
	}
	for (x = 0; x < y; x+=2)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
