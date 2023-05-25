#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its paramters.
 * @n: The number of arguments.
 * @...: A variable number of paramters
 *
 * Return: 0, Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list joy;

	va_start(joy, n);

	for (x = 0; x < n; x++)
		sum += va_arg(joy, int);

	va_end(joy);

	return (sum);
}

