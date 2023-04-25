#include <stdio.h>

/**
 * numLength - returns the lenth of string
 * Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */
int main(void)
{
	unsigned long q1 = 1, q2 = 2, tmp, mx = 100000000, q1o = 0, q2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (q1o > 0)
			printf("%lu", q1o);
		initial0s = numLength(mx) - 1 - numLength(q1);
		while (q1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", q1);
		tmp = (q1 + q2) % mx;
		tmpo = q1o + q2o + (q1 + q2) / mx;
		q1 = q2;
		q1o = q2o;
		q2 = tmp;
		q2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}

