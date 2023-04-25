#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char num, alp;

	for (num = 0; num <= 9; num++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
