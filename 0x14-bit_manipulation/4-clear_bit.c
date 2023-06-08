#include "main.h"

/**
  *clear_bit - sets bit to 0
  *@n: number
  *@index: index
  *
  *Return: 1 (success), -1 (failure)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
