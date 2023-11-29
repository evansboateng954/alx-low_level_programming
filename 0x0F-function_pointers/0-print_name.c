#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @f: function pointer
 * @name: name to print
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
