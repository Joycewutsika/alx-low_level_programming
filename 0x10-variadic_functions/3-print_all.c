#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list men;

	va_start(men, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(men, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(men, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(men, double));
					break;
				case 's':
					str = va_arg(men, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(men);
}
