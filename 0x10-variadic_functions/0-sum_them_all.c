#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of its parameters
 * @n: the first argument of a variadic function
 * Return: the sum of all the parameters
 *or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	
	int sum = 0;

	va_list my_list;

	va_start(my_list, n);


	for (i = n; i >= 0; i = va_arg(my_list, int))
	{
		if (n == 0)
			return (0);
		sum+= va_arg(my_list, int);
	}
	va_end(my_list);
	return (i);
}
