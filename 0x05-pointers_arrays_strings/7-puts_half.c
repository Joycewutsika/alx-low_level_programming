#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int x, y, length;

	length = 0;

	for (x = 0; str[x] != '\0'; x++)
		length++;

	x = (length / 2);

	if ((length % 2) == 1)
	y = ((length + 1) / 2);
	
	for (x = y; str[x] != '\0'; x++)
	_putchar(str[x]);
	_putchar('\n');
}

