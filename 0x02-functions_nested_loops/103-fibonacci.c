#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int x, y, new, sum;

	x = 1;
	y = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		new = j + k;
		x = k;
		y = new;
	}

	printf("%lu\n", sum);
	return (0);
}
