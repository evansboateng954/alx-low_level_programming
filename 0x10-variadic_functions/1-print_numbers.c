#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: the string to separate the numbers
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (!separator)
		return;

	va_start(ptr, n);

	while (i < n)
	{
		printf("%d", va_arg(ptr, unsigned int));

		if (i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
}

