#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _strlen - prints the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string
 *
 * Return: 0 if a non-digit, 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * errors - handles all errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: counts arguments
 * @argv: argument vector
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, m, move, num1, num2, *product, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	product = malloc(sizeof(int) * len);
	if (!product)
		return (1);
	for (m = 0; m <= len1 + len2; m++)
		product[m] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		move = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			move += product[len1 + len2 + 1] + (num1 * num2);
			product[len1 + len2 + 1] = move % 10;
			move /= 10;
		}
		if (move > 0)
			product[len1 + len2 + 1] += move;
	}
	for (m = 0; m < len - 1; m++)
	{
		if (product[m])
			a = 1;
		if (a)
			_putchar(product[m] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}

