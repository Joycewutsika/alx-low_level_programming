#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed
 * @n: The number of elements
 * @...: A variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list x;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(x, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}

