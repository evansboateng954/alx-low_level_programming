#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a newline
 * @separator: the character that separates th numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			;
		else
		{

			printf("%d", va_arg(my_list, int));
			printf("%c", *separator);
		}
	}
	putchar('\n');
}
