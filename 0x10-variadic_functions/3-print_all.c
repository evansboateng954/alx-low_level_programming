#include "variadic_functions.h"
/**print_all - prints anything
 * @format: a list of data types passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list my_list;
	va_start(my_list, format);


