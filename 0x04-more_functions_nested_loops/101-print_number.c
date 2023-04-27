#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to input
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, d, print;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	d = a;
	print = 1;

	while (d > 9)
	{
		d /= 10;
		print *= 10;
	}

	for (; print >= 1; print /= 10)
	{
		_putchar(((a / print) % 10) + 48);
	}
}
