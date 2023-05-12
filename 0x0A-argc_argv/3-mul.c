#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - commutes the multiplies of two numbers
   *@argc: counts number of argument
   * @argv: the vector argument
   * Return: 0 if true, 1 if false
   */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}

