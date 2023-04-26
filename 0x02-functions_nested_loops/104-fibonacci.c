#include <stdio.h>

/**
 *  main - Prints the first 98 Fibonacci numbers
 *  Return: Always 0.
 */
int main(void)
{
	int c, tmp, tmp2;
	long int q1, q2, fq, fq2, q11, q22;

	q1 = 1;
	q2 = 2;
	tmp =  tmp2 = 1;
	printf("%ld, %ld", q1, q2);
	for (c = 0; c < 96; c++)
	{
		if (tmp)
		{
			fq = q1 + q2;
			printf(", %ld", fq);
			q1 = q2;
			q2 = fq;
		}
		else
		{
			if (tmp2)
			{
				q11 = q1 % 1000000000;
				q22 = q2 % 1000000000;
				q1 = q1 / 1000000000;
				q2 = q2 / 1000000000;
				tmp2 = 0;
			}
			fq2 = (q11 + q22);
			fq = q1 + q2 + (fq2 / 1000000000);
			printf(", %ld", fq);
			printf("%ld", fq2 % 1000000000);
			q1 = q2;
			q11 = q22;
			q2 = fq;
			q22 = (fq2 % 1000000000);
		}
		if (((q1 + q2) < 0) && tmp == 1)
			tmp = 0;
	}
	printf("\n");
	return (0);
}
