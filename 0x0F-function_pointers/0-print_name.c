#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: stores the name of the function
 * @f: funtion pointer 
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);	
}



