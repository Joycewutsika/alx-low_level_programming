#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * Return: no return.
 */
void more_numbers(void)
{
	int i, m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
		}
		_putchar('\n');
	}
}
