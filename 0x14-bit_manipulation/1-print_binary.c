#include "main.h"

/**
  *print_binary - prints the binary digits
  *@n: number to print
  */
void print_binary(unsigned long int n)
{
	int x, total_count = 0;
	unsigned long int mask;

	for (x = 63; x >= 0; x--)
	{
		mask = n >> x;

		if (mask & 1)
		{
			_putchar('1');
			total_count++;
		}
		else if (total_count)
			_putchar('0');
	}
	if (!total_count)
		_putchar('0');
}
