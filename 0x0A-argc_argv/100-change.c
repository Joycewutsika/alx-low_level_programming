#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number
  * @argc: number of arguments
  * @argv: array
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	int total, x, num;
	int coins[] = {25, 10, 5, 2, 1};

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
	total = atoi(argv[1]);
	num = 0;
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && total >= 0; x++)
	{
		while (total >= coins[x])
		{
			num++;
			total -= coins[x];
		}
	}
	printf("%d\n", num);
	return (0);
}
