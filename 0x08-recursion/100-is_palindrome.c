#include "main.h"
/**
  *_strlen_recursion - returns the length of a string
  * @s: string
  * Return: the length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_pal - checks the characters to string
 * @s: string
 * @a: smallest iterator
 * @b: biggest iterator
 *
 * Return: .
 */
int check_pal(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + check_pal(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
