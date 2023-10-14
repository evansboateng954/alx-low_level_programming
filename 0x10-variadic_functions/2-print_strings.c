#include "variadic_functions.h"
/**
 * print_strings - print strings followed by a newline
 * print nil if one of the string is null
 * @separator: the character that separates the strings
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(my_list, char*) == NULL)
		{
			printf("(nil)");
		}
		else
		{

			printf("%s", va_arg(my_list, char*));
		}

		if (separator == NULL)
			;
		else
			 printf("%c", *separator);
	}
	putchar('\n');
}
