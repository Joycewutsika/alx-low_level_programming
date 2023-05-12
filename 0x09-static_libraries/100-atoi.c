#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: void
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int result = 0;
	int sign = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	sign *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	result = (result * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	result *= sign;
	return (result);
}
