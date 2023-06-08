#include "main.h"

/**
  *get_bit - prints the value of a bit
  *@n: number
  *@index: index
  *
  *Return: value of bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
