#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 * Return: value of the last digit number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
	m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
