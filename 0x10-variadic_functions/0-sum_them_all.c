#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of its parameters
 * @n: the last fixed argument
 * Return: if n == 0 , return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int total = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	while (i < n)
	{
		total += va_arg(ptr, const unsigned int);
		i++;
	}
	return (total);
}



