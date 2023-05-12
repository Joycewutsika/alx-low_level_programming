#include <stdio.h>
#include "main.h"

/**
  * main - Prints all the names of arguments received
  * @argc: Counts the number of arguments
  * @argv: Arguments
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

