#include "main.h"
/**
 * _print_rev_recursion - prints a string in  reverse order
 * @s: the string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
