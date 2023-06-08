#include "main.h"

/**
  *flip_bits - checks the number of bits
  *@n: number
  *@m: number
  *
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, total_count = 0;
	unsigned long int mask;
	unsigned long int exclu_value = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		mask = exclu_value >> x;
		if (mask & 1)
			total_count++;
	}
	return (total_count);
}
