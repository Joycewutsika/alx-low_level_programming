#include "main.h"

/**
  *binary_to_uint - converts binary to unsigned int
  *@b: string
  *
  *Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (b[x] - '0');
	}

	return (decimalValue);
}
